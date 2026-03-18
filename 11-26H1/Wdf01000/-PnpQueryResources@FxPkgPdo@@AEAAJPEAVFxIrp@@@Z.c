/*
 * XREFs of ?PnpQueryResources@FxPkgPdo@@AEAAJPEAVFxIrp@@@Z @ 0x14007A928
 * Callers:
 *     ?_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x14007A910 (-_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140008014 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x14001B774 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z @ 0x14009AE2C (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPdo::PnpQueryResources(FxPkgPdo *this, FxIrp *Irp, FxDevice *a3, _WDF_OBJECT_ATTRIBUTES *a4)
{
  _CM_RESOURCE_LIST *WdmList; // rbx
  FxIrp *v5; // r14
  FxPkgPdo *v6; // rsi
  unsigned int v7; // r8d
  int Status; // edi
  FxCmResList *v9; // r15
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v13; // rcx
  FxCmResList *pResList; // [rsp+50h] [rbp+8h] BYREF
  WDFCMRESLIST__ *list; // [rsp+60h] [rbp+18h] BYREF

  WdmList = 0LL;
  v5 = Irp;
  v6 = this;
  pResList = 0LL;
  list = 0LL;
  if ( this->m_DeviceResourcesQuery.m_Method )
  {
    Status = FxCmResList::_CreateAndInit(&pResList, this->m_Globals, a3, a4, 3u);
    if ( Status < 0 )
    {
$exit_13:
      v7 = Status;
      Irp = v5;
      this = v6;
      v5->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
      return FxPkgPnp::CompletePnpRequest(this, Irp, v7);
    }
    v9 = pResList;
    Status = FxObject::Commit(pResList, 0LL, (void **)&list, 0LL, 1u);
    if ( Status >= 0 )
    {
      m_DeviceBase = v6->m_DeviceBase;
      m_Method = v6->m_DeviceResourcesQuery.m_Method;
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      if ( m_Method )
      {
        v13 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !m_ObjectSize )
          v13 = 0LL;
        Status = m_Method((WDFDEVICE__ *)v13, list);
        if ( Status < 0 )
          goto LABEL_14;
      }
      else
      {
        Status = 0;
      }
      if ( v9->m_Count )
      {
        WdmList = FxCmResList::CreateWdmList(v9, 0x100uLL);
      }
      else
      {
        Status = v5->m_Irp->IoStatus.Status;
        WdmList = (_CM_RESOURCE_LIST *)v5->m_Irp->IoStatus.Information;
      }
    }
LABEL_14:
    v9->DeleteObject(v9);
    goto $exit_13;
  }
  v7 = Irp->m_Irp->IoStatus.Status;
  return FxPkgPnp::CompletePnpRequest(this, Irp, v7);
}
