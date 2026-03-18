/*
 * XREFs of ZwUnloadKey2 @ 0x14069ECA0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140947228 (VrpUnloadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14094BD98 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     BiUnloadHiveByName @ 0x140A249A0 (BiUnloadHiveByName.c)
 *     PiDrvDbLoadHive @ 0x140A77864 (PiDrvDbLoadHive.c)
 *     PiDrvDbUnloadHive @ 0x140A77940 (PiDrvDbUnloadHive.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140C11358 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey2(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
