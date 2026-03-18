/*
 * XREFs of ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x140046CEC
 * Callers:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x140046AFC (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     imp_WdfFdoUnlockStaticChildListFromIteration @ 0x140046B60 (imp_WdfFdoUnlockStaticChildListFromIteration.c)
 *     imp_WdfChildListEndScan @ 0x140077810 (imp_WdfChildListEndScan.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140018EB8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1400216A4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x14002E4F4 (--3FxStump@@SAXPEAX@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140047130 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x140072830 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ??1FxDeviceDescriptionEntry@@QEAA@XZ @ 0x140080EF8 (--1FxDeviceDescriptionEntry@@QEAA@XZ.c)
 *     ?CleanupDescriptions@FxChildList@@IEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x140083734 (-CleanupDescriptions@FxChildList@@IEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WD.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x140084478 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     WPP_IFR_SF_qll @ 0x14008CD68 (WPP_IFR_SF_qll.c)
 */

void __fastcall FxChildList::EndScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // rbx
  unsigned __int8 v4; // dl
  KIRQL v5; // r13
  unsigned int _a2; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const _GUID *v8; // r8
  _LIST_ENTRY *Flink; // rbx
  FxDeviceDescriptionEntry *i; // rbx
  FxDeviceDescriptionEntry *v11; // rdx
  _LIST_ENTRY *v12; // rax
  FxChildListDescriptionState m_DescriptionState; // eax
  unsigned __int8 v14; // r8
  _LIST_ENTRY *v15; // rbx
  _LIST_ENTRY *v16; // rax
  const void *_a1; // rdx
  FxChildList *v18; // r12
  _LIST_ENTRY **p_Blink; // r14
  _FX_DRIVER_GLOBALS *v20; // rcx
  int *v21; // rsi
  _FX_DRIVER_GLOBALS *v22; // rcx
  _LIST_ENTRY *v23; // rdx
  const void *v24; // r8
  _LIST_ENTRY *v25; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v27; // rcx
  _LIST_ENTRY **v28; // r8
  _LIST_ENTRY *v29; // rcx
  _FX_DRIVER_GLOBALS *v30; // r10
  FxDevice *m_Pdo; // rax
  unsigned __int8 FxVerboseOn; // cl
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  const void *v34; // rax
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _LIST_ENTRY *v36; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-10h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  _a2 = this->m_ScanCount - 1;
  this->m_ScanCount = _a2;
  m_Globals = this->m_Globals;
  v8 = WPP_FxChildList_cpp_Traceguids;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xCu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  if ( !this->m_ScanCount )
  {
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v18 = (FxChildList *)Flink->Flink;
        p_Blink = &Flink[-3].Blink;
        v20 = this->m_Globals;
        v21 = (int *)&Flink[1];
        if ( v20->FxVerboseOn )
          WPP_IFR_SF_qll(v20, v4, (unsigned int)v8, 0, traceGuid, &Flink[-3].Blink, *v21, *((_DWORD *)p_Blink + 4));
        if ( !*((_BYTE *)p_Blink + 80) )
        {
          if ( *v21 == 1 )
          {
            FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)&Flink[-3].Blink);
          }
          else if ( *v21 == 4 )
          {
            v22 = this->m_Globals;
            if ( v22->FxVerboseOn )
            {
              v23 = p_Blink[8];
              v24 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v23->Blink) )
                v24 = 0LL;
              WPP_IFR_SF_qq(v22, 5u, 0xCu, 0xEu, WPP_FxChildList_cpp_Traceguids, v24, v23[9].Flink);
            }
            *v21 = 3;
            v25 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
