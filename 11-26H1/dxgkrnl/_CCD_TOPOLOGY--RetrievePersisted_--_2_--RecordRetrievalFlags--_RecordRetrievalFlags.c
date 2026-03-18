/*
 * XREFs of _CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags @ 0x140419768
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403AE25C (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::RetrievePersisted_::_2_::RecordRetrievalFlags::_RecordRetrievalFlags(_DWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return DisplayScenarioJournalCCDRetrieval();
  return result;
}
