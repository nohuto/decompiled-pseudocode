/*
 * XREFs of MiProcessorInEngineProcessAffinity @ 0x14070E9B8
 * Callers:
 *     MiZeroRemainOnProcessor @ 0x1403E8CEC (MiZeroRemainOnProcessor.c)
 *     MiGetIdleProcessorCount @ 0x1403E987C (MiGetIdleProcessorCount.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall MiProcessorInEngineProcessAffinity(__int64 a1, __int64 a2)
{
  _WORD *v2; // rdi
  int v3; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD **)(a1 + 120);
  v3 = 0;
  v7 = 0LL;
  if ( !*(_DWORD *)(a1 + 16) )
    return 0LL;
  while ( 1 )
  {
    if ( v2[4] == *(_WORD *)(a2 + 8) )
    {
      RtlCopyVolatileMemory(&v7, v2, 8uLL);
      if ( (*(_QWORD *)a2 & v7) != 0 )
        break;
    }
    v2 += 8;
    if ( (unsigned int)++v3 >= *(_DWORD *)(a1 + 16) )
      return 0LL;
  }
  return 1LL;
}