LABEL_60:
              __fastfail(3u);
            Blink->Flink = v25;
            v25->Blink = Blink;
            Flink->Blink = Flink;
            Flink->Flink = Flink;
          }
        }
        Flink = (_LIST_ENTRY *)v18;
      }
      while ( v18 != (FxChildList *)&this->m_ModificationListHead );
    }
    for ( i = (FxDeviceDescriptionEntry *)this->m_DescriptionListHead.Flink;
          i != (FxDeviceDescriptionEntry *)&this->m_DescriptionListHead;
          i = (FxDeviceDescriptionEntry *)i->m_DescriptionLink.Flink )
    {
      v11 = i;
      v12 = (_LIST_ENTRY *)i;
      if ( i->m_PendingDeleteOnScanEnd )
      {
        v27 = i->m_DescriptionLink.Flink;
        v28 = &i->m_DescriptionLink.Blink;
        i = (FxDeviceDescriptionEntry *)i->m_DescriptionLink.Blink;
        if ( v11->m_DescriptionLink.Flink->Blink != v12 )
          goto LABEL_60;
        if ( i->m_DescriptionLink.Flink != v12 )
          goto LABEL_60;
        i->m_DescriptionLink.Flink = v27;
        v27->Blink = (_LIST_ENTRY *)i;
        v29 = freeHead.Blink;
        if ( freeHead.Blink->Flink != &freeHead )
          goto LABEL_60;
        *v28 = freeHead.Blink;
        v11->m_DescriptionLink.Flink = &freeHead;
        v29->Flink = v12;
        freeHead.Blink = v12;
      }
      else
      {
        m_DescriptionState = i->m_DescriptionState;
        if ( (m_DescriptionState == DescriptionPresentNeedsInstantiation
           || m_DescriptionState == DescriptionInstantiatedHasObject)
          && !i->m_FoundInLastScan )
        {
          v30 = this->m_Globals;
          m_Pdo = i->m_Pdo;
          FxVerboseOn = v30->FxVerboseOn;
          if ( m_Pdo )
          {
            if ( FxVerboseOn )
            {
              m_DeviceObject = m_Pdo->m_DeviceObject.m_DeviceObject;
              if ( m_Pdo->m_ObjectSize )
                v34 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v34 = 0LL;
              WPP_IFR_SF_qq(v30, 5u, 0xCu, 0xFu, WPP_FxChildList_cpp_Traceguids, v34, m_DeviceObject);
            }
          }
          else if ( FxVerboseOn )
          {
            WPP_IFR_SF_q(v30, 5u, 0xCu, 0x10u, WPP_FxChildList_cpp_Traceguids, i);
          }
          FxChildList::MarkDescriptionNotPresentWorker(this, i, 1u);
        }
      }
    }
    FxChildList::ProcessModificationsLocked(this, &freeHead);
    if ( this->m_InvalidationNeeded )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
      if ( SafePhysicalDevice )
      {
        this->m_InvalidationNeeded = 0;
        IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
      }
    }
    KeSetEvent(&this->m_ScanEvent.m_Event, 0, 0);
    p_m_ListLock = &this->m_ListLock;
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
  while ( 1 )
  {
    v15 = freeHead.Flink;
    if ( freeHead.Flink == &freeHead )
      break;
    if ( freeHead.Flink->Blink != &freeHead )
      goto LABEL_60;
    v16 = freeHead.Flink->Flink;
    if ( freeHead.Flink->Flink->Blink != freeHead.Flink )
      goto LABEL_60;
    freeHead.Flink = freeHead.Flink->Flink;
    v16->Blink = &freeHead;
    v15->Blink = v15;
    v15->Flink = v15;
    if ( this->m_StaticList && (LODWORD(v15[1].Flink) == 1 || LODWORD(v15[3].Blink) == 5) )
    {
      v36 = v15[1].Blink->Blink;
      if ( LODWORD(v15[3].Blink) == 5 )
        LODWORD(v15[3].Blink) = 0;
      LODWORD(v15[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v36[40].Blink, PnpEventRemove, v14);
    }
    else
    {
      FxChildList::CleanupDescriptions(
        this,
        (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v15[1].Blink,
        (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v15[2].Flink);
      if ( v15 )
      {
        FxDeviceDescriptionEntry::~FxDeviceDescriptionEntry((FxDeviceDescriptionEntry *)v15);
        FxStump::operator delete(v15);
      }
    }
  }
}
