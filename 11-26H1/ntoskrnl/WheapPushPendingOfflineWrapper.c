/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x14084A4E8
 * Callers:
 *     WheapProcessOfflineList @ 0x1406D8C30 (WheapProcessOfflineList.c)
 *     WheapTrackPendingPage @ 0x14084A518 (WheapTrackPendingPage.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x1406D09F0 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList(
             (PSINGLE_LIST_ENTRY)&CmpCallbackListLock.WaitBlockFill11[40],
             ListEntry,
             (PKSPIN_LOCK)&CmpCallbackListLock.WaitBlock[1]);
  _InterlockedIncrement((volatile signed __int32 *)&CmpCallbackListLock.WaitBlockFill11[56]);
  return result;
}
