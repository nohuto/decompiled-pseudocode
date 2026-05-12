/*
 * XREFs of sub_140053BEC @ 0x140053BEC
 * Callers:
 *     sub_14001ACB8 @ 0x14001ACB8 (sub_14001ACB8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140053BEC(__int64 a1, char a2)
{
  char v4; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 48), &LockHandle);
  v4 = *(_BYTE *)(a1 + 504);
  *(_BYTE *)(a1 + 504) = v4 ^ (v4 ^ (2 * a2)) & 2;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (v4 & 2) != 0;
}
