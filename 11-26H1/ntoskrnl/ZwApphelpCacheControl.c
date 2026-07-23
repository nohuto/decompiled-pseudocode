/*
 * XREFs of ZwApphelpCacheControl @ 0x140728940
 * Callers:
 *     DifZwApphelpCacheControlWrapper @ 0x14069FA80 (DifZwApphelpCacheControlWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwApphelpCacheControl(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
