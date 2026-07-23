/*
 * XREFs of IopErrorLogGetEntry @ 0x1404D9F8C
 * Callers:
 *     IopErrorLogThread @ 0x140AD8FC0 (IopErrorLogThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

_KAFFINITY_EX *IopErrorLogGetEntry()
{
  KIRQL v0; // al
  _KAFFINITY_EX *Affinity; // rbx
  KIRQL v2; // dl
  __int64 v3; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  Affinity = IopPerfIoTrackingLock.Affinity;
  v2 = v0;
  if ( (_KAFFINITY_EX **)IopPerfIoTrackingLock.Affinity == &IopPerfIoTrackingLock.Affinity )
  {
    Affinity = 0LL;
    IopErrorLogSessionPending = 0;
  }
  else
  {
    if ( (_KAFFINITY_EX **)IopPerfIoTrackingLock.Affinity->Bitmap[0] != &IopPerfIoTrackingLock.Affinity
      || (v3 = *(_QWORD *)IopPerfIoTrackingLock.Affinity,
          *(_KAFFINITY_EX **)(*(_QWORD *)IopPerfIoTrackingLock.Affinity + 8LL) != IopPerfIoTrackingLock.Affinity) )
    {
      __fastfail(3u);
    }
    IopPerfIoTrackingLock.Affinity = *(_KAFFINITY_EX **)IopPerfIoTrackingLock.Affinity;
    *(_QWORD *)(v3 + 8) = &IopPerfIoTrackingLock.Affinity;
  }
  KeReleaseSpinLock(&IopErrorLogLock, v2);
  return Affinity;
}
