/*
 * XREFs of ZwManageHotPatch @ 0x140725730
 * Callers:
 *     DifZwManageHotPatchWrapper @ 0x1406A99B0 (DifZwManageHotPatchWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwManageHotPatch(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
