/*
 * XREFs of ?InvokeCxCallback@FxPowerDeviceArmWakeFromSx@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x1400A4EA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_sqqd @ 0x1400A5234 (WPP_IFR_SF_sqqd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPowerDeviceArmWakeFromSx::InvokeCxCallback(
        FxPowerDeviceArmWakeFromSx *this,
        FxCxPnpPowerCallbackContext *Context,
        __int64 PrePost)
{
  char v3; // si
  __int64 (__fastcall *PreCallback)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, __int64); // rax
  int level; // ebx
  unsigned __int16 v7; // r9
  WDFDEVICE__ *m_Device; // rcx
  const char *_a3; // rdx
  const _GUID *v11; // [rsp+20h] [rbp-38h]

  v3 = PrePost;
  if ( Context->m_CallbackType == FxCxCallbackArmWakeFromSxWithReason )
  {
    if ( (_BYTE)PrePost )
      Context = (FxCxPnpPowerCallbackContext *)((char *)Context + 8);
    PreCallback = (__int64 (__fastcall *)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, __int64))Context->u.Generic.PreCallback;
    LOBYTE(Context) = this->m_DeviceWakeEnabled;
    LOBYTE(PrePost) = this->m_ChildrenArmedForWake;
    level = PreCallback(this->m_Device, Context, PrePost);
    if ( level < 0 )
    {
      v7 = 32;
LABEL_10:
      _a3 = "Pre";
      if ( v3 )
        _a3 = "Post";
      WPP_IFR_SF_sqqd(
        this->m_PkgPnp->m_Globals,
        2u,
        (unsigned int)"Post",
        v7,
        v11,
        _a3,
        this->m_Device,
        this->m_PkgPnp->m_DeviceBase->m_DeviceObject.m_DeviceObject,
        level);
    }
  }
  else
  {
    m_Device = this->m_Device;
    if ( (_BYTE)PrePost )
      Context = (FxCxPnpPowerCallbackContext *)((char *)Context + 8);
    level = ((__int64 (__fastcall *)(WDFDEVICE__ *))Context->u.Generic.PreCallback)(m_Device);
    if ( level < 0 )
    {
      v7 = 33;
      goto LABEL_10;
    }
  }
  return (unsigned int)level;
}
