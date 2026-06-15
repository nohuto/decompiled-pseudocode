/*
 * XREFs of sub_14000C3C4 @ 0x14000C3C4
 * Callers:
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000F170 @ 0x14000F170 (sub_14000F170.c)
 *     sub_140080A8C @ 0x140080A8C (sub_140080A8C.c)
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_14000D938 @ 0x14000D938 (sub_14000D938.c)
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

__int64 __fastcall sub_14000C3C4(__int64 **a1, __int64 *a2)
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
    return sub_14000D938();
  return result;
}
