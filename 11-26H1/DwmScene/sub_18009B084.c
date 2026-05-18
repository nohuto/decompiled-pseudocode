/*
 * XREFs of sub_18009B084 @ 0x18009B084
 * Callers:
 *     sub_180098AFC @ 0x180098AFC (sub_180098AFC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180098508 @ 0x180098508 (sub_180098508.c)
 *     sub_180099990 @ 0x180099990 (sub_180099990.c)
 *     sub_180099E4C @ 0x180099E4C (sub_180099E4C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18009B084(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  _BYTE v12[16]; // [rsp+30h] [rbp-1F8h] BYREF
  _QWORD *v13; // [rsp+40h] [rbp-1E8h]
  __int64 v14; // [rsp+48h] [rbp-1E0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-1D0h] BYREF
  _QWORD v16[51]; // [rsp+68h] [rbp-1C0h] BYREF

  v16[50] = a2;
  v13 = a3;
  sub_180012C40(&v14, (_QWORD *)(a1 + 896));
  v6 = sub_180012C40(&v15, a3);
  v9 = sub_180099E4C((__int64)v16, 0, v6, v8, v7);
  sub_180099990((__int64 *)(a1 + 880), (__int64)v12, a2, v9);
  sub_180098508(v16);
  result = sub_1800129D0(a2);
  v11 = a3[1];
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}
