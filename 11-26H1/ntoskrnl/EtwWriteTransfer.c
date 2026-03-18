/*
 * XREFs of EtwWriteTransfer @ 0x140212F30
 * Callers:
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     CmpLogFlushPhaseStart @ 0x1408B4408 (CmpLogFlushPhaseStart.c)
 *     CmpLogFlushPhaseEnd @ 0x1408B44E4 (CmpLogFlushPhaseEnd.c)
 *     CmpInitHiveFromFile @ 0x1408B48B4 (CmpInitHiveFromFile.c)
 *     CmpLogHiveFileInaccessible @ 0x1408B5990 (CmpLogHiveFileInaccessible.c)
 *     EtwpWriteAppStateChange @ 0x14095549C (EtwpWriteAppStateChange.c)
 *     VrpPreOpenOrCreate @ 0x140975760 (VrpPreOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x140976F10 (VrpPostQueryKey.c)
 *     VrpPreQueryKeyName @ 0x140AA9B60 (VrpPreQueryKeyName.c)
 *     EtwpWriteProcessStarted @ 0x140AB66AC (EtwpWriteProcessStarted.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABAD8C (PspSetProcessForegroundBackgroundRequest.c)
 *     FlushEventEntryList @ 0x140AE0550 (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 */

NTSTATUS __stdcall EtwWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  return EtwWriteEx(RegHandle, EventDescriptor, 0LL, 0, ActivityId, RelatedActivityId, UserDataCount, UserData);
}
