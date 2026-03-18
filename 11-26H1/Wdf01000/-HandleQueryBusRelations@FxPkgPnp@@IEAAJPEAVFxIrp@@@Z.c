/*
 * XREFs of ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140044670
 * Callers:
 *     ?PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14005FD48 (-PnpQueryDeviceRelations@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14005FEB0 (-_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x140042BB4 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14004326C (-UnlockFromEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140043578 (-LockForEnum@FxTransactionedList@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Invoke@FxPnpDeviceD0EntryPostInterruptsEnabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x140043B68 (-Invoke@FxPnpDeviceD0EntryPostInterruptsEnabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140043DAC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x140044A3C (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qdq @ 0x14006FF90 (WPP_IFR_SF_qdq.c)
 *     WPP_IFR_SF_qqqq @ 0x140072174 (WPP_IFR_SF_qqqq.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusRelations(FxPkgPnp *this, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v6; // rdx
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FxEnumerationInfo *m_EnumInfo; // rbx
  int Status; // esi
  FxTransactionedList *p_m_ChildListList; // rbx
  FxTransactionedEntry *v11; // rbp
  unsigned __int8 v12; // r8
  unsigned int v13; // edi
  FxTransactionedEntry *v14; // rbp
  FxTransactionedEntry *NextEntryLocked; // rax
  int v17; // eax
  unsigned int _a3; // r12d
  FxTransactionedEntry *v19; // rax
  _FX_DRIVER_GLOBALS **v20; // rdx
  FxDeviceBase *v21; // rcx
  unsigned __int16 v22; // ax
  const void *_a1; // rcx
  _DEVICE_RELATIONS *v24; // r10
  unsigned int Count; // edx
  _FX_DRIVER_GLOBALS *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r11
  __int64 v29; // rcx
  FxDeviceBase *v30; // rcx
  const void *_a2; // rdx
  unsigned __int16 v32; // ax
  const void *v33; // rcx
  FxDeviceBase *v34; // rdx
  unsigned __int16 v35; // ax
  const void *v36; // rdx
  unsigned __int8 changed; // [rsp+90h] [rbp+8h]
  _DEVICE_RELATIONS *pRelations; // [rsp+98h] [rbp+10h] BYREF
  _LIST_ENTRY **p_Blink; // [rsp+A0h] [rbp+18h]

  m_DeviceBase = this->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v6 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v6 = 0LL;
  FxPnpDeviceD0EntryPostInterruptsEnabled::Invoke(&this->m_DeviceRelationsQuery, v6, 0);
  p_m_Globals = &this->m_Globals;
  m_EnumInfo = this->m_EnumInfo;
  Status = 0;
  pRelations = (_DEVICE_RELATIONS *)Irp->m_Irp->IoStatus.Information;
  if ( m_EnumInfo )
  {
    p_m_ChildListList = &m_EnumInfo->m_ChildListList;
    FxTransactionedList::LockForEnum(p_m_ChildListList, *p_m_Globals);
  }
  else
  {
    p_m_ChildListList = 0LL;
  }
  changed = 0;
  v11 = 0LL;
  v12 = 0;
  v13 = 2;
  if ( p_m_ChildListList )
  {
    while ( 1 )
    {
      NextEntryLocked = FxTransactionedList::GetNextEntryLocked(p_m_ChildListList, v11);
      v11 = NextEntryLocked;
      if ( !NextEntryLocked )
        break;
      p_Blink = &NextEntryLocked[-3].m_TransactionLink.Blink;
      v17 = FxChildList::ProcessBusRelations(
              (FxChildList *)&NextEntryLocked[-3].m_TransactionLink.Blink,
              (_LIST_ENTRY **)&pRelations);
      _a3 = v17;
      if ( v17 != -1073741637 )
      {
        if ( v17 < 0 )
        {
          v30 = this->m_DeviceBase;
          _a2 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
          v32 = v30->m_ObjectSize;
          if ( !*((_WORD *)p_Blink + 5) )
            _a2 = 0LL;
          v33 = (const void *)((unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v32 )
            v33 = 0LL;
          WPP_IFR_SF_qqd(this->m_Globals, 2u, 0xCu, 0x17u, WPP_FxPkgPnp_cpp_Traceguids, v33, _a2, _a3);
          Status = _a3;
          v20 = &this->m_Globals;
          goto LABEL_17;
        }
        changed = 1;
      }
    }
  }
  v14 = 0LL;
  if ( !p_m_ChildListList )
    goto LABEL_7;
  while ( 1 )
  {
    v19 = FxTransactionedList::GetNextEntryLocked(p_m_ChildListList, v14);
    v14 = v19;
    v20 = &this->m_Globals;
    if ( !v19 )
      break;
    FxChildList::InvokeReportedMissingCallback((FxChildList *)&v19[-3].m_TransactionLink.Blink);
  }
LABEL_17:
  FxTransactionedList::UnlockFromEnum(p_m_ChildListList, *v20);
  if ( Status >= 0 )
  {
    v12 = changed;
LABEL_7:
    if ( !v12 )
      Status = Irp->m_Irp->IoStatus.Status;
  }
  Irp->m_Irp->IoStatus.Information = (unsigned __int64)pRelations;
  Irp->m_Irp->IoStatus.Status = Status;
  if ( (*p_m_Globals)->FxVerboseOn )
  {
    v34 = this->m_DeviceBase;
    v35 = v34->m_ObjectSize;
    v36 = (const void *)((unsigned __int64)v34 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v35 )
      v36 = 0LL;
    WPP_IFR_SF_qd(*p_m_Globals, 5u, 0xCu, 0x18u, WPP_FxPkgPnp_cpp_Traceguids, v36, Status);
  }
  if ( Status >= 0 && pRelations )
  {
    v21 = this->m_DeviceBase;
    v22 = v21->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v22 )
      _a1 = 0LL;
    WPP_IFR_SF_qdq(*p_m_Globals, 4u, 0xCu, 0x19u, WPP_FxPkgPnp_cpp_Traceguids, _a1, pRelations->Count, pRelations);
    v24 = pRelations;
    Count = pRelations->Count;
    if ( pRelations->Count )
    {
      do
      {
        v26 = *p_m_Globals;
        if ( !(*p_m_Globals)->FxVerboseOn )
          break;
        v27 = v13 + 1;
        v28 = v13 - 2;
        v29 = v13 - 1;
        if ( (unsigned int)v27 >= Count )
        {
          if ( v13 >= Count )
          {
            if ( (unsigned int)v29 >= Count )
              WPP_IFR_SF_q(v26, 5u, 0xCu, 0x1Du, WPP_FxPkgPnp_cpp_Traceguids, v24[v13 / 2 - 1].Objects[0]);
            else
              WPP_IFR_SF_qq(v26, 5u, 0xCu, 0x1Cu, WPP_FxPkgPnp_cpp_Traceguids, v24->Objects[v28], v24->Objects[v29]);
          }
          else
          {
            WPP_IFR_SF_qqq(
              v26,
              5u,
              0xCu,
              0x1Bu,
              WPP_FxPkgPnp_cpp_Traceguids,
              v24->Objects[v28],
              v24->Objects[v29],
              v24[v13 / 2].Objects[0]);
          }
        }
        else
        {
          WPP_IFR_SF_qqqq(
            v26,
            5u,
            0xCu,
            0x1Au,
            WPP_FxPkgPnp_cpp_Traceguids,
            v24->Objects[v28],
            v24->Objects[v29],
            v24[v13 / 2].Objects[0],
            v24->Objects[v27]);
        }
        v24 = pRelations;
        v13 += 4;
        Count = pRelations->Count;
      }
      while ( v13 - 2 < pRelations->Count );
    }
  }
  return (unsigned int)Status;
}
