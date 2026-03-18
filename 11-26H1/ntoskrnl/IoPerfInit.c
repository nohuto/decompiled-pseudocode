/*
 * XREFs of IoPerfInit @ 0x14050EB0C
 * Callers:
 *     IoRegisterIoTracking @ 0x140797B40 (IoRegisterIoTracking.c)
 *     EtwpEnableKernelTrace @ 0x14095ACA0 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1405CAB80 (IopUpdateFunctionPointers.c)
 */

__int64 __fastcall IoPerfInit(int a1)
{
  _BOOL8 v2; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&IopSessionNotificationLock.SuspendEvent.Header.WaitListHead, &LockHandle);
  v2 = IopPerfStatus == 0;
  IopPerfStatus |= a1;
  if ( (a1 & 1) != 0 )
    ++dword_140E65F6C;
  if ( (a1 & 2) != 0 )
    ++dword_140E65F70;
  if ( v2 )
  {
    LOBYTE(v2) = 1;
    IopUpdateFunctionPointers(2LL, 1LL, v2);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
