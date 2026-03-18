/*
 * XREFs of RtlAddRange @ 0x140B10960
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x140787A8C (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140787CA4 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x140788DC0 (ArbInitializeRangeList.c)
 *     IopMemInitialize @ 0x1407A6918 (IopMemInitialize.c)
 *     IopPortAddAllocation @ 0x1407A6B30 (IopPortAddAllocation.c)
 *     ArbAddAllocation @ 0x140B107A0 (ArbAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x140B10830 (RtlInvertRangeListEx.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x140AE4F68 (RtlpFreeRangeListEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140B10A0C (RtlpCreateRangeListEntry.c)
 *     RtlpAddRange @ 0x140B10A7C (RtlpAddRange.c)
 */

__int64 __fastcall RtlAddRange(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r10d
  __int64 RangeListEntry; // rax
  void *v10; // rdi
  int v11; // esi

  v7 = a3;
  if ( a3 < a2 )
    return 3221225485LL;
  LOBYTE(a3) = a4;
  RangeListEntry = RtlpCreateRangeListEntry(a2, v7, a3, a6, a7);
  v10 = (void *)RangeListEntry;
  if ( !RangeListEntry )
    return 3221225473LL;
  if ( (a5 & 2) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 1u;
  if ( (a5 & 0x10) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 0x10u;
  v11 = RtlpAddRange(a1, RangeListEntry, a5);
  if ( v11 < 0 )
  {
    RtlpFreeRangeListEntry(v10);
  }
  else
  {
    ++*(_DWORD *)(a1 + 20);
    ++*(_DWORD *)(a1 + 24);
  }
  return (unsigned int)v11;
}
