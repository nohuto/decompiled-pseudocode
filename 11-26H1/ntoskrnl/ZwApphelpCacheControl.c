/*
 * XREFs of ZwApphelpCacheControl @ 0x140723D70
 * Callers:
 *     DifZwApphelpCacheControlWrapper @ 0x14069BEA0 (DifZwApphelpCacheControlWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwApphelpCacheControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
