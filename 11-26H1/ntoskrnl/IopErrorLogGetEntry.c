/*
 * XREFs of IopErrorLogGetEntry @ 0x1404E08AC
 * Callers:
 *     IopErrorLogThread @ 0x140ADBA70 (IopErrorLogThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void *IopErrorLogGetEntry()
{
  KIRQL v0; // al
  void *IptSaveArea; // rbx
  KIRQL v2; // dl
  __int64 v3; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  IptSaveArea = IopSessionNotificationLock.IptSaveArea;
  v2 = v0;
  if ( IopSessionNotificationLock.IptSaveArea == &IopSessionNotificationLock.IptSaveArea )
  {
    IptSaveArea = 0LL;
    IopErrorLogSessionPending = 0;
  }
  else
  {
    if ( *((struct _KTHREAD **)IopSessionNotificationLock.IptSaveArea + 1) != (struct _KTHREAD *)&IopSessionNotificationLock.IptSaveArea
      || (v3 = *(_QWORD *)IopSessionNotificationLock.IptSaveArea,
          *(void **)(*(_QWORD *)IopSessionNotificationLock.IptSaveArea + 8LL) != IopSessionNotificationLock.IptSaveArea) )
    {
      __fastfail(3u);
    }
    IopSessionNotificationLock.IptSaveArea = *(void **)IopSessionNotificationLock.IptSaveArea;
    *(_QWORD *)(v3 + 8) = &IopSessionNotificationLock.IptSaveArea;
  }
  KeReleaseSpinLock(&IopErrorLogLock, v2);
  return IptSaveArea;
}
