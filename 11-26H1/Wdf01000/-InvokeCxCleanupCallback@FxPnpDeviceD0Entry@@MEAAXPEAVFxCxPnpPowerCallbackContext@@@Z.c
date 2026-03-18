/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceD0Entry@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1400A4F70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPnpDeviceD0Entry::InvokeCxCleanupCallback(
        FxPnpDeviceD0Entry *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.CleanupCallback)(
    this->m_Device,
    (unsigned int)this->m_PreviousState);
}
