/*
 * XREFs of CarpSecondaryDataCallback @ 0x14064CB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CarpSecondaryDataCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  ReasonSpecificData[1] = CarSecondaryDataGuid;
  *((_DWORD *)ReasonSpecificData + 10) = HIDWORD(stru_140F066E8.SwapListEntry.Next);
  *((_QWORD *)ReasonSpecificData + 4) = &stru_140F066E8.216;
}
