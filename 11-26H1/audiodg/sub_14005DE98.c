/*
 * XREFs of sub_14005DE98 @ 0x14005DE98
 * Callers:
 *     sub_14005DF9C @ 0x14005DF9C (sub_14005DF9C.c)
 *     sub_14005DFA8 @ 0x14005DFA8 (sub_14005DFA8.c)
 * Callees:
 *     sub_1400453E4 @ 0x1400453E4 (sub_1400453E4.c)
 *     sub_14005DAD0 @ 0x14005DAD0 (sub_14005DAD0.c)
 */

__int64 __fastcall sub_14005DE98(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = a1[3];
  if ( v2 )
  {
    sub_1400453E4(v2, (a1[5] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  sub_14005DAD0(v2, a1[1]);
  return sub_1400453E4(a1[1], 0x38uLL);
}
