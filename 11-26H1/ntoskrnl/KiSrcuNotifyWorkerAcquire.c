/*
 * XREFs of KiSrcuNotifyWorkerAcquire @ 0x1405F8054
 * Callers:
 *     KiSrcuNotifyGracePeriodStarted @ 0x14052B694 (KiSrcuNotifyGracePeriodStarted.c)
 *     KeSrcuFree @ 0x1405F7980 (KeSrcuFree.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140430460 (KeRemoveQueueDpcEx.c)
 */

_BOOL8 __fastcall KiSrcuNotifyWorkerAcquire(__int64 a1, int a2, unsigned __int32 a3)
{
  if ( a2 == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 68), a3);
    return _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), 1, 0) == 0;
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 72), 2);
    _InterlockedExchange((volatile __int32 *)(a1 + 68), 0);
    KeRemoveQueueDpcEx((int *)a1, 1);
    _InterlockedExchange((volatile __int32 *)(a1 + 68), a3);
    return 1LL;
  }
}
