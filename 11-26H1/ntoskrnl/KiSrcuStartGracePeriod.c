/*
 * XREFs of KiSrcuStartGracePeriod @ 0x1405F8724
 * Callers:
 *     KeSrcuSynchronize @ 0x1407BE320 (KeSrcuSynchronize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSrcuNotifyGracePeriodStarted @ 0x14052B694 (KiSrcuNotifyGracePeriodStarted.c)
 *     KiSrcuFlushCompleted @ 0x140531064 (KiSrcuFlushCompleted.c)
 */

_QWORD **__fastcall KiSrcuStartGracePeriod(KSPIN_LOCK *a1, KSPIN_LOCK *a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  KSPIN_LOCK **v6; // rdx

  v4 = KeAcquireSpinLockRaiseToDpc(a1 + 5);
  _m_prefetchw(a1 + 7);
  v5 = a1[7] + 1;
  a2[2] = v5;
  v6 = (KSPIN_LOCK **)a1[10];
  if ( *v6 != a1 + 9 )
    __fastfail(3u);
  *a2 = (KSPIN_LOCK)(a1 + 9);
  a2[1] = (KSPIN_LOCK)v6;
  *v6 = a2;
  a1[10] = (KSPIN_LOCK)a2;
  a1[7] = v5;
  KeReleaseSpinLock(a1 + 5, v4);
  KiSrcuNotifyGracePeriodStarted((__int64)a1, 0LL);
  return KiSrcuFlushCompleted((__int64)a1, 1u);
}
