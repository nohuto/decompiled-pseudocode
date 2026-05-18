/*
 * XREFs of sub_18005ABFC @ 0x18005ABFC
 * Callers:
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 */

_QWORD *__fastcall sub_18005ABFC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  sub_18004232C(a1 + 8, &v4);
  sub_1800160E4(a2, (__int64)&v4, v4);
  if ( v5 )
    sub_180010EC8(v5);
  return a2;
}
