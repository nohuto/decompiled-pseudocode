/*
 * XREFs of sub_180053C4C @ 0x180053C4C
 * Callers:
 *     sub_180053D44 @ 0x180053D44 (sub_180053D44.c)
 * Callees:
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 *     sub_180052B08 @ 0x180052B08 (sub_180052B08.c)
 *     sub_1800540E4 @ 0x1800540E4 (sub_1800540E4.c)
 *     sub_180054120 @ 0x180054120 (sub_180054120.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180053C4C(_QWORD *a1, unsigned int *a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r15
  int v9; // [rsp+44h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+50h] [rbp-18h] BYREF
  int v12; // [rsp+A8h] [rbp+40h] BYREF
  int v13; // [rsp+B0h] [rbp+48h] BYREF
  int v14; // [rsp+B8h] [rbp+50h] BYREF

  v5 = (a2[5] & 0x10) != 0 ? 6LL : 1LL;
  v6 = a3 / v5;
  v10 = a3 / v5;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    v12 = 0;
    v13 = sub_180054120(a2[4], *a2, a2[1]);
    v14 = sub_1800540E4(a2[4], *a2);
    v9 = sub_18004744C(a2[4]);
    v11[0] = v6 * v7;
    sub_180052B08(a1, v11, (__int64 *)&v10, &v9, &v14, &v13, &v12);
    if ( ++v7 >= v5 )
      break;
    v6 = v10;
  }
  return a1;
}
