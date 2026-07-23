/*
 * XREFs of ZwUnloadKey @ 0x14072BB20
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x1406C1FC0 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x1409A1340 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x1409A1544 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
