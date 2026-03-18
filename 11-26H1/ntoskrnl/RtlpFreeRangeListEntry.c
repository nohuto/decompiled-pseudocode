/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140AE4F68
 * Callers:
 *     RtlpAddIntersectingRanges @ 0x14080080C (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x140800B60 (RtlpDeleteFromMergedRange.c)
 *     RtlpDeleteRangeListEntry @ 0x140AE4F08 (RtlpDeleteRangeListEntry.c)
 *     RtlDeleteOwnersRanges @ 0x140B10130 (RtlDeleteOwnersRanges.c)
 *     RtlInvertRangeListEx @ 0x140B10830 (RtlInvertRangeListEx.c)
 *     RtlAddRange @ 0x140B10960 (RtlAddRange.c)
 *     RtlDeleteRange @ 0x140B4A350 (RtlDeleteRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
