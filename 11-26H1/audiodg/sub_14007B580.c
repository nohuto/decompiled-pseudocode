/*
 * XREFs of sub_14007B580 @ 0x14007B580
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400125D4 @ 0x1400125D4 (sub_1400125D4.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007B580(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  sub_1400125D4(&v5);
  v2 = *(_QWORD *)(a1 + 48);
  v5 = 0LL;
  if ( v2 )
  {
    v3 = sub_1400B6010(v2);
    if ( v3 >= 0 )
      v3 = sub_1400B6010(v5);
  }
  else
  {
    v3 = -2147024809;
  }
  sub_1400125D4(&v5);
  return (unsigned int)v3;
}
