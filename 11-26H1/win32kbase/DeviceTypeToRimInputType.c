/*
 * XREFs of DeviceTypeToRimInputType @ 0x140092D60
 * Callers:
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x140092C7C (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401A4390 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401BB0E0 (RIMDiscoverDevicesOfInputType.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401FFA30 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1402006B0 (RIMAddNonPnpDeviceOfType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DeviceTypeToRimInputType(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return 1LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 2LL;
  if ( (unsigned int)(v1 - 1) > 1 )
    return 0LL;
  return 60LL;
}
