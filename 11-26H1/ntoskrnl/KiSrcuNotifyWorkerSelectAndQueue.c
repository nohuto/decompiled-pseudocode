/*
 * XREFs of KiSrcuNotifyWorkerSelectAndQueue @ 0x1405F81D8
 * Callers:
 *     KiSrcuNotifyGracePeriodStarted @ 0x14052B694 (KiSrcuNotifyGracePeriodStarted.c)
 *     KeSrcuFree @ 0x1405F7980 (KeSrcuFree.c)
 *     KiSrcuNotifyWorkerDpcRoutine @ 0x1405F80C0 (KiSrcuNotifyWorkerDpcRoutine.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 */

void __fastcall KiSrcuNotifyWorkerSelectAndQueue(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rdx

  while ( 1 )
  {
    v4 = *(_DWORD *)(BugCheckParameter2 + 68);
    if ( !v4 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 72), 0, 1) != 1 )
        break;
      v4 = *(_DWORD *)(BugCheckParameter2 + 68);
      if ( !v4 || _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 72), 1, 0) )
        break;
    }
    _BitScanForward(&v4, v4);
    v5 = v4 + *(_DWORD *)(BugCheckParameter2 + 64);
    if ( (unsigned int)v5 < KeMaximumProcessors && KiProcessorBlock[v5] )
    {
      if ( !*(_QWORD *)(BugCheckParameter2 + 56) )
        *(_WORD *)(BugCheckParameter2 + 2) = v4 + *(_WORD *)(BugCheckParameter2 + 64) + 2048;
      KiInsertQueueDpc(BugCheckParameter2, BugCheckParameter2, a2, 0LL, 0);
      return;
    }
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 68), ~(1 << v4));
  }
  if ( a2 )
    KeSignalGate(a2, 0LL, a2);
}
