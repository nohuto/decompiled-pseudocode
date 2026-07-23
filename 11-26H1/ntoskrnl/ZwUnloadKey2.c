/*
 * XREFs of ZwUnloadKey2 @ 0x14072BB40
 * Callers:
 *     DifZwUnloadKey2Wrapper @ 0x1406C1CE0 (DifZwUnloadKey2Wrapper.c)
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x1409A1340 (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140B01274 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PiDrvDbLoadHive @ 0x140B210E0 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x140B211AC (PiDrvDbUnloadHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140CC96B0 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey2(POBJECT_ATTRIBUTES TargetKey, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
