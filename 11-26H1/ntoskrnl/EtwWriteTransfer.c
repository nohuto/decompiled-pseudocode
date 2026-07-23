/*
 * XREFs of EtwWriteTransfer @ 0x140213010
 * Callers:
 *     CmpFlushHive @ 0x1408B97F0 (CmpFlushHive.c)
 *     CmpLogFlushPhaseStart @ 0x1408BA9DC (CmpLogFlushPhaseStart.c)
 *     CmpLogFlushPhaseEnd @ 0x1408BAAB8 (CmpLogFlushPhaseEnd.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmpLogHiveFileInaccessible @ 0x1408BBF64 (CmpLogHiveFileInaccessible.c)
 *     VrpPreOpenOrCreate @ 0x140937770 (VrpPreOpenOrCreate.c)
 *     VrpPostQueryKey @ 0x140938F20 (VrpPostQueryKey.c)
 *     EtwpWriteProcessStarted @ 0x1409D0E30 (EtwpWriteProcessStarted.c)
 *     EtwpWriteAppStateChange @ 0x1409D1170 (EtwpWriteAppStateChange.c)
 *     VrpPreQueryKeyName @ 0x140AA5E64 (VrpPreQueryKeyName.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140ABC24C (PspSetProcessForegroundBackgroundRequest.c)
 *     FlushEventEntryList @ 0x140ADDD90 (FlushEventEntryList.c)
 * Callees:
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
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
