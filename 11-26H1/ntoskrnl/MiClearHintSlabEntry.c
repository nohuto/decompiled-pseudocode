/*
 * XREFs of MiClearHintSlabEntry @ 0x1402A8D10
 * Callers:
 *     MiRemoveSlabEntry @ 0x1402A8C10 (MiRemoveSlabEntry.c)
 *     MiChangeSlabEntryIdentity @ 0x14070A8C8 (MiChangeSlabEntryIdentity.c)
 *     MiEstablishDefragSlabEntries @ 0x14070B794 (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiClearHintSlabEntry(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9

  if ( *(_DWORD *)(a1 + 128) == 8 )
  {
    v4 = 0LL;
    v5 = 64LL;
    do
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( *(_QWORD *)(v6 + v4) == a2 )
        *(_QWORD *)(v6 + v4) = 0LL;
      v7 = *(_QWORD *)(a1 + 40);
      if ( *(_QWORD *)(v7 + v4) == a2 )
        *(_QWORD *)(v7 + v4) = 0LL;
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  else
  {
    if ( *(_QWORD *)(a1 + 32) == a2 )
      *(_QWORD *)(a1 + 32) = 0LL;
    if ( *(_QWORD *)(a1 + 40) == a2 )
      *(_QWORD *)(a1 + 40) = 0LL;
  }
  v2 = a2 | 1;
  if ( (*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    *(_QWORD *)(a1 + 48) = v2;
  result = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( result == a2 )
    *(_QWORD *)(a1 + 56) = v2;
  return result;
}
