/*
 * XREFs of sub_18008F17C @ 0x18008F17C
 * Callers:
 *     sub_18008F518 @ 0x18008F518 (sub_18008F518.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180012790 @ 0x180012790 (sub_180012790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180077E54 @ 0x180077E54 (sub_180077E54.c)
 *     sub_18008F2DC @ 0x18008F2DC (sub_18008F2DC.c)
 */

__int64 __fastcall sub_18008F17C(__int64 **a1, _QWORD *a2, unsigned __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int64 v7; // r14
  __int64 *v8; // r8
  unsigned __int64 v9; // r14
  __int64 i; // r14
  __int64 result; // rax

  v3 = *a1;
  v4 = a3;
  if ( a3 > ((char *)a1[2] - (char *)*a1) >> 4 )
  {
    if ( a3 > 0xFFFFFFFFFFFFFFFLL )
      sub_180012A30();
    v7 = sub_180012790(a1, a3);
    if ( v3 )
    {
      sub_1800130CC((__int64)v3, (__int64)a1[1]);
      sub_18000E26C(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF0uLL);
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
    }
    sub_180077E54((__int64 *)a1, v7);
    v8 = *a1;
    goto LABEL_14;
  }
  v8 = a1[1];
  v9 = ((char *)v8 - (char *)v3) >> 4;
  if ( v4 > v9 )
  {
    while ( v3 != v8 )
    {
      sub_180013540(v3, a2);
      v8 = a1[1];
      v3 += 2;
      a2 += 2;
    }
    v4 -= v9;
LABEL_14:
    result = sub_18008F2DC(a2, v4, v8);
    a1[1] = (__int64 *)result;
    return result;
  }
  for ( i = (__int64)&v3[2 * v4]; v4; --v4 )
  {
    sub_180013540(v3, a2);
    v3 += 2;
    a2 += 2;
  }
  result = sub_1800130CC(i, (__int64)a1[1]);
  a1[1] = (__int64 *)i;
  return result;
}
