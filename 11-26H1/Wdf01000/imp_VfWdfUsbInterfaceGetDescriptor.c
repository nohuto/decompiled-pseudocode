/*
 * XREFs of imp_VfWdfUsbInterfaceGetDescriptor @ 0x1400E2030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall imp_VfWdfUsbInterfaceGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 SettingIndex,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  WdfVersion.Functions.pfnWdfUsbInterfaceGetDescriptor(DriverGlobals, UsbInterface, SettingIndex, InterfaceDescriptor);
}
