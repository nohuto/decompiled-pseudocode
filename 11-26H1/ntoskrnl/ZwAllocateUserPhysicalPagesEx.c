/*
 * XREFs of ZwAllocateUserPhysicalPagesEx @ 0x1407242B0
 * Callers:
 *     DifZwAllocateUserPhysicalPagesExWrapper @ 0x140699880 (DifZwAllocateUserPhysicalPagesExWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAllocateUserPhysicalPagesEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
