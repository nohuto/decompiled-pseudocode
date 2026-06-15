/*
 * XREFs of sub_14000E334 @ 0x14000E334
 * Callers:
 *     sub_14000E144 @ 0x14000E144 (sub_14000E144.c)
 *     sub_14000E30C @ 0x14000E30C (sub_14000E30C.c)
 *     sub_14001003C @ 0x14001003C (sub_14001003C.c)
 *     sub_14001D990 @ 0x14001D990 (sub_14001D990.c)
 * Callees:
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 *     sub_14000E30C @ 0x14000E30C (sub_14000E30C.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000E334(__int64 *a1)
{
  __int64 *v2; // rdx
  _QWORD *v3; // rcx
  __int64 result; // rax

  while ( a1[2] )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      sub_14004639C(2147500037LL, 0LL);
    *a1 = *v2;
    result = sub_14000E30C((__int64)a1, v2);
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v3 = (_QWORD *)a1[3];
  if ( v3 )
  {
    result = sub_14000DEF8(v3);
    a1[3] = 0LL;
  }
  return result;
}
