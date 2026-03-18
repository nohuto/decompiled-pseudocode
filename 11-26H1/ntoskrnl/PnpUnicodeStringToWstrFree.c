/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1409DB5D0
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407A3F78 (PipApplyFunctionToServiceInstances.c)
 *     PiInitializeDevice @ 0x1407B36E8 (PiInitializeDevice.c)
 *     PnpGetDeviceDependencyList @ 0x140910630 (PnpGetDeviceDependencyList.c)
 *     PiDeviceRegistration @ 0x140912D28 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140912FE0 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1409D9558 (IopBuildGlobalSymbolicLinkString.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1409DA6C4 (PnpGetDeviceInterfacePropertyData.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x1409DAEF8 (PnpSetDeviceInterfacePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x1409DB140 (IoGetDeviceInterfaceAlias.c)
 *     PnpDisableDeviceInterfaces @ 0x140A8ABF0 (PnpDisableDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140A97BAC (IopDeviceObjectFromSymbolicName.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF6F40 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140AF7250 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IoRegisterDeviceInterface @ 0x140AFA280 (IoRegisterDeviceInterface.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140B256D0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PnpDeleteDeviceInterfaces @ 0x140B4A554 (PnpDeleteDeviceInterfaces.c)
 *     IopInitializeBootDrivers @ 0x140CBF2A4 (IopInitializeBootDrivers.c)
 *     PipInitComputerIds @ 0x140D056B0 (PipInitComputerIds.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpUnicodeStringToWstrFree(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
