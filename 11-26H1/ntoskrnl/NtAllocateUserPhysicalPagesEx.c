/*
 * XREFs of NtAllocateUserPhysicalPagesEx @ 0x1408793C0
 * Callers:
 *     DifNtAllocateUserPhysicalPagesExWrapper @ 0x14066B3B0 (DifNtAllocateUserPhysicalPagesExWrapper.c)
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x140877868 (MiAllocateUserPhysicalPages.c)
 */

__int64 __fastcall NtAllocateUserPhysicalPagesEx(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return MiAllocateUserPhysicalPages(a1, a2, a3, a4, a5);
}
