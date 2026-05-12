/*
 * XREFs of sub_140122430 @ 0x140122430
 * Callers:
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_140122430(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = sub_1400143E0(
         72LL,
         16LL * *(unsigned __int16 *)(a1 + 22),
         1380147538LL,
         *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  v3 = 0;
  *(_QWORD *)(a1 + 1168) = v2;
  if ( !v2 )
    return 3221225626LL;
  if ( *(_WORD *)(a1 + 22) )
  {
    do
      InitializeSListHead((PSLIST_HEADER)(*(_QWORD *)(a1 + 1168) + 16LL * v3++));
    while ( v3 < *(unsigned __int16 *)(a1 + 22) );
  }
  return 0LL;
}
