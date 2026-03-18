/*
 * XREFs of ZwMapUserPhysicalPages @ 0x1407257B0
 * Callers:
 *     DifZwMapUserPhysicalPagesWrapper @ 0x1406AA010 (DifZwMapUserPhysicalPagesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwMapUserPhysicalPages(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
