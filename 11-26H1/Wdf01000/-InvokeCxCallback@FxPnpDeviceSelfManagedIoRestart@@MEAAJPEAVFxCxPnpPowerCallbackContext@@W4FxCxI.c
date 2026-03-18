/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceSelfManagedIoRestart@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1400791D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sqqd @ 0x1400A5234 (WPP_IFR_SF_sqqd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoRestart::InvokeCxCallback(
        FxPnpDeviceSelfManagedIoRestart *this,
        FxCxPnpPowerCallbackContext::<unnamed_type_u> *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  FxCxPnpPowerCallbackContext::<unnamed_type_u> *p_PostCallback; // r9
  int level; // ebx
  unsigned __int16 v8; // r9
  const char *_a3; // rdx
  const _GUID *v10; // [rsp+20h] [rbp-38h]

  p_PostCallback = Context;
  if ( LOBYTE(Context->Generic.PreCallback) == 3 )
  {
    if ( PrePost )
      p_PostCallback = (FxCxPnpPowerCallbackContext::<unnamed_type_u> *)&Context->SmIoRestartEx.PostCallback;
    level = ((__int64 (__fastcall *)(WDFDEVICE__ *))p_PostCallback->Generic.PostCallback)(this->m_Device);
    if ( level >= 0 )
      return (unsigned int)level;
    v8 = 26;
LABEL_10:
    _a3 = "Pre";
    if ( PrePost )
      _a3 = "Post";
    WPP_IFR_SF_sqqd(
      this->m_PkgPnp->m_Globals,
      4u,
      (unsigned int)"Post",
      v8,
      v10,
      _a3,
      this->m_Device,
      this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
      level);
    return (unsigned int)level;
  }
  if ( PrePost )
    p_PostCallback = (FxCxPnpPowerCallbackContext::<unnamed_type_u> *)&Context->SmIoRestartEx.PostCallback;
  level = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))p_PostCallback->Generic.PostCallback)(
            this->m_Device,
            this->m_PkgPnp->m_DevicePowerState);
  if ( level < 0 )
  {
    v8 = 27;
    goto LABEL_10;
  }
  return (unsigned int)level;
}
