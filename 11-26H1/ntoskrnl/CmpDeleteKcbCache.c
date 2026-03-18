/*
 * XREFs of CmpDeleteKcbCache @ 0x1408C8450
 * Callers:
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpDeleteHive @ 0x1408D42C4 (CmpDeleteHive.c)
 *     CmpWalkOneLevel @ 0x1408D5620 (CmpWalkOneLevel.c)
 *     CmpInitializeKcbCache @ 0x14097C668 (CmpInitializeKcbCache.c)
 *     CmpUnlockHashEntry @ 0x140A345F0 (CmpUnlockHashEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteKcbCache(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdi

  v2 = *(void **)(a1 + 1648);
  v3 = *(void **)(a1 + 1664);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1648) = 0LL;
    *(_DWORD *)(a1 + 1656) = 0;
    ExFreePoolWithTag(v2, 0x61434D43u);
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1664) = 0LL;
    *(_DWORD *)(a1 + 1672) = 0;
    ExFreePoolWithTag(v3, 0x61434D43u);
  }
}
