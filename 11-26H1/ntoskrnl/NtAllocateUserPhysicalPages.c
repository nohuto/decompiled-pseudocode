/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1408793A0
 * Callers:
 *     DifNtAllocateUserPhysicalPagesWrapper @ 0x14066B550 (DifNtAllocateUserPhysicalPagesWrapper.c)
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x140877868 (MiAllocateUserPhysicalPages.c)
 */

__int64 __fastcall NtAllocateUserPhysicalPages(void *a1, __int64 a2, __int64 a3)
{
  return MiAllocateUserPhysicalPages(a1, a2, a3, 0LL, 0);
}
