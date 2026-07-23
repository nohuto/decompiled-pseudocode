/*
 * XREFs of RtlAddRange @ 0x140B123A0
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x14078A5BC (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14078A7D4 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x14078B8F0 (ArbInitializeRangeList.c)
 *     IopMemInitialize @ 0x1407A94C8 (IopMemInitialize.c)
 *     IopPortAddAllocation @ 0x1407A96E0 (IopPortAddAllocation.c)
 *     ArbAddAllocation @ 0x140B121E0 (ArbAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x140B12270 (RtlInvertRangeListEx.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x140AE2D28 (RtlpFreeRangeListEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140B1244C (RtlpCreateRangeListEntry.c)
 *     RtlpAddRange @ 0x140B124BC (RtlpAddRange.c)
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
