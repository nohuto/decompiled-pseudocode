/*
 * XREFs of ZwAccessCheckByType @ 0x140724050
 * Callers:
 *     DifZwAccessCheckByTypeWrapper @ 0x140697E70 (DifZwAccessCheckByTypeWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckByType(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
