/*
 * XREFs of WheapPushPendingOfflineWrapper @ 0x1408507F8
 * Callers:
 *     WheapProcessOfflineList @ 0x1406DCDC0 (WheapProcessOfflineList.c)
 *     WheapTrackPendingPage @ 0x140850828 (WheapTrackPendingPage.c)
 * Callees:
 *     ExInterlockedPushEntryList @ 0x1406D4A20 (ExInterlockedPushEntryList.c)
 */

PSINGLE_LIST_ENTRY __fastcall WheapPushPendingOfflineWrapper(PSINGLE_LIST_ENTRY ListEntry)
{
  PSINGLE_LIST_ENTRY result; // rax

  result = ExInterlockedPushEntryList(
             (PSINGLE_LIST_ENTRY)&CmpContextListLock.WaitBlockFill11[32],
             ListEntry,
             (PKSPIN_LOCK)&CmpContextListLock.WaitBlock[0].SparePtr);
  _InterlockedIncrement((volatile signed __int32 *)&CmpContextListLock.WaitBlockFill11[48]);
  return result;
}
