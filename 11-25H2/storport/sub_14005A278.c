/*
 * XREFs of sub_14005A278 @ 0x14005A278
 * Callers:
 *     sub_14003A710 @ 0x14003A710 (sub_14003A710.c)
 *     sub_14009E318 @ 0x14009E318 (sub_14009E318.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005A278(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5528), &LockHandle);
  if ( *(_DWORD *)(a1 + 5536) == 1 )
    KeCancelTimer((PKTIMER)(a1 + 5400));
  --*(_DWORD *)(a1 + 5536);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
