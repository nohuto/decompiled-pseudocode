/*
 * XREFs of ExInterlockedPushEntryList @ 0x1406D4A20
 * Callers:
 *     WheapPushPendingOfflineWrapper @ 0x1408507F8 (WheapPushPendingOfflineWrapper.c)
 * Callees:
 *     ExpAcquireSpinLockDisabled @ 0x1403E16F0 (ExpAcquireSpinLockDisabled.c)
 *     ExpReleaseSpinLockDisabled @ 0x1403E2CF8 (ExpReleaseSpinLockDisabled.c)
 */

PSINGLE_LIST_ENTRY __stdcall ExInterlockedPushEntryList(
        PSINGLE_LIST_ENTRY ListHead,
        PSINGLE_LIST_ENTRY ListEntry,
        PKSPIN_LOCK Lock)
{
  char v6; // al
  _SINGLE_LIST_ENTRY *Next; // rbx
  __int64 v8; // r8
  __int64 v9; // r9

  v6 = ExpAcquireSpinLockDisabled((volatile signed __int32 *)Lock);
  Next = ListHead->Next;
  ListEntry->Next = ListHead->Next;
  ListHead->Next = ListEntry;
  ExpReleaseSpinLockDisabled((volatile signed __int64 *)Lock, v6, v8, v9);
  return Next;
}
