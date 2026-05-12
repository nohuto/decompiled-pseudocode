/*
 * XREFs of sub_14003664C @ 0x14003664C
 * Callers:
 *     sub_1400436D0 @ 0x1400436D0 (sub_1400436D0.c)
 *     sub_14007A400 @ 0x14007A400 (sub_14007A400.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14003664C(__int64 a1)
{
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
  if ( (*(_BYTE *)(a1 + 505) & 0x20) == 0 && (*(_DWORD *)(a1 + 512) & 4) == 0 )
  {
    KeCancelTimer((PKTIMER)(a1 + 1056));
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 504), 0xDu);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
