/*
 * XREFs of HalpBlkStartBlockedProcessor @ 0x140BEF0B8
 * Callers:
 *     HalpInterruptStartBlockedProcessors @ 0x1405912A8 (HalpInterruptStartBlockedProcessors.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HalpInterruptStartProcessor @ 0x140BEA190 (HalpInterruptStartProcessor.c)
 *     HalpBlkInitializeProcessorState @ 0x140BEEEC0 (HalpBlkInitializeProcessorState.c)
 */

__int64 __fastcall HalpBlkStartBlockedProcessor(int a1, unsigned int a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  unsigned __int64 v7[189]; // [rsp+30h] [rbp-5E8h] BYREF

  v2 = a2;
  memset_0(v7, 0, 0x5E0uLL);
  if ( a1 == HalpInterruptFirstBlockedProcessorIndex )
    LODWORD(HalpBlkNumberProcessors) = 0;
  HalpBlkInitializeProcessorState(v7, *(char **)(HalpBlkPcr + 8LL * (unsigned int)HalpBlkNumberProcessors), v4, v5, v2);
  result = HalpInterruptStartProcessor(0xFFFFFFFF, v2, 4, v7);
  if ( (_DWORD)result != 4 )
    KeBugCheckEx(0x1DAu, 2uLL, (unsigned int)HalpBlkNumberProcessors, v2, 0LL);
  LODWORD(HalpBlkNumberProcessors) = HalpBlkNumberProcessors + 1;
  return result;
}
