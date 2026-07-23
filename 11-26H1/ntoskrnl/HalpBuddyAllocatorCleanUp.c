/*
 * XREFs of HalpBuddyAllocatorCleanUp @ 0x1405AE170
 * Callers:
 *     <none>
 * Callees:
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140358FA0 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpBuddyAllocatorCleanUp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  HalpBuddyAllocatorDeleteSubtree(a1, *(_QWORD *)(a1 + 88));
  HalpMmAllocCtxFree(v2, *(_QWORD *)(a1 + 96));
  HalpMmAllocCtxFree(v3, *(_QWORD *)(a1 + 88));
  HalpMmAllocCtxFree(v4, a1);
}
