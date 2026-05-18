/*
 * XREFs of sub_180099888 @ 0x180099888
 * Callers:
 *     sub_1800597B4 @ 0x1800597B4 (sub_1800597B4.c)
 *     sub_180059AA0 @ 0x180059AA0 (sub_180059AA0.c)
 *     sub_18006EC64 @ 0x18006EC64 (sub_18006EC64.c)
 *     sub_18006F058 @ 0x18006F058 (sub_18006F058.c)
 *     sub_18008F8D0 @ 0x18008F8D0 (sub_18008F8D0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180031F70 @ 0x180031F70 (sub_180031F70.c)
 *     sub_1800382B8 @ 0x1800382B8 (sub_1800382B8.c)
 *     sub_180038C7C @ 0x180038C7C (sub_180038C7C.c)
 *     sub_180098778 @ 0x180098778 (sub_180098778.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180099888(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int32 *v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+40h] [rbp-18h] BYREF
  volatile signed __int32 *v11; // [rsp+48h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = sub_180038C7C(*a2, &v8);
  sub_1800382B8((__int64)v3, &v6);
  if ( v9 )
    sub_180010F00(v9);
  if ( v6 )
  {
    v4 = sub_180098778(v6, &v10);
    sub_180031F70(a1, v4);
    if ( v11 )
      sub_180010F00(v11);
  }
  if ( v7 )
    sub_180010EC8(v7);
  return a1;
}
