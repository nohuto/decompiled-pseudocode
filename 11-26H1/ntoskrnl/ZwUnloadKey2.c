/*
 * XREFs of ZwUnloadKey2 @ 0x140726F70
 * Callers:
 *     DifZwUnloadKey2Wrapper @ 0x1406BE100 (DifZwUnloadKey2Wrapper.c)
 *     VrpUnloadDifferencingHive @ 0x140979448 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x1409D0360 (BiUnloadHiveByName.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140AFF5E4 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     PiDrvDbLoadHive @ 0x140B1F060 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x140B1F12C (PiDrvDbUnloadHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140CC35DC (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
