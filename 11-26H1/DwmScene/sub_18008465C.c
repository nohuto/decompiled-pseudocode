/*
 * XREFs of sub_18008465C @ 0x18008465C
 * Callers:
 *     sub_180084B68 @ 0x180084B68 (sub_180084B68.c)
 * Callees:
 *     sub_180076340 @ 0x180076340 (sub_180076340.c)
 *     sub_180084758 @ 0x180084758 (sub_180084758.c)
 *     sub_1800849F8 @ 0x1800849F8 (sub_1800849F8.c)
 *     sub_180084FD8 @ 0x180084FD8 (sub_180084FD8.c)
 */

__int64 __fastcall sub_18008465C(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  __int64 i; // rsi
  __int64 result; // rax

  v3 = *a1;
  v5 = a3;
  if ( a3 > 0xAAAAAAAAAAAAAAABuLL * ((a1[2] - *a1) >> 4) )
  {
    sub_180084FD8(a1, a3);
    v7 = *a1;
LABEL_11:
    result = sub_180084758(a2, v5, v7, a1);
    i = result;
    goto LABEL_7;
  }
  v7 = a1[1];
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - v3) >> 4);
  if ( v5 > v8 )
  {
    while ( v3 != v7 )
    {
      sub_1800849F8(v3, a2);
      v7 = a1[1];
      v3 += 48LL;
      a2 += 48LL;
    }
    v5 -= v8;
    goto LABEL_11;
  }
  for ( i = v3 + 48 * v5; v5; --v5 )
  {
    sub_1800849F8(v3, a2);
    v3 += 48LL;
    a2 += 48LL;
  }
  result = sub_180076340(i, a1[1]);
LABEL_7:
  a1[1] = i;
  return result;
}
