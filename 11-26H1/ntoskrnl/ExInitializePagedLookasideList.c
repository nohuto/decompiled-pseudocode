/*
 * XREFs of ExInitializePagedLookasideList @ 0x140B33F30
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140CBEDE0 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140CBEE90 (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140CBEF80 (FsRtlInitializeFileLocks.c)
 *     WmipInitializeAllocs @ 0x140CE6498 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x1404928F0 (ExInitializePagedLookasideListInternal.c)
 */

void __stdcall ExInitializePagedLookasideList(
        PPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializePagedLookasideListInternal(
    (__int64)Lookaside,
    (PVOID (__fastcall *)(int, SIZE_T, ULONG))Allocate,
    Free,
    Flags,
    Size,
    Tag,
    Depth,
    0);
}
