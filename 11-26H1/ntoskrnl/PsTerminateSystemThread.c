/*
 * XREFs of PsTerminateSystemThread @ 0x140949E90
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1405C77F0 (InbvRotateGuiBootDisplay.c)
 *     PopIrpWorker @ 0x14060EED0 (PopIrpWorker.c)
 *     DifPsTerminateSystemThreadWrapper @ 0x140698B80 (DifPsTerminateSystemThreadWrapper.c)
 *     ExpExpirationThread @ 0x14083BDD0 (ExpExpirationThread.c)
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 *     IopThreadStart @ 0x140949E30 (IopThreadStart.c)
 *     EtwpLogger @ 0x140A12D80 (EtwpLogger.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x14094B010 (PspTerminateThreadByPointer.c)
 */

NTSTATUS __stdcall PsTerminateSystemThread(NTSTATUS ExitStatus)
{
  __int64 v1; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  char v4; // r8

  v1 = (unsigned int)ExitStatus;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    return -1073741811;
  v4 = 1;
  return PspTerminateThreadByPointer(CurrentThread, v1, v4);
}
