/*
 * XREFs of ExDisableResourceBoostLite @ 0x1402609F0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall ExDisableResourceBoostLite(PERESOURCE Resource)
{
  __int64 ReservedLowFlags; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  ReservedLowFlags = Resource->ReservedLowFlags;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock(&Resource->SpinLock, &LockHandle);
  Resource->ReservedLowFlags |= 8u;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
