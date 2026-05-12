/*
 * XREFs of sub_140067EFC @ 0x140067EFC
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_140185AA8 @ 0x140185AA8 (sub_140185AA8.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140067EFC(__int64 a1)
{
  char result; // al

  if ( *(_BYTE *)a1 != 77 )
    return 0;
  if ( *(_BYTE *)(a1 + 1) != 70 )
    return 0;
  if ( *(_BYTE *)(a1 + 2) != 78 )
    return 0;
  if ( *(_BYTE *)(a1 + 3) != 68 )
    return 0;
  result = 1;
  if ( *(_WORD *)(a1 + 8) <= 1u )
    return 0;
  return result;
}
