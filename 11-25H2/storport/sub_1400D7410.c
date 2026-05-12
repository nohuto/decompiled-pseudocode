/*
 * XREFs of sub_1400D7410 @ 0x1400D7410
 * Callers:
 *     sub_1400D7168 @ 0x1400D7168 (sub_1400D7168.c)
 * Callees:
 *     sub_1400718DC @ 0x1400718DC (sub_1400718DC.c)
 *     sub_14007197C @ 0x14007197C (sub_14007197C.c)
 *     sub_1400CA2AC @ 0x1400CA2AC (sub_1400CA2AC.c)
 *     sub_1400D40DC @ 0x1400D40DC (sub_1400D40DC.c)
 */

__int64 __fastcall sub_1400D7410(__int64 a1)
{
  KIRQL v3; // bl
  int v4; // esi

  if ( (*(_BYTE *)(a1 + 144) & 2) == 0 )
    return 0LL;
  v3 = sub_1400CA2AC(a1);
  v4 = sub_1400718DC(a1 + 168);
  sub_1400D40DC(a1, v3);
  if ( sub_14007197C(a1 + 168, 3) )
    sub_1400718DC(a1 + 168);
  if ( v4 >= 0 )
    *(_QWORD *)(a1 + 144) &= ~2uLL;
  return (unsigned int)v4;
}
