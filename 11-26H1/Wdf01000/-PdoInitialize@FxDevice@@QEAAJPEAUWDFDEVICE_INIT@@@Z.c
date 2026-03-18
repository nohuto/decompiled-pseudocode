/*
 * XREFs of ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001E6BC
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14001FCC8 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x14001B8C8 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001DD08 (-PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ @ 0x14001DE98 (-PostCreateDeviceInitialize@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ??0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x14001DED8 (--0FxPkgPdo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x14001DFA8 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001E8FC (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z @ 0x140020524 (-InstallPackage@FxDevice@@QEAAXPEAVFxPackage@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140020570 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?RegisterCallbacks@FxPkgPdo@@QEAAXPEAU_WDF_PDO_EVENT_CALLBACKS@@@Z @ 0x14007BAAC (-RegisterCallbacks@FxPkgPdo@@QEAAXPEAU_WDF_PDO_EVENT_CALLBACKS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::PdoInitialize(FxDevice *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  PdoInit *p_Pdo; // rbp
  FxDevice *Parent; // rcx
  unsigned __int64 v7; // rdx
  unsigned int v8; // r9d
  FxPkgPdo *v9; // rax
  FxPkgPdo *v10; // rax
  FxPkgPdo *v11; // rsi
  __int64 result; // rax
  int Device; // ecx
  __int64 v14; // rdx
  void *v15; // r8

  m_Globals = this->m_Globals;
  p_Pdo = &DeviceInit->Pdo;
  if ( !DeviceInit->Pdo.Static )
    FxObject::MarkNoDeleteDDI(this, ObjectLock);
  if ( !DeviceInit->DeviceName && (DeviceInit->Characteristics & 0x80u) == 0 )
    return 3221225523LL;
  Parent = DeviceInit->Pdo.Parent;
  this->m_ParentDevice = Parent;
  FxObject::AddRef(Parent, this, 252, "minkernel\\wdf\\framework\\shared\\core\\km\\fxdevicekm.cpp");
  v9 = (FxPkgPdo *)FxObjectHandleAlloc2(m_Globals, v7, 0x748uLL, v8, 0LL, 0, FxObjectTypeInternal);
  if ( v9 )
  {
    FxPkgPdo::FxPkgPdo(v9, m_Globals, this);
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
  }
  this->m_PkgPnp = v11;
  if ( !v11 )
    return 3221225626LL;
  FxDevice::InstallPackage(this, v11);
  result = ((__int64 (__fastcall *)(FxPkgPnp *, WDFDEVICE_INIT *))this->m_PkgPnp->Initialize)(
             this->m_PkgPnp,
             DeviceInit);
  if ( (int)result >= 0 )
  {
    if ( p_Pdo->EventCallbacks.Size )
      FxPkgPdo::RegisterCallbacks(v11, &p_Pdo->EventCallbacks);
    Device = FxDevice::CreateDevice(this, DeviceInit);
    if ( Device < 0 )
      return (unsigned int)Device;
    this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject = this->m_DeviceObject.m_DeviceObject;
    if ( DeviceInit->Pdo.Raw )
      v11->m_RawOK = 1;
    if ( DeviceInit->PowerPageable )
    {
      this->m_DeviceObject.m_DeviceObject->Flags |= 0x2000u;
    }
    else if ( DeviceInit->Inrush )
    {
      this->m_DeviceObject.m_DeviceObject->Flags |= 0x4000u;
    }
    if ( DeviceInit->Pdo.ForwardRequestToParent )
    {
      this->m_DeviceObject.m_DeviceObject->StackSize += DeviceInit->Pdo.Parent->m_DeviceObject.m_DeviceObject->StackSize;
      v11->m_AllowForwardRequestToParent = 1;
    }
    if ( DeviceInit->Pdo.NoPowerDependencyOnParent )
      v11->m_HasPowerDependencyOnParent = 0;
    result = FxWmiIrpHandler::PostCreateDeviceInitialize(this->m_PkgWmi);
    if ( (int)result >= 0 )
    {
      result = FxPkgGeneral::PostCreateDeviceInitialize(this->m_PkgGeneral, DeviceInit);
      if ( (int)result >= 0 )
      {
        Device = FxPkgPnp::PostCreateDeviceInitialize(v11, v14, v15);
        if ( Device >= 0 )
          this->m_DeviceObject.m_DeviceObject->Flags &= ~0x80u;
        return (unsigned int)Device;
      }
    }
  }
  return result;
}
