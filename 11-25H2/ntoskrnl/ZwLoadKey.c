/*
 * XREFs of ZwLoadKey @ 0x14069D340
 * Callers:
 *     DifZwLoadKeyWrapper @ 0x140634BD0 (DifZwLoadKeyWrapper.c)
 *     BiLoadHive @ 0x140A28550 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLoadKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
