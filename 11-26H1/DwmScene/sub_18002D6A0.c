/*
 * XREFs of sub_18002D6A0 @ 0x18002D6A0
 * Callers:
 *     sub_18002D578 @ 0x18002D578 (sub_18002D578.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18002D5DC @ 0x18002D5DC (sub_18002D5DC.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002D6A0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-28h]

  v13 = a3;
  v6 = sub_180013440(&v11, a3);
  sub_1800403B8(a1, &v9, v6);
  v7 = (_QWORD *)sub_18004068C(v9, &v11);
  sub_18002D5DC(a1, a2, v7);
  if ( v12 )
    sub_180010EC8(v12);
  if ( v10 )
    sub_180010EC8(v10);
  return sub_180014244(a3);
}
