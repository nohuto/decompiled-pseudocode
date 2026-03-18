/*
 * XREFs of VidSchiInterlockedReadUlong @ 0x14003F594
 * Callers:
 *     VidSchFlushAdapter @ 0x1400C1D50 (VidSchFlushAdapter.c)
 *     VidSchFlushDevice @ 0x1400E8640 (VidSchFlushDevice.c)
 *     VidSchFlushContext @ 0x140116BF0 (VidSchFlushContext.c)
 *     VidSchFlushHwQueue @ 0x140119830 (VidSchFlushHwQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiInterlockedReadUlong(KSPIN_LOCK *a1, _DWORD *a2)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  LODWORD(a2) = *a2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)a2;
}
