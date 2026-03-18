/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDevicePrepareHardware@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1400A4FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPnpDevicePrepareHardware::InvokeCxCleanupCallback(
        FxPnpDevicePrepareHardware *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *))Context->u.Generic.CleanupCallback)(
    this->m_Device,
    this->m_ResourcesRaw,
    this->m_ResourcesTranslated);
}
