/*
 * XREFs of ?CleanupDescriptions@FxChildList@@IEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x140083734
 * Callers:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140043B90 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x140046CEC (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxChildList::CleanupDescriptions(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddrDescription)
{
  void (__fastcall *m_EvtAddressDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v6; // rcx
  void (__fastcall *m_EvtIdentificationDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v9; // rbx

  m_EvtAddressDescriptionCleanup = this->m_EvtAddressDescriptionCleanup;
  if ( m_EvtAddressDescriptionCleanup && AddrDescription )
  {
    v6 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v6 = 0LL;
    m_EvtAddressDescriptionCleanup((WDFCHILDLIST__ *)v6, AddrDescription);
  }
  m_EvtIdentificationDescriptionCleanup = this->m_EvtIdentificationDescriptionCleanup;
  if ( m_EvtIdentificationDescriptionCleanup && IdDescription )
  {
    m_ObjectSize = this->m_ObjectSize;
    v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v9 = 0LL;
    ((void (__fastcall *)(unsigned __int64, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *))m_EvtIdentificationDescriptionCleanup)(
      v9,
      IdDescription,
      AddrDescription);
  }
}
