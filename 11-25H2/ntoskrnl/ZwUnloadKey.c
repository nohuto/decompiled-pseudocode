/*
 * XREFs of ZwUnloadKey @ 0x14069EC80
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x14063DAA0 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x140947228 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x140A249A0 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x140A28550 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnloadKey(POBJECT_ATTRIBUTES TargetKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
