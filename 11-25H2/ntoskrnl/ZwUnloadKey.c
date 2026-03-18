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

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
