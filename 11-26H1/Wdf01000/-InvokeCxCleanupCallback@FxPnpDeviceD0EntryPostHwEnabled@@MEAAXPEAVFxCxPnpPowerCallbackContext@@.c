/*
 * XREFs of ?InvokeCxCleanupCallback@FxPnpDeviceD0EntryPostHwEnabled@@MEAAXPEAVFxCxPnpPowerCallbackContext@@@Z @ 0x1400A4F90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxPnpDeviceD0EntryPostHwEnabled::InvokeCxCleanupCallback(
        FxPnpDeviceD0EntryPostHwEnabled *this,
        FxCxPnpPowerCallbackContext *Context)
{
  ((void (__fastcall *)(WDFDEVICE__ *, _QWORD))Context->u.Generic.CleanupCallback)(
    this->m_Device,
    (unsigned int)this->m_PreviousState);
}
