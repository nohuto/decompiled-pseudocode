/*
 * XREFs of ZwQueryDirectoryObject @ 0x140725DD0
 * Callers:
 *     DifZwQueryDirectoryObjectWrapper @ 0x1406B04E0 (DifZwQueryDirectoryObjectWrapper.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x1407B5428 (PiDrvDbEnumDriverStoreNodes.c)
 *     ExpFindArcName @ 0x14083B5E0 (ExpFindArcName.c)
 *     SyspartEnumerateDisks @ 0x140894798 (SyspartEnumerateDisks.c)
 *     IopGetLegacyVetoListDrivers @ 0x14094522C (IopGetLegacyVetoListDrivers.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0 (SepCleanupLUIDDeviceMapDirectory.c)
 *     CmGetSystemDriverList @ 0x140D04720 (CmGetSystemDriverList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDirectoryObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
