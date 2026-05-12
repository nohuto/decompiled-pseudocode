/*
 * XREFs of sub_14005A3AC @ 0x14005A3AC
 * Callers:
 *     sub_1400977C0 @ 0x1400977C0 (sub_1400977C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14005A3AC(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 5528), &LockHandle);
  if ( !*(_DWORD *)(a1 + 5536) )
    KeSetCoalescableTimer((PKTIMER)(a1 + 5400), (LARGE_INTEGER)-5000000LL, 0x1F4u, 0x32u, (PKDPC)(a1 + 5464));
  ++*(_DWORD *)(a1 + 5536);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
