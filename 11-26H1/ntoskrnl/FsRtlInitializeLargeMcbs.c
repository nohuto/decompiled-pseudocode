/*
 * XREFs of FsRtlInitializeLargeMcbs @ 0x140CBEDE0
 * Callers:
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideList @ 0x140B33F30 (ExInitializePagedLookasideList.c)
 */

char FsRtlInitializeLargeMcbs()
{
  ExInitializePagedLookasideList(
    (PPAGED_LOOKASIDE_LIST)&FsRtlFirstPagedMappingLookasideList,
    0LL,
    0LL,
    0,
    0x78uLL,
    0x6D695346u,
    4u);
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
