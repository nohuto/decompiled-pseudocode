/*
 * XREFs of sub_180036EBC @ 0x180036EBC
 * Callers:
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012B20 @ 0x180012B20 (sub_180012B20.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_180024D18 @ 0x180024D18 (sub_180024D18.c)
 *     sub_180031F38 @ 0x180031F38 (sub_180031F38.c)
 *     sub_18003268C @ 0x18003268C (sub_18003268C.c)
 *     sub_180033D5C @ 0x180033D5C (sub_180033D5C.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180036EBC(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm1_4
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-40h] BYREF

  sub_180033D5C(a1, &v8);
  v2 = v8;
  v3 = *(_QWORD *)(v8 + 24);
  v4 = sub_180012B20(&v10);
  v5 = sub_180024D18(*v4 - v3);
  v6 = *(_QWORD *)(v2 + 280);
  if ( *(_QWORD *)(v2 + 272) == v6 )
    v7 = -3.4028235e38;
  else
    v7 = *(float *)(v6 - 4);
  sub_18001E58C((__int64)v11, (__int64)L"CPU");
  sub_180031F38(a1 + 1392, (__int64)v11);
  sub_180014244((__int64)v11);
  sub_18003268C(a1 + 1368, v5 - v7);
  if ( v9 )
    sub_180010EC8(v9);
}
