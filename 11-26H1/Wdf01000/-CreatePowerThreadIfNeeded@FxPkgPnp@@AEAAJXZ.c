/*
 * XREFs of ?CreatePowerThreadIfNeeded@FxPkgPnp@@AEAAJXZ @ 0x140039628
 * Callers:
 *     ?PnpEventHardwareAvailable@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x140039710 (-PnpEventHardwareAvailable@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x140084630 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::CreatePowerThreadIfNeeded(FxPkgPnp *this)
{
  int v2; // esi
  PDEVICE_OBJECT AttachedDeviceReference; // rax
  PDEVICE_OBJECT v4; // rbx

  v2 = 0;
  AttachedDeviceReference = IoGetAttachedDeviceReference(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  v4 = AttachedDeviceReference;
  if ( AttachedDeviceReference )
  {
    if ( (AttachedDeviceReference->Flags & 0x2000) == 0 && !this->m_HasPowerThread )
    {
      v2 = this->QueryForPowerThread(this);
      if ( v2 < 0 )
      {
        FxPkgPnp::SetInternalFailure(this);
        this->m_PendingPnPIrp->IoStatus.Status = v2;
      }
    }
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v2;
}
