/*
 * XREFs of EtwpAllocatePmcData @ 0x140825168
 * Callers:
 *     EtwpUpdatePmcCounters @ 0x1408273D4 (EtwpUpdatePmcCounters.c)
 *     EtwpUpdatePmcEvents @ 0x140827558 (EtwpUpdatePmcEvents.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402767B0 (KeQueryMaximumProcessorCountEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  __int64 *Pool2; // rbx
  __int64 v4; // rax

  KeQueryMaximumProcessorCountEx(0xFFFFu);
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  v4 = ExAllocatePool2(0x40uLL);
  *Pool2 = v4;
  if ( !v4 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(a1 + 1064) = Pool2;
  return 0LL;
}
