/*
 * XREFs of sub_180048F34 @ 0x180048F34
 * Callers:
 *     sub_180049E40 @ 0x180049E40 (sub_180049E40.c)
 * Callees:
 *     sub_180049070 @ 0x180049070 (sub_180049070.c)
 *     sub_180049250 @ 0x180049250 (sub_180049250.c)
 *     sub_1800497DC @ 0x1800497DC (sub_1800497DC.c)
 *     sub_18004B664 @ 0x18004B664 (sub_18004B664.c)
 */

__int64 __fastcall sub_180048F34(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  __int64 i; // rsi
  __int64 result; // rax

  v3 = *a1;
  v5 = a3;
  if ( a3 > 0x2E8BA2E8BA2E8BA3LL * ((a1[2] - *a1) >> 3) )
  {
    sub_18004B664(a1, a3);
    v7 = *a1;
LABEL_11:
    result = sub_180049250(a2, v5, v7);
    i = result;
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = 0x2E8BA2E8BA2E8BA3LL * ((v7 - v3) >> 3);
  if ( v5 > v8 )
  {
    while ( v3 != v7 )
    {
      sub_1800497DC(v3, a2);
      v7 = a1[1];
      v3 += 88LL;
      a2 += 88LL;
    }
    v5 -= v8;
    goto LABEL_11;
  }
  for ( i = v3 + 88 * v5; v5; --v5 )
  {
    sub_1800497DC(v3, a2);
    v3 += 88LL;
    a2 += 88LL;
  }
  result = sub_180049070(i, a1[1]);
LABEL_7:
  a1[1] = i;
  return result;
}
