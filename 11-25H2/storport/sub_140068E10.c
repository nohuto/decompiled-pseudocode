/*
 * XREFs of sub_140068E10 @ 0x140068E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_14008F190 @ 0x14008F190 (sub_14008F190.c)
 */

__int64 __fastcall sub_140068E10(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rdx

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return sub_1400229C8(*(_BYTE *)(a2 + 3));
  if ( *(_BYTE *)(a2 + 2) == 40 )
    v5 = *(_QWORD *)(a2 + 64);
  else
    v5 = *(_QWORD *)(a2 + 24);
  return sub_14008F190(a3 + 40, v5 + 4, *(unsigned __int8 *)(v5 + 3));
}
