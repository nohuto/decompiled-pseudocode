/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceSelfManagedIoSuspend@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x140076B70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sqqd @ 0x1400A5234 (WPP_IFR_SF_sqqd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoSuspend::InvokeCxCallback(
        FxPnpDeviceSelfManagedIoSuspend *this,
        FxCxPnpPowerCallbackContext *Context,
        FxCxInvokeCallbackSubType PrePost)
{
  int level; // ebx
  WDFDEVICE__ *m_Device; // rcx
  unsigned __int16 v8; // r9
  const char *_a3; // rdx
  const _GUID *v10; // [rsp+20h] [rbp-38h]

  if ( Context->m_CallbackType != FxCxCallbackSmIoSuspend )
  {
    if ( PrePost )
      Context = (FxCxPnpPowerCallbackContext *)((char *)Context + 8);
    level = ((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.PreCallback)(
              this->m_Device,
              (unsigned int)this->m_TargetState);
    if ( level >= 0 )
      return (unsigned int)level;
    v8 = 24;
LABEL_11:
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
  m_Device = this->m_Device;
  if ( PrePost )
    Context = (FxCxPnpPowerCallbackContext *)((char *)Context + 8);
  level = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(m_Device);
  if ( level < 0 )
  {
    v8 = 23;
    goto LABEL_11;
  }
  return (unsigned int)level;
}
