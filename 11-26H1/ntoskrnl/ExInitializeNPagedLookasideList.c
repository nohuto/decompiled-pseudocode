/*
 * XREFs of ExInitializeNPagedLookasideList @ 0x140498C20
 * Callers:
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14078D880 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     AlpcpInitSystem @ 0x1407C1414 (AlpcpInitSystem.c)
 *     KiFilterFiberContext @ 0x140C80D10 (KiFilterFiberContext.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 */

void __stdcall ExInitializeNPagedLookasideList(
        PNPAGED_LOOKASIDE_LIST Lookaside,
        PALLOCATE_FUNCTION Allocate,
        PFREE_FUNCTION Free,
        ULONG Flags,
        SIZE_T Size,
        ULONG Tag,
        USHORT Depth)
{
  ExInitializeNPagedLookasideListInternal((_DWORD)Lookaside, (_DWORD)Allocate, (_DWORD)Free, Flags, Size, Tag, Depth, 0);
}
