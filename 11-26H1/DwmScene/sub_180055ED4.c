/*
 * XREFs of sub_180055ED4 @ 0x180055ED4
 * Callers:
 *     sub_180058C70 @ 0x180058C70 (sub_180058C70.c)
 * Callees:
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 */

char __fastcall sub_180055ED4(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rsi
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r8

  v2 = a1[1];
  v3 = *a1;
  v4 = *a2;
  if ( v2 - *a1 != a2[1] - *a2 )
    return 1;
  v5 = 0;
  while ( v3 != v2 )
  {
    sub_1800141BC(v4);
    v6 = sub_1800141BC(v3);
    if ( !sub_18001F05C(v6, *(_QWORD *)(v3 + 16), v7, *(_QWORD *)(v4 + 16)) )
      return 1;
    v3 += 32LL;
    v4 += 32LL;
  }
  return v5;
}
