/*
 * XREFs of sub_14000EC5C @ 0x14000EC5C
 * Callers:
 *     sub_14000EC10 @ 0x14000EC10 (sub_14000EC10.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14002F28C @ 0x14002F28C (sub_14002F28C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14000EC5C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *a1 = (__int64)off_1400BC6D0;
  v2 = a1[16];
  if ( v2 )
  {
    sub_1400B6010(v2);
    a1[16] = 0LL;
  }
  v3 = a1[17];
  if ( v3 )
  {
    sub_1400B6010(v3);
    a1[17] = 0LL;
  }
  v4 = a1[18];
  if ( v4 )
  {
    sub_1400B6010(v4);
    a1[18] = 0LL;
  }
  sub_14002F28C(a1 + 21);
  sub_140003238(a1 + 19);
  sub_140003238(a1 + 15);
  return sub_140003238(a1 + 13);
}
