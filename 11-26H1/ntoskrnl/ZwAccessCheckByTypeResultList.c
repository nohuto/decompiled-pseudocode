/*
 * XREFs of ZwAccessCheckByTypeResultList @ 0x140724070
 * Callers:
 *     DifZwAccessCheckByTypeResultListWrapper @ 0x140697C60 (DifZwAccessCheckByTypeResultListWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAccessCheckByTypeResultList(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
