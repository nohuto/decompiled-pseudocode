/*
 * XREFs of IopIrpExtensionControl @ 0x1405CAA44
 * Callers:
 *     IopEtwEnableCallback @ 0x1407949C0 (IopEtwEnableCallback.c)
 *     IoRegisterIoTracking @ 0x140797B40 (IoRegisterIoTracking.c)
 *     IoUnregisterIoTracking @ 0x140797CB0 (IoUnregisterIoTracking.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     IopUpdateFunctionPointers @ 0x1405CAB80 (IopUpdateFunctionPointers.c)
 */

void __fastcall IopIrpExtensionControl(int a1, int a2)
{
  _BOOL8 v4; // r8
  __int64 v5; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&IopSessionNotificationLock.SuspendEvent.Header.WaitListHead, &LockHandle);
  v5 = 1LL;
  if ( a2 == 1 )
  {
    v4 = IopIrpExtensionStatus == 0;
    IopIrpExtensionStatus |= a1;
    if ( (a1 & 1) != 0 )
      ++dword_140E65F84;
    if ( (a1 & 2) != 0 )
      ++dword_140E65F88;
    if ( v4 )
    {
      LOBYTE(v4) = 1;
LABEL_16:
      IopUpdateFunctionPointers(4LL, v5, v4);
    }
  }
  else
  {
    if ( (a1 & 1) != 0 && !--dword_140E65F84 )
      IopIrpExtensionStatus &= ~1u;
    if ( (a1 & 2) != 0 && !--dword_140E65F88 )
      IopIrpExtensionStatus &= ~2u;
    if ( !IopIrpExtensionStatus )
    {
      LOBYTE(v4) = 1;
      v5 = 0LL;
      goto LABEL_16;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
