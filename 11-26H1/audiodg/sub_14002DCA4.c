/*
 * XREFs of sub_14002DCA4 @ 0x14002DCA4
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DC40 @ 0x14002DC40 (sub_14002DC40.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     sub_14000DE78 @ 0x14000DE78 (sub_14000DE78.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14002DCA4(__int64 **a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 *v3; // r8
  __int64 result; // rax
  bool v5; // zf

  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  v2 = *a2;
  if ( a2 == *a1 )
    *a1 = (__int64 *)v2;
  else
    *(_QWORD *)a2[1] = v2;
  v3 = (__int64 *)a2[1];
  if ( a2 == a1[1] )
    a1[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  result = (__int64)a1[4];
  *a2 = result;
  a1[4] = a2;
  v5 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  if ( v5 )
    return sub_14000DE78((__int64)a1, (__int64)a2);
  return result;
}
