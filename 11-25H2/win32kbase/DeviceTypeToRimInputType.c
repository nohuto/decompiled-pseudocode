/*
 * XREFs of DeviceTypeToRimInputType @ 0x14002CFC0
 * Callers:
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x14002CED8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D8A10 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1401D9660 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D9BA0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401F0B64 (RIMDiscoverDevicesOfInputType.c)
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
