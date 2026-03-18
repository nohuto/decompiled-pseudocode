/*
 * XREFs of FsRtlInitializeLargeMcbs @ 0x140CB8D9C
 * Callers:
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideList @ 0x140B31D30 (ExInitializePagedLookasideList.c)
 */

char FsRtlInitializeLargeMcbs()
{
  ExInitializePagedLookasideList(&FsRtlFirstPagedMappingLookasideList, 0LL, 0LL, 0, 0x78uLL, 0x6D695346u, 4u);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&FsRtlFirstNonPagedMappingLookasideList,
    0LL,
    0LL,
    512,
    120,
    1835619142,
    4,
    0);
  return ExInitializeNPagedLookasideListInternal(
           (__int64)&FsRtlFastMutexLookasideList,
           0LL,
           0LL,
           512,
           56,
           1835422534,
           32,
           0);
}
