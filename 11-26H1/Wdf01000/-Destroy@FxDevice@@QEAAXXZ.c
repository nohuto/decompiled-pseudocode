/*
 * XREFs of ?Destroy@FxDevice@@QEAAXXZ @ 0x140039B18
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x140038ED8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x140039960 (-DeleteDevice@FxPkgPnp@@IEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1400399C8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x14007A8A0 (-Dispose@FxDevice@@UEAAEXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x14003A0F0 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxDevice::Destroy(FxDevice *this)
{
  _DEVICE_OBJECT *_a1; // rdx
  const void *_a2; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  _DEVICE_OBJECT *v5; // rcx
  wchar_t *Buffer; // rcx
  wchar_t *v7; // rcx

  _a1 = this->m_DeviceObject.m_DeviceObject;
  if ( _a1 )
  {
    _a1->DeviceExtension = 0LL;
    _a1 = this->m_DeviceObject.m_DeviceObject;
  }
  _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a2 = 0LL;
  WPP_IFR_SF_qqq(
    this->m_Globals,
    4u,
    0x12u,
    0xBu,
    WPP_FxDeviceKm_cpp_Traceguids,
    _a1,
    _a2,
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject);
  m_DeviceObject = this->m_AttachedDevice.FxDeviceBase::m_DeviceObject;
  if ( m_DeviceObject )
  {
    IoDetachDevice(m_DeviceObject);
    this->m_AttachedDevice.FxDeviceBase::m_DeviceObject = 0LL;
  }
  if ( this->m_DeviceObject.m_DeviceObject )
  {
    FxDevice::DeleteSymbolicLink(this);
    v5 = this->m_DeviceObject.m_DeviceObject;
    if ( this->m_DeviceObjectDeleted )
      ObfDereferenceObject(v5);
    else
      IoDeleteDevice(v5);
    this->m_DeviceObject.m_DeviceObject = 0LL;
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    this->m_DeviceName = 0LL;
  }
  v7 = this->m_MofResourceName.Buffer;
  if ( v7 )
  {
    FxPoolFree(v7);
    this->m_MofResourceName = 0LL;
  }
}
