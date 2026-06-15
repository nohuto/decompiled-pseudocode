/*
 * XREFs of sub_14000E7B8 @ 0x14000E7B8
 * Callers:
 *     sub_14000E3CC @ 0x14000E3CC (sub_14000E3CC.c)
 *     sub_14002BEF8 @ 0x14002BEF8 (sub_14002BEF8.c)
 *     sub_140084DD8 @ 0x140084DD8 (sub_140084DD8.c)
 * Callees:
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

void __fastcall sub_14000E7B8(__int64 **a1, __int64 *a2)
{
  __int64 *v2; // r8
  __int64 *v3; // r8
  bool v4; // zf

  if ( !a2 )
    sub_14004639C(2147500037LL, 0LL);
  v2 = (__int64 *)*a2;
  if ( a2 == *a1 )
    *a1 = v2;
  else
    *(_QWORD *)a2[1] = v2;
  v3 = (__int64 *)a2[1];
  if ( a2 == a1[1] )
    a1[1] = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  *a2 = (__int64)a1[4];
  a1[4] = a2;
  v4 = a1[2] == (__int64 *)1;
  a1[2] = (__int64 *)((char *)a1[2] - 1);
  if ( v4 )
    sub_14000D9B8((__int64)a1);
}
