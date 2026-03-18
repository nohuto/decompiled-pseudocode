/*
 * XREFs of ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1400683A4
 * Callers:
 *     imp_WdfFdoAddStaticChild @ 0x1400680A0 (imp_WdfFdoAddStaticChild.c)
 *     imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1400681F0 (imp_WdfChildListAddOrUpdateChildDescriptionAsPresent.c)
 * Callees:
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x14001DFA8 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140043B90 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140047130 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x140068904 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14006897C (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x140068A54 (--0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z.c)
 *     ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x140068AD4 (-DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C8A8 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C904 (-DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

__int64 __fastcall FxChildList::Add(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription,
        unsigned int *a4)
{
  unsigned __int64 *p_m_ListLock; // r13
  int v8; // esi
  FxDeviceDescriptionEntry *v9; // rax
  FxDeviceDescriptionEntry *v10; // rbx
  FxDeviceDescriptionEntry *v11; // rax
  FxChildListDescriptionState m_DescriptionState; // eax
  unsigned __int8 v13; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 m_TotalDescriptionSize; // r9
  void *v17; // rax
  ULONG Tag; // r8d
  FX_POOL **v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  _LIST_ENTRY *v22; // rdx
  _LIST_ENTRY *v23; // rax
  __int64 v24; // rbx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *m_AddressDescription; // rdx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY freeHead; // [rsp+38h] [rbp-28h] BYREF
  __m128i v28; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+48h]

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v8 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v9 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, IdentificationDescription);
  v10 = v9;
  if ( v9 )
  {
    if ( v9->m_ModificationState == ModificationInsert )
    {
      if ( !this->m_AddressDescriptionSize )
        goto LABEL_5;
      m_AddressDescription = v9->m_AddressDescription;
      goto LABEL_25;
    }
    if ( (unsigned int)(v9->m_ModificationState - 2) >= 2 )
      goto LABEL_6;
  }
  else
  {
    v11 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, IdentificationDescription);
    v10 = v11;
    if ( v11 )
    {
      m_DescriptionState = v11->m_DescriptionState;
      if ( m_DescriptionState == DescriptionPresentNeedsInstantiation
        || m_DescriptionState == DescriptionInstantiatedHasObject )
      {
        if ( !this->m_AddressDescriptionSize )
        {
LABEL_5:
          v10->m_FoundInLastScan = 1;
          v8 = 0x40000000;
          goto LABEL_6;
        }
        m_AddressDescription = v10->m_AddressDescription;
LABEL_25:
        FxChildList::CopyAddress(this, m_AddressDescription, AddressDescription);
        goto LABEL_5;
      }
    }
  }
  m_Globals = this->m_Globals;
  m_TotalDescriptionSize = this->m_TotalDescriptionSize;
  v17 = retaddr;
  v28 = 0LL;
  Tag = m_Globals->Tag;
  v28.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v17 = 0LL;
  v19 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v28, m_TotalDescriptionSize, Tag, v17);
  if ( !v19
    || (FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
          (FxDeviceDescriptionEntry *)v19,
          this,
          this->m_IdentificationDescriptionSize,
          this->m_AddressDescriptionSize),
        (v21 = v20) == 0) )
  {
    v8 = -1073741670;
    goto LABEL_6;
  }
  v8 = FxChildList::DuplicateId(
         this,
         *(_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER **)(v20 + 24),
         IdentificationDescription);
  if ( v8 < 0
    || this->m_AddressDescriptionSize
    && (v8 = FxChildList::DuplicateAddress(
               this,
               *(_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER **)(v21 + 32),
               AddressDescription),
        v8 < 0) )
  {
    Blink = freeHead.Blink;
    if ( freeHead.Blink->Flink == &freeHead )
    {
      *(_QWORD *)(v21 + 8) = freeHead.Blink;
      *(_QWORD *)v21 = &freeHead;
      Blink->Flink = (_LIST_ENTRY *)v21;
      freeHead.Blink = (_LIST_ENTRY *)v21;
      goto LABEL_6;
    }
LABEL_18:
    __fastfail(3u);
  }
  *(_BYTE *)(v21 + 80) = 1;
  v22 = this->m_ModificationListHead.Blink;
  v23 = (_LIST_ENTRY *)(v21 + 40);
  if ( v22->Flink != &this->m_ModificationListHead )
    goto LABEL_18;
  v23->Flink = &this->m_ModificationListHead;
  *(_QWORD *)(v21 + 48) = v22;
  v22->Flink = v23;
  this->m_ModificationListHead.Blink = v23;
  if ( this->m_StaticList )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v21 + 24) + 8LL);
    FxObject::MarkNoDeleteDDI((FxObject *)v24, ObjectLock);
    *(_QWORD *)(*(_QWORD *)(v24 + 648) + 1712LL) = v21;
    *(_BYTE *)(*(_QWORD *)(v24 + 648) + 1786LL) = 1;
  }
LABEL_6:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, NewIrql);
  FxChildList::DrainFreeListHead(this, &freeHead, v13);
  return (unsigned int)v8;
}
