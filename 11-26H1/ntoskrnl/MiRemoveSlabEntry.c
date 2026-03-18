/*
 * XREFs of MiRemoveSlabEntry @ 0x1402A9800
 * Callers:
 *     MiFreeSlabEntries @ 0x1402A76DC (MiFreeSlabEntries.c)
 *     MiDemoteSlabEntry @ 0x1402AA3B4 (MiDemoteSlabEntry.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x1407067E0 (MiDeleteSlabEntriesForIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x140706AC4 (MiEstablishDefragSlabEntries.c)
 *     MmUpdateSlabRangeType @ 0x140CFE76C (MmUpdateSlabRangeType.c)
 * Callees:
 *     MiClearHintSlabEntry @ 0x1402A9900 (MiClearHintSlabEntry.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14036A0D8 (MiUpdateSlabTypeAvailablePages.c)
 *     RtlRbRemoveNode @ 0x140377C60 (RtlRbRemoveNode.c)
 */

__int64 __fastcall MiRemoveSlabEntry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  v3 = *(unsigned int *)(a3 + 84);
  v7 = LODWORD(MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a2 + 136) >> 3) & 3]);
  RtlRbRemoveNode(a2, a3);
  if ( *(_DWORD *)(a2 + 128) == 8 )
  {
    v10 = *(_QWORD *)(a3 + 24);
    if ( *(_QWORD *)(v10 + 8) != a3 + 24 || (v11 = *(_QWORD **)(a3 + 32), *v11 != a3 + 24) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
  }
  MiClearHintSlabEntry(a2, a3);
  *(_QWORD *)(a2 + 96) -= v3;
  MiUpdateSlabTypeAvailablePages(a1, *(unsigned int *)(a2 + 128), -v3);
  if ( (*(_DWORD *)(a3 + 92) & 2) != 0 )
  {
    *(_QWORD *)(a2 + 112) -= v7;
    v8 = 23504LL;
  }
  else
  {
    v8 = 23512LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)(v8 + a1), -v7);
  result = *(_QWORD *)(a2 + 120) - 1LL;
  *(_QWORD *)(a2 + 120) = result;
  return result;
}
