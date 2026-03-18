/*
 * XREFs of ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x140055F20
 * Callers:
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x140055AD8 (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxDeviceDescriptionEntry::MatchStateToFlags(FxDeviceDescriptionEntry *this, char Flags)
{
  FxChildListDescriptionState m_DescriptionState; // edx

  if ( (Flags & 1) != 0 && this->m_DescriptionState == DescriptionInstantiatedHasObject )
    return 1;
  if ( (Flags & 2) != 0 )
  {
    m_DescriptionState = this->m_DescriptionState;
    if ( m_DescriptionState == DescriptionReportedMissing || m_DescriptionState == DescriptionNotPresent )
      return 1;
  }
  if ( (Flags & 4) != 0 )
    return this->m_DescriptionState == DescriptionPresentNeedsInstantiation;
  return 0;
}
