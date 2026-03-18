/*
 * XREFs of PsTerminateSystemThread @ 0x140956130
 * Callers:
 *     InbvRotateGuiBootDisplay @ 0x1405C4F80 (InbvRotateGuiBootDisplay.c)
 *     PopIrpWorker @ 0x14060BD70 (PopIrpWorker.c)
 *     DifPsTerminateSystemThreadWrapper @ 0x140694FA0 (DifPsTerminateSystemThreadWrapper.c)
 *     ExpExpirationThread @ 0x140835B90 (ExpExpirationThread.c)
 *     CmpLoadHiveThread @ 0x14084B550 (CmpLoadHiveThread.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140862230 (CmpHiveCachePopulateHiveEntryThread.c)
 *     IopThreadStart @ 0x140956070 (IopThreadStart.c)
 *     EtwpLogger @ 0x140A13B90 (EtwpLogger.c)
 * Callees:
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
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
