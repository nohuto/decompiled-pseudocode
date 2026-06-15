/*
 * XREFs of sub_1400304D0 @ 0x1400304D0
 * Callers:
 *     sub_140030488 @ 0x140030488 (sub_140030488.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 * Callees:
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 *     sub_140030488 @ 0x140030488 (sub_140030488.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_1400304D0(__int64 *a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax
  __int64 *v4; // rdx

  while ( a1[2] )
  {
    v4 = (__int64 *)*a1;
    if ( !*a1 )
      sub_14004639C(2147500037LL, 0LL);
    *a1 = *v4;
    result = sub_140030488((__int64)a1, v4);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v2 = (_QWORD *)a1[3];
  if ( v2 )
  {
    result = sub_14000DEF8(v2);
    a1[3] = 0LL;
  }
  return result;
}
