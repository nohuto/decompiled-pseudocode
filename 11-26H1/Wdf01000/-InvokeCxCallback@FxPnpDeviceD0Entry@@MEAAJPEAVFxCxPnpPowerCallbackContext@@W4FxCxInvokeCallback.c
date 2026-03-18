/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceD0Entry@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x140071120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sqqLd @ 0x1400A5074 (WPP_IFR_SF_sqqLd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceD0Entry::InvokeCxCallback(
        FxPnpDeviceD0Entry *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int flags; // ebx
  const char *_a4; // r8
  const _GUID *v8; // [rsp+20h] [rbp-38h]

  flags = (*(__int64 (__fastcall **)(WDFDEVICE__ *, _QWORD))((char *)&Context->u.Generic.PreCallback
                                                           + (PrePost != FxCxInvokePreCallback ? 8 : 0)))(
            this->m_Device,
            (unsigned int)this->m_PreviousState);
  if ( flags < 0 )
  {
    _a4 = "Pre";
    if ( PrePost )
      _a4 = "Post";
    WPP_IFR_SF_sqqLd(
      this->m_PkgPnp->m_Globals,
      (unsigned __int8)this->m_PkgPnp->m_DeviceBase,
      (unsigned int)_a4,
      0xBu,
      v8,
      _a4,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      this->m_PreviousState,
      flags);
  }
  return (unsigned int)flags;
}
