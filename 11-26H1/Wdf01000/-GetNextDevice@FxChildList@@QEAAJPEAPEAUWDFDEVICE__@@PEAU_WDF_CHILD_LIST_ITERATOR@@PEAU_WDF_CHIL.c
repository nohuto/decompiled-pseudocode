/*
 * XREFs of ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x140055AD8
 * Callers:
 *     imp_WdfChildListRetrieveNextDevice @ 0x1400558F0 (imp_WdfChildListRetrieveNextDevice.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x140055F20 (-MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z.c)
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x140062DA0 (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C8A8 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxChildList::GetNextDevice(
        FxChildList *this,
        WDFDEVICE__ **Device,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  WDFDEVICE__ **v7; // r12
  FxDeviceDescriptionEntry *v8; // r13
  unsigned int v9; // esi
  FxDeviceDescriptionEntry **v10; // r14
  _LIST_ENTRY *p_m_DescriptionListHead; // r15
  FxDeviceDescriptionEntry *Flink; // r14
  char v13; // r8
  FxDevice *m_Pdo; // rcx
  unsigned __int16 m_ObjectSize; // ax
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v16; // esi
  unsigned __int64 v17; // rcx
  unsigned int v18; // r13d
  _LIST_ENTRY *p_m_ModificationListHead; // rax
  char v21; // r12
  _LIST_ENTRY *v22; // r14
  unsigned int v23; // r15d
  unsigned __int64 v24; // rcx
  const void *_a1; // rcx
  FxDeviceDescriptionEntry **i; // rax
  unsigned __int8 (__fastcall *EvtChildListIdentificationDescriptionCompare)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r9
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  unsigned __int8 (__fastcall *v30)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r9
  unsigned __int64 v31; // rcx
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v32; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v33; // rdx
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]

  v7 = Device;
  v8 = 0LL;
  v9 = -2147483622;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
  {
    v9 = -1073741436;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxChildList_cpp_Traceguids, _a1, -1073741436);
    goto $Done_24;
  }
  v10 = (FxDeviceDescriptionEntry **)Iterator->Reserved[0];
  if ( !v10 )
    goto LABEL_12;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  if ( !this->m_Globals->FxVerifierOn || v10 == (FxDeviceDescriptionEntry **)p_m_DescriptionListHead )
  {
LABEL_4:
    Flink = *v10;
    v13 = 0;
    if ( Flink != (FxDeviceDescriptionEntry *)p_m_DescriptionListHead )
    {
      do
      {
        v8 = Flink;
        if ( FxDeviceDescriptionEntry::MatchStateToFlags(Flink, Iterator->Flags) )
        {
          v13 = 1;
          if ( !Info )
            break;
          EvtChildListIdentificationDescriptionCompare = Info->EvtChildListIdentificationDescriptionCompare;
          if ( !EvtChildListIdentificationDescriptionCompare )
            break;
          v24 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !this->m_ObjectSize )
            v24 = 0LL;
          v13 = EvtChildListIdentificationDescriptionCompare(
                  (WDFCHILDLIST__ *)v24,
                  Info->IdentificationDescription,
                  Flink->m_IdentificationDescription);
          if ( v13 )
            break;
        }
        Flink = (FxDeviceDescriptionEntry *)Flink->m_DescriptionLink.Flink;
      }
      while ( Flink != (FxDeviceDescriptionEntry *)p_m_DescriptionListHead );
      v7 = Device;
    }
    if ( v13 )
    {
      Iterator->Reserved[0] = Flink;
      m_Pdo = v8->m_Pdo;
      if ( m_Pdo )
      {
        m_ObjectSize = m_Pdo->m_ObjectSize;
        v16 = WdfChildListRetrieveDeviceSuccess;
        v17 = (unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !m_ObjectSize )
          v17 = 0LL;
        *v7 = (WDFDEVICE__ *)v17;
      }
      else
      {
        v16 = WdfChildListRetrieveDeviceNotYetCreated;
      }
      if ( Info )
      {
        IdentificationDescription = Info->IdentificationDescription;
        if ( IdentificationDescription )
          FxChildList::CopyId(this, IdentificationDescription, v8->m_IdentificationDescription);
        AddressDescription = Info->AddressDescription;
        if ( AddressDescription )
          FxChildList::CopyAddress(this, AddressDescription, v8->m_AddressDescription);
        Info->Status = v16;
      }
      v9 = 0;
    }
    else
    {
      Iterator->Reserved[0] = 0LL;
    }
LABEL_12:
    v18 = (unsigned int)Iterator->Reserved[1];
    if ( (Iterator->Flags & 4) != 0 && v18 )
    {
      p_m_ModificationListHead = &this->m_ModificationListHead;
      v21 = 0;
      v22 = this->m_ModificationListHead.Flink;
      v23 = 1;
      while ( v22 != p_m_ModificationListHead )
      {
        if ( LODWORD(v22[1].Flink) == 1 && ++v23 > v18 )
        {
          v21 = 1;
          if ( !Info )
            goto LABEL_54;
          v30 = Info->EvtChildListIdentificationDescriptionCompare;
          if ( !v30 )
            goto LABEL_54;
          v31 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
          if ( !this->m_ObjectSize )
            v31 = 0LL;
          v21 = v30(
                  (WDFCHILDLIST__ *)v31,
                  Info->IdentificationDescription,
                  (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v22[-1].Flink);
          if ( v21 )
          {
LABEL_54:
            Iterator->Reserved[1] = (void *)v23;
            if ( Info )
            {
              v32 = Info->IdentificationDescription;
              if ( v32 )
                FxChildList::CopyId(this, v32, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v22[-1].Flink);
              v33 = Info->AddressDescription;
              if ( v33 )
                FxChildList::CopyAddress(this, v33, (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v22[-1].Blink);
              Info->Status = WdfChildListRetrieveDeviceNotYetCreated;
            }
            v9 = 0;
            break;
          }
          p_m_ModificationListHead = &this->m_ModificationListHead;
        }
        v22 = v22->Flink;
      }
      if ( !v21 )
        Iterator->Reserved[1] = 0LL;
    }
    goto $Done_24;
  }
  for ( i = (FxDeviceDescriptionEntry **)p_m_DescriptionListHead->Flink;
        i != (FxDeviceDescriptionEntry **)p_m_DescriptionListHead;
        i = (FxDeviceDescriptionEntry **)*i )
  {
    if ( v10 == i )
      goto LABEL_4;
  }
  v9 = -1073741811;
$Done_24:
  KeReleaseSpinLock(&this->m_ListLock, NewIrql);
  return v9;
}
