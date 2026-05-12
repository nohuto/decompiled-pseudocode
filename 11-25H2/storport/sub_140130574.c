/*
 * XREFs of sub_140130574 @ 0x140130574
 * Callers:
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 * Callees:
 *     sub_14012FC74 @ 0x14012FC74 (sub_14012FC74.c)
 */

char __fastcall sub_140130574(__int64 a1)
{
  unsigned int v2; // r11d
  int v3; // r11d

  v2 = 0;
  if ( !*(_WORD *)(a1 + 22) )
    return sub_14012FC74(a1, *(_QWORD *)(a1 + 712)) != 0;
  while ( !sub_14012FC74(a1, *(_QWORD *)(a1 + 728) + 192LL * v2) )
  {
    v2 = v3 + 1;
    if ( v2 >= *(unsigned __int16 *)(a1 + 22) )
      return sub_14012FC74(a1, *(_QWORD *)(a1 + 712)) != 0;
  }
  return 1;
}
