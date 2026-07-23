/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140AE2D28
 * Callers:
 *     RtlpAddIntersectingRanges @ 0x1408062AC (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x140806600 (RtlpDeleteFromMergedRange.c)
 *     RtlpDeleteRangeListEntry @ 0x140AE2CC8 (RtlpDeleteRangeListEntry.c)
 *     RtlDeleteOwnersRanges @ 0x140B11B70 (RtlDeleteOwnersRanges.c)
 *     RtlInvertRangeListEx @ 0x140B12270 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x140B123A0 (RtlAddRange.c)
 *     RtlDeleteRange @ 0x140B4C0E0 (RtlDeleteRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeRangeListEntry(PVOID Entry)
{
  _DWORD *v2; // rax

  if ( (*((_BYTE *)Entry + 34) & 1) == 0 && (*((_BYTE *)Entry + 33) & 0x10) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)Entry + 2);
    if ( (*v2)-- == 1 )
      ExFreePoolWithTag(*((PVOID *)Entry + 2), 0);
  }
  ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&PspTlsContext.StackBase, Entry);
}
