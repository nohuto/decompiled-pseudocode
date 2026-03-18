/*
 * XREFs of ZwUnloadKey @ 0x140726F50
 * Callers:
 *     DifZwUnloadKeyWrapper @ 0x1406BE3E0 (DifZwUnloadKeyWrapper.c)
 *     VrpUnloadDifferencingHive @ 0x140979448 (VrpUnloadDifferencingHive.c)
 *     BiUnloadHiveByName @ 0x1409D0360 (BiUnloadHiveByName.c)
 *     BiLoadHive @ 0x1409D0564 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnloadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
