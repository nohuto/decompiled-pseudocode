/*
 * XREFs of FsRtlDeleteExtraCreateParameterLookasideList @ 0x14078D850
 * Callers:
 *     <none>
 * Callees:
 *     ExDeletePagedLookasideList @ 0x1404BCAF0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1404BCB50 (ExDeleteNPagedLookasideList.c)
 */

void __stdcall FsRtlDeleteExtraCreateParameterLookasideList(PVOID Lookaside, FSRTL_ECP_LOOKASIDE_FLAGS Flags)
{
  if ( (Flags & 2) != 0 )
    ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)Lookaside);
  else
    ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)Lookaside);
}
