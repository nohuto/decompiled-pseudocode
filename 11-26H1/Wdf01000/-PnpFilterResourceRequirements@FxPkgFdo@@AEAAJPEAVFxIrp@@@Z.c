/*
 * XREFs of ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x140075108
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400750F0 (-_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x140008014 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x14007D450 (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x14009AECC (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x14009B134 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?Invoke@FxPnpDeviceFilterResourceRequirements@@QEAAJPEAUWDFDEVICE__@@PEAUWDFIORESREQLIST__@@@Z @ 0x1400A4C5C (-Invoke@FxPnpDeviceFilterResourceRequirements@@QEAAJPEAUWDFDEVICE__@@PEAUWDFIORESREQLIST__@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgFdo::PnpFilterResourceRequirements(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  signed int _a1; // ebx
  _IO_RESOURCE_REQUIREMENTS_LIST *Information; // rbp
  FxIoResReqList *v8; // rax
  FxIoResReqList *v9; // r14
  FxDeviceBase *m_DeviceBase; // rdx
  WDFIORESREQLIST__ *v11; // r8
  unsigned __int16 m_ObjectSize; // ax
  WDFDEVICE__ *v13; // rdx
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // r15
  int v15; // eax
  unsigned __int8 v16; // r8
  _IO_RESOURCE_REQUIREMENTS_LIST *v17; // rbp
  FxIoResReqList *v18; // rax
  FxIoResReqList *v19; // r14
  FxDeviceBase *v20; // rdx
  unsigned __int16 v21; // r8
  WDFDEVICE__ *v22; // rdx
  _IO_RESOURCE_REQUIREMENTS_LIST *v23; // rax
  unsigned __int64 v24; // r15
  _FX_DRIVER_GLOBALS *v25; // rcx
  WDFIORESREQLIST__ *reqlist; // [rsp+60h] [rbp+8h] BYREF

  reqlist = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xAu, WPP_FxPkgFdoKm_cpp_Traceguids);
  if ( !this->m_DeviceFilterRemoveResourceRequirements.m_Method )
    goto LABEL_39;
  _a1 = -1073741670;
  Information = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
  v8 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, Information, a3);
  v9 = v8;
  if ( !v8 )
    goto LABEL_34;
  FxObject::Commit(v8, 0LL, (void **)&reqlist, 0LL, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v11 = (WDFIORESREQLIST__ *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( !v9->m_ObjectSize )
    v11 = 0LL;
  v13 = (WDFDEVICE__ *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v13 = 0LL;
  _a1 = FxPnpDeviceFilterResourceRequirements::Invoke(&this->m_DeviceFilterRemoveResourceRequirements, v13, v11);
  if ( _a1 >= 0 && v9->m_Changed )
  {
    WdmList = FxIoResReqList::CreateWdmList(v9);
    if ( WdmList )
    {
      if ( Information )
      {
        WdmList->BusNumber = Information->BusNumber;
        ExFreePoolWithTag(Information, 0);
      }
      Irp->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
    }
    else
    {
      _a1 = -1073741670;
    }
  }
  v9->DeleteObject(v9);
  if ( _a1 >= 0 )
  {
LABEL_39:
    _a1 = this->SendIrpSynchronously(this, Irp);
    if ( _a1 >= 0 )
      goto LABEL_19;
  }
  if ( _a1 == -1073741637 )
  {
LABEL_19:
    v15 = FxPkgPnp::FilterResourceRequirements(
            this,
            (_IO_RESOURCE_REQUIREMENTS_LIST **)&Irp->m_Irp->IoStatus.Information);
    if ( v15 >= 0 )
    {
      if ( this->m_DeviceFilterAddResourceRequirements.m_Method )
      {
        v17 = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
        v18 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, v17, v16);
        v19 = v18;
        if ( v18 )
        {
          FxObject::Commit(v18, 0LL, (void **)&reqlist, 0LL, 1u);
          v20 = this->m_DeviceBase;
          v21 = v20->m_ObjectSize;
          v22 = (WDFDEVICE__ *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v21 )
            v22 = 0LL;
          _a1 = FxPnpDeviceFilterResourceRequirements::Invoke(
                  &this->m_DeviceFilterAddResourceRequirements,
                  v22,
                  reqlist);
          if ( _a1 >= 0 && v19->m_Changed )
          {
            v23 = FxIoResReqList::CreateWdmList(v19);
            v24 = (unsigned __int64)v23;
            if ( v23 )
            {
              if ( v17 )
              {
                v23->BusNumber = v17->BusNumber;
                ExFreePoolWithTag(v17, 0);
              }
              Irp->m_Irp->IoStatus.Information = v24;
            }
            else
            {
              _a1 = -1073741670;
            }
          }
          v19->DeleteObject(v19);
        }
        else
        {
          _a1 = -1073741670;
        }
      }
    }
    else
    {
      _a1 = v15;
    }
  }
LABEL_34:
  FxPkgPnp::CompletePnpRequest(this, Irp, _a1);
  v25 = this->m_Globals;
  if ( v25->FxVerboseOn )
    WPP_IFR_SF_D(v25, 5u, 0xCu, 0xBu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
