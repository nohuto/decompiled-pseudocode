/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x140022FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140008014 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1400216A4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x14003ACC8 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x140043C60 (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z @ 0x14009AE2C (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1400A7948 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall FxPkgFdo::PnpSendStartDeviceDownTheStackOverload(FxPkgFdo *this)
{
  _IRP *m_PendingPnPIrp; // rbp
  char v3; // r12
  FxFilteredStartContext *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _CM_RESOURCE_LIST *AllocatedResources; // rdx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // r14
  signed int v8; // edi
  FxCmResList *m_Resources; // r8
  FxCmResList *m_ResourcesRaw; // rdx
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  unsigned __int16 m_ObjectSize; // r9
  unsigned __int16 v14; // r10
  unsigned __int16 v15; // r11
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v20; // rax
  FxFilteredStartContext *v21; // rax
  FxCmResList *v22; // rcx
  _CM_RESOURCE_LIST *WdmList; // rax
  unsigned int v24; // edx
  FxCmResList *v25; // rcx
  _CM_RESOURCE_LIST *v26; // rax
  unsigned __int8 v27; // r8
  FxDeviceBase *v28; // rax
  _IO_STACK_LOCATION *v29; // rax
  unsigned __int8 traceGuid; // [rsp+20h] [rbp-58h]
  unsigned __int8 _a1; // [rsp+28h] [rbp-50h]
  BOOLEAN InvokeOnCancel; // [rsp+30h] [rbp-48h]
  FxPoolTypeOrPoolFlags v34; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxIrp irp; // [rsp+80h] [rbp+8h] BYREF

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  this->m_PendingPnPIrp = 0LL;
  irp.m_Irp = m_PendingPnPIrp;
  v3 = 0;
  v4 = 0LL;
  CurrentStackLocation = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResources = CurrentStackLocation->Parameters.StartDevice.AllocatedResources;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( this->m_DeviceRemoveAddedResources.m_Method && AllocatedResources && AllocatedResourcesTranslated )
  {
    this->m_ResourcesRaw->m_Changed = 0;
    this->m_Resources->m_Changed = 0;
    v8 = FxCmResList::BuildFromWdmList(this->m_ResourcesRaw, AllocatedResources, 3u);
    if ( v8 < 0 )
      goto LABEL_28;
    v8 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 3u);
    if ( v8 < 0 )
      goto LABEL_28;
    m_Resources = this->m_Resources;
    m_ResourcesRaw = this->m_ResourcesRaw;
    m_DeviceBase = this->m_DeviceBase;
    m_Method = this->m_DeviceRemoveAddedResources.m_Method;
    m_ObjectSize = m_Resources->m_ObjectSize;
    v14 = m_ResourcesRaw->m_ObjectSize;
    v15 = m_DeviceBase->m_ObjectSize;
    if ( m_Method )
    {
      v16 = (unsigned __int64)m_Resources ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v16 = 0LL;
      v17 = (unsigned __int64)m_ResourcesRaw ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v14 )
        v17 = 0LL;
      v18 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v15 )
        v18 = 0LL;
      v8 = m_Method((WDFDEVICE__ *)v18, (WDFCMRESLIST__ *)v17, (WDFCMRESLIST__ *)v16);
      if ( v8 < 0 )
        goto LABEL_28;
    }
    else
    {
      v8 = 0;
    }
    if ( this->m_ResourcesRaw->m_Changed || this->m_Resources->m_Changed )
    {
      m_Globals = this->m_Globals;
      v20 = retaddr;
      *(_QWORD *)&v34.UsePoolType = 0LL;
      v34.u.PoolFlags = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v20 = 0LL;
      v21 = (FxFilteredStartContext *)FxPoolAllocator(
                                        m_Globals,
                                        &m_Globals->FxPoolFrameworks,
                                        &v34,
                                        0x18uLL,
                                        m_Globals->Tag,
                                        v20);
      if ( v21 )
      {
        v21->ResourcesRaw = 0LL;
        v4 = v21;
        v21->ResourcesTranslated = 0LL;
        v21->PkgFdo = this;
        v22 = this->m_ResourcesRaw;
        if ( (!v22->m_Count || (WdmList = FxCmResList::CreateWdmList(v22, 0x40uLL), (v4->ResourcesRaw = WdmList) != 0LL))
          && ((v25 = this->m_Resources, !v25->m_Count)
           || (v26 = FxCmResList::CreateWdmList(v25, 0x40uLL), (v4->ResourcesTranslated = v26) != 0LL)) )
        {
          v3 = 1;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4->ResourcesRaw;
          m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v4->ResourcesTranslated;
        }
        else
        {
          v8 = -1073741670;
          FxFilteredStartContext::`scalar deleting destructor'(v4, v24);
        }
      }
    }
    if ( v8 < 0 )
    {
LABEL_28:
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x17u, WPP_fxpkgfdo_cpp_Traceguids, v8);
      FxPkgPnp::PnpProcessEvent(this, PnpEventStartDeviceFailed, v27);
      FxPkgPnp::CompletePnpRequest(this, &irp, v8);
      return 0;
    }
  }
  v28 = this->m_DeviceBase;
  if ( v3 )
  {
    FxIrp::SetCompletionRoutineEx(
      &irp,
      v28->m_DeviceObject.m_DeviceObject,
      FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine,
      v4,
      traceGuid,
      _a1,
      InvokeOnCancel);
  }
  else if ( IoSetCompletionRoutineEx(
              v28->m_DeviceObject.m_DeviceObject,
              m_PendingPnPIrp,
              (PIO_COMPLETION_ROUTINE)FxPkgFdo::_PnpStartDeviceCompletionRoutine,
              this,
              1u,
              1u,
              1u) < 0 )
  {
    v29 = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
    v29[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgFdo::_PnpStartDeviceCompletionRoutine;
    v29[-1].Context = this;
    v29[-1].Control = -32;
  }
  IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingPnPIrp);
  return 0;
}
