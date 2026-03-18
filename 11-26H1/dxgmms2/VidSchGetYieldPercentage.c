/*
 * XREFs of VidSchGetYieldPercentage @ 0x140056830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidSchGetYieldPercentage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2016), &LockHandle);
  *a3 = *(_DWORD *)(a1 + 232);
  *a2 ^= ((unsigned __int8)*a2 ^ (unsigned __int8)(*(_DWORD *)(a1 + 2824) >> 3)) & 1;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
