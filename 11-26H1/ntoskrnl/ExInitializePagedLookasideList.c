/*
 * XREFs of ExInitializePagedLookasideList @ 0x140B31D30
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 *     FsRtlInitializeLargeMcbs @ 0x140CB8D9C (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeTunnels @ 0x140CB8E4C (FsRtlInitializeTunnels.c)
 *     FsRtlInitializeFileLocks @ 0x140CB8F3C (FsRtlInitializeFileLocks.c)
 *     WmipInitializeAllocs @ 0x140CE0100 (WmipInitializeAllocs.c)
 * Callees:
 *     ExInitializePagedLookasideListInternal @ 0x140498DA0 (ExInitializePagedLookasideListInternal.c)
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
