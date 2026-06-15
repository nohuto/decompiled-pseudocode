/*
 * XREFs of sub_14000EA58 @ 0x14000EA58
 * Callers:
 *     sub_14000E144 @ 0x14000E144 (sub_14000E144.c)
 *     sub_14000EA30 @ 0x14000EA30 (sub_14000EA30.c)
 *     sub_14001003C @ 0x14001003C (sub_14001003C.c)
 * Callees:
 *     sub_14000DEF8 @ 0x14000DEF8 (sub_14000DEF8.c)
 *     sub_14000EA30 @ 0x14000EA30 (sub_14000EA30.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000EA58(__int64 *a1)
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
    result = sub_14000EA30((__int64)a1, v4);
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
