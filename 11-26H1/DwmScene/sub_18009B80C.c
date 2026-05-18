/*
 * XREFs of sub_18009B80C @ 0x18009B80C
 * Callers:
 *     sub_18009BA40 @ 0x18009BA40 (sub_18009BA40.c)
 * Callees:
 *     sub_18009B9A0 @ 0x18009B9A0 (sub_18009B9A0.c)
 */

__int64 __fastcall sub_18009B80C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx

  v3 = a3;
  v4 = a2;
  v5 = (a3 - a1) >> 4;
  if ( v5 > 40 )
  {
    v6 = (v5 + 1) >> 3;
    v7 = 16 * v6;
    v6 *= 32LL;
    v8 = v7 + a1;
    sub_18009B9A0(a1, v7 + a1, v6 + a1);
    sub_18009B9A0(v4 - v7, v4, v7 + v4);
    sub_18009B9A0(v3 - v6, v3 - v7, v3);
    a3 = v9;
    a1 = v8;
    a2 = v4;
  }
  return sub_18009B9A0(a1, a2, a3);
}
