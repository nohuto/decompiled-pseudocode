/*
 * XREFs of ZwFreeUserPhysicalPages @ 0x1407252B0
 * Callers:
 *     DifZwFreeUserPhysicalPagesWrapper @ 0x1406A6B30 (DifZwFreeUserPhysicalPagesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFreeUserPhysicalPages(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
