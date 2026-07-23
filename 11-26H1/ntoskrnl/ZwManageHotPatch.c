/*
 * XREFs of ZwManageHotPatch @ 0x14072A300
 * Callers:
 *     DifZwManageHotPatchWrapper @ 0x1406AD590 (DifZwManageHotPatchWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageHotPatch(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
