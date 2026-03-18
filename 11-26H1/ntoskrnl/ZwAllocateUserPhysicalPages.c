/*
 * XREFs of ZwAllocateUserPhysicalPages @ 0x140724290
 * Callers:
 *     DifZwAllocateUserPhysicalPagesWrapper @ 0x140699A20 (DifZwAllocateUserPhysicalPagesWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAllocateUserPhysicalPages(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
