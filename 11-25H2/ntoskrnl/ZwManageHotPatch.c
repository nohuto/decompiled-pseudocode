/*
 * XREFs of ZwManageHotPatch @ 0x14069D480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageHotPatch(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
