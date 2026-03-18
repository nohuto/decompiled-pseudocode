/*
 * XREFs of DxgDbgTriageDumpCallback @ 0x140082F30
 * Callers:
 *     <none>
 * Callees:
 *     DxgkpAddTriageAdapterData @ 0x14006B778 (DxgkpAddTriageAdapterData.c)
 */

void __fastcall DxgDbgTriageDumpCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        SIZE_T ReasonSpecificDataLength)
{
  PKTRIAGE_DUMP_DATA_ARRAY v5; // rdx

  if ( (ReasonSpecificData[2] & 1) != 0 )
  {
    v5 = KtriageDumpDataArray;
    if ( KtriageDumpDataArray )
    {
      if ( ReasonSpecificData[4] == 270
        || ReasonSpecificData[4] == 275
        || ReasonSpecificData[4] == 278
        || ReasonSpecificData[4] == 281 )
      {
        DxgkpAddTriageAdapterData(
          (__int64)ReasonSpecificData,
          (__int64)KtriageDumpDataArray,
          (__int64)ReasonSpecificData,
          ReasonSpecificDataLength);
        v5 = KtriageDumpDataArray;
      }
      *(_QWORD *)ReasonSpecificData = v5;
    }
  }
}
