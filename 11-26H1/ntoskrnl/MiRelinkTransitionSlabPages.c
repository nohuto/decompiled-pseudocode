/*
 * XREFs of MiRelinkTransitionSlabPages @ 0x140530D80
 * Callers:
 *     MiDemoteSlabEntry @ 0x1402A97C4 (MiDemoteSlabEntry.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x14070B4B0 (MiDeleteSlabEntriesForIdentity.c)
 * Callees:
 *     MiInsertPageInList @ 0x1402BFA00 (MiInsertPageInList.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 */

__int64 __fastcall MiRelinkTransitionSlabPages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  ULONG_PTR v5; // rbx
  char v6; // al
  unsigned int v7; // edx

  v3 = 0LL;
  v4 = a1;
  while ( v4 != 0x3FFFFFFFFFLL )
  {
    v5 = 48 * v4 - 0x220000000000LL;
    v4 = *(_QWORD *)v5 & 0xFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v5 + 24) & 0x4000000000000000LL) != 0 )
    {
      *(_QWORD *)(v5 + 24) &= ~0x4000000000000000uLL;
      MiDiscardTransitionPfnEx(v5, 0LL, a3);
      ++v3;
    }
    else
    {
      v6 = *(_BYTE *)(v5 + 34) & 7;
      if ( v6 == 2 )
      {
        v7 = 4;
        ++v3;
      }
      else
      {
        v7 = 16;
        if ( v6 == 3 )
          v7 = 8;
      }
      MiInsertPageInList(v5, v7);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v3;
}
