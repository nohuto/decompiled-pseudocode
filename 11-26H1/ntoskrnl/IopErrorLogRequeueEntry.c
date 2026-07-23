/*
 * XREFs of IopErrorLogRequeueEntry @ 0x1404FFFF0
 * Callers:
 *     IopErrorLogThread @ 0x140AD8FC0 (IopErrorLogThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall IopErrorLogRequeueEntry(_KAFFINITY_EX *a1)
{
  KIRQL v2; // al
  _KAFFINITY_EX *Affinity; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  Affinity = IopPerfIoTrackingLock.Affinity;
  if ( (_KAFFINITY_EX **)IopPerfIoTrackingLock.Affinity->Bitmap[0] != &IopPerfIoTrackingLock.Affinity )
    __fastfail(3u);
  *(_QWORD *)&a1->Count = IopPerfIoTrackingLock.Affinity;
  a1->Bitmap[0] = (unsigned __int64)&IopPerfIoTrackingLock.Affinity;
  Affinity->Bitmap[0] = (unsigned __int64)a1;
  IopPerfIoTrackingLock.Affinity = a1;
  ErrorLogSessionOpened = 0;
  KeReleaseSpinLock(&IopErrorLogLock, v2);
}
