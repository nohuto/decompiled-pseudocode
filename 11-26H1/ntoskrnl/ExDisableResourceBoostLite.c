/*
 * XREFs of ExDisableResourceBoostLite @ 0x14021A270
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
