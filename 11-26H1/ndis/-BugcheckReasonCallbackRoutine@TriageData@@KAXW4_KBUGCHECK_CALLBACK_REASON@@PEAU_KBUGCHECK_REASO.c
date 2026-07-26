/*
 * XREFs of ?BugcheckReasonCallbackRoutine@TriageData@@KAXW4_KBUGCHECK_CALLBACK_REASON@@PEAU_KBUGCHECK_REASON_CALLBACK_RECORD@@PEAXK@Z @ 0x1400E7C20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddTriageDumpDataArray@TriageData@@IEAAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@@Z @ 0x1400E7B78 (-AddTriageDumpDataArray@TriageData@@IEAAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@@Z.c)
 */

void __fastcall TriageData::BugcheckReasonCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        struct _KBUGCHECK_TRIAGE_DUMP_DATA *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( Reason == KbCallbackTriageDumpData && ReasonSpecificDataLength >= 0x38 )
    TriageData::AddTriageDumpDataArray((TriageData *)&Record[-1].Checksum, ReasonSpecificData);
}
