/*
 * XREFs of sub_18005AA68 @ 0x18005AA68
 * Callers:
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_180086570 @ 0x180086570 (sub_180086570.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18005664C @ 0x18005664C (sub_18005664C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005AA68(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *v7; // rdx
  _BYTE v9[16]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+40h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-30h] BYREF

  v10 = a2;
  v11 = a4;
  sub_1800181BC(v12, a2);
  v7 = *(_DWORD **)sub_18005664C((__int64 *)(a1 + 1616), (__int64)v9, &v11);
  v7[18] = *a3;
  v7[19] = a3[1];
  v7[20] = a3[2];
  v7[21] = a3[3];
  sub_1800129D0((__int64)v12);
  return sub_1800129D0(a2);
}
