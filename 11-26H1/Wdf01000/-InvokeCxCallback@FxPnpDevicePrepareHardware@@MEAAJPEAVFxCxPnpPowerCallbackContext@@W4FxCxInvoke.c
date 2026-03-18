/*
 * XREFs of ?InvokeCxCallback@FxPnpDevicePrepareHardware@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1400A4D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sqqd @ 0x1400A5234 (WPP_IFR_SF_sqqd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDevicePrepareHardware::InvokeCxCallback(
        FxPnpDevicePrepareHardware *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int level; // ebx
  const char *_a3; // rdx
  const _GUID *v8; // [rsp+20h] [rbp-38h]

  level = (*(__int64 (__fastcall **)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))((char *)&Context->u.Generic.PreCallback
                                                                                       + (PrePost != FxCxInvokePreCallback
                                                                                        ? 8
                                                                                        : 0)))(
            this->m_Device,
            this->m_ResourcesRaw,
            this->m_ResourcesTranslated);
  if ( level < 0 )
  {
    _a3 = "Pre";
    if ( PrePost )
      _a3 = "Post";
    WPP_IFR_SF_sqqd(
      this->m_PkgPnp->m_Globals,
      2u,
      (unsigned int)"Post",
      0x11u,
      v8,
      _a3,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      level);
  }
  return (unsigned int)level;
}
