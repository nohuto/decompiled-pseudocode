/*
 * XREFs of sub_180075D94 @ 0x180075D94
 * Callers:
 *     sub_18009CECC @ 0x18009CECC (sub_18009CECC.c)
 *     sub_18009EC54 @ 0x18009EC54 (sub_18009EC54.c)
 *     sub_18009F158 @ 0x18009F158 (sub_18009F158.c)
 *     sub_1800A6608 @ 0x1800A6608 (sub_1800A6608.c)
 *     sub_1800A687C @ 0x1800A687C (sub_1800A687C.c)
 *     sub_1800A6B44 @ 0x1800A6B44 (sub_1800A6B44.c)
 *     sub_1800A8AAC @ 0x1800A8AAC (sub_1800A8AAC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_180075850 @ 0x180075850 (sub_180075850.c)
 *     sub_180075B8C @ 0x180075B8C (sub_180075B8C.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_180075D94(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v6; // [rsp+20h] [rbp-68h]
  __int64 v7; // [rsp+28h] [rbp-60h] BYREF
  __int64 v8; // [rsp+30h] [rbp-58h]
  _BYTE v9[16]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v10[5]; // [rsp+48h] [rbp-40h] BYREF

  v10[4] = a1;
  sub_180075B8C(&v7, *(_DWORD *)(a2 + 20));
  v6 = sub_1800181BC(v10, a1);
  v4 = *(_QWORD *)sub_180075850((__int64 *)(v7 + 16), (__int64)v9, (__int64)v6);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 16);
  sub_1800129D0((__int64)v6);
  if ( v8 )
    sub_180010EC8(v8);
  sub_1800129D0(a1);
  return 1;
}
