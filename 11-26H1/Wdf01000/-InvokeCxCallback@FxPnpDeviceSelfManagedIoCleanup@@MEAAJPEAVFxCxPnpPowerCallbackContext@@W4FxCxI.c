/*
 * XREFs of ?InvokeCxCallback@FxPnpDeviceSelfManagedIoCleanup@@MEAAJPEAVFxCxPnpPowerCallbackContext@@W4FxCxInvokeCallbackSubType@@@Z @ 0x14007DE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPnpDeviceSelfManagedIoCleanup::InvokeCxCallback(
        FxPowerDeviceWakeFromSxTriggered *this,
        FxCxPnpPowerCallbackContext *Context,
        __int64 PrePost)
{
  LOBYTE(PrePost) = -(char)PrePost;
  (*(void (__fastcall **)(WDFDEVICE__ *, FxCxPnpPowerCallbackContext *, __int64))((char *)&Context->u.Generic.PreCallback
                                                                                + ((_BYTE)PrePost != 0 ? 8 : 0)))(
    this->m_Device,
    Context,
    PrePost);
  return 0LL;
}
