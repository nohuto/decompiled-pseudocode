/*
 * XREFs of IopErrorLogRequeueEntry @ 0x140506740
 * Callers:
 *     IopErrorLogThread @ 0x140ADBA70 (IopErrorLogThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall IopErrorLogRequeueEntry(void **a1)
{
  KIRQL v2; // al
  _QWORD *IptSaveArea; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
  IptSaveArea = IopSessionNotificationLock.IptSaveArea;
  if ( *((struct _KTHREAD **)IopSessionNotificationLock.IptSaveArea + 1) != (struct _KTHREAD *)&IopSessionNotificationLock.IptSaveArea )
    __fastfail(3u);
  *a1 = IopSessionNotificationLock.IptSaveArea;
  a1[1] = &IopSessionNotificationLock.IptSaveArea;
  IptSaveArea[1] = a1;
  IopSessionNotificationLock.IptSaveArea = a1;
  ErrorLogSessionOpened = 0;
  KeReleaseSpinLock(&IopErrorLogLock, v2);
}
