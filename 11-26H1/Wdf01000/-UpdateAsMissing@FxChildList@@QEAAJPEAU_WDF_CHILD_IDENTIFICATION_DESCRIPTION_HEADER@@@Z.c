/*
 * XREFs of ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x140067FA8
 * Callers:
 *     imp_WdfChildListUpdateChildDescriptionAsMissing @ 0x1400552B0 (imp_WdfChildListUpdateChildDescriptionAsMissing.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1400A3390 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 * Callees:
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140043B90 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140047130 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x140068904 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14006897C (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x140072830 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x140084478 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 */

__int64 __fastcall FxChildList::UpdateAsMissing(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Description)
{
  unsigned __int64 *p_m_ListLock; // rbp
  unsigned int v5; // edi
  KIRQL v6; // r14
  FxDeviceDescriptionEntry *v7; // rax
  FxDeviceDescriptionEntry *v8; // rax
  FxChildListDescriptionState m_DescriptionState; // ecx
  unsigned __int8 v10; // r8
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-18h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v7 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, Description);
  if ( v7 )
  {
    FxChildList::MarkModificationNotPresentWorker(this, &freeHead, v7);
  }
  else
  {
    v8 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, Description);
    if ( v8 )
    {
      m_DescriptionState = v8->m_DescriptionState;
      if ( m_DescriptionState == DescriptionPresentNeedsInstantiation
        || m_DescriptionState == DescriptionInstantiatedHasObject )
      {
        FxChildList::MarkDescriptionNotPresentWorker(this, v8, 0);
      }
    }
    else
    {
      v5 = -1073741810;
    }
  }
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead, v10);
  return v5;
}
