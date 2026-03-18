/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x1407B9E34
 * Callers:
 *     WheapProcessOfflineList @ 0x1406538A0 (WheapProcessOfflineList.c)
 *     WheapTrackPendingPage @ 0x1407B9E64 (WheapTrackPendingPage.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x14064C460 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList((PSINGLE_LIST_ENTRY)&WheapOfflineChecker, ListEntry, &qword_140EF7508);
  _InterlockedIncrement(&dword_140EF7510);
  return result;
}
