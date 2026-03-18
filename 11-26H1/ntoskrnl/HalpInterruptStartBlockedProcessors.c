/*
 * XREFs of HalpInterruptStartBlockedProcessors @ 0x1405912A8
 * Callers:
 *     HalStartNextProcessor @ 0x1405809B0 (HalStartNextProcessor.c)
 *     HalpInterruptReinitialize @ 0x140BEA368 (HalpInterruptReinitialize.c)
 *     HalpProcInitSystem @ 0x140BEB320 (HalpProcInitSystem.c)
 * Callees:
 *     HalpGetProcessorStateByNtIndex @ 0x140425B78 (HalpGetProcessorStateByNtIndex.c)
 *     HalpBlkStartBlockedProcessor @ 0x140BEF0B8 (HalpBlkStartBlockedProcessor.c)
 */

__int64 __fastcall HalpInterruptStartBlockedProcessors(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // esi
  int i; // ebp
  ULONG_PTR v4; // rdi
  unsigned __int64 v5; // rbx

  result = HalpGetProcessorStateByNtIndex(a1);
  v2 = 0;
  for ( i = *(_DWORD *)(result + 8); v2 < (unsigned int)HalpInterruptProcessorCount; ++v2 )
  {
    v4 = HalpInterruptProcessorState;
    v5 = (unsigned __int64)v2 << 6;
    if ( *(_BYTE *)(v5 + HalpInterruptProcessorState + 56) && *(_DWORD *)(v5 + HalpInterruptProcessorState + 60) == i )
    {
      if ( HalpInterruptStartHyperthreadSiblings )
        result = HalpBlkStartBlockedProcessor(v2, *(unsigned int *)(v5 + HalpInterruptProcessorState + 8));
      *(_WORD *)(v5 + v4 + 12) = 257;
    }
  }
  return result;
}
