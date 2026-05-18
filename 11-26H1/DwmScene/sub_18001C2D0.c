/*
 * XREFs of sub_18001C2D0 @ 0x18001C2D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180040308 @ 0x180040308 (sub_180040308.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001C2D0(__int64 a1, float *a2, float *a3)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  float *v8; // rax
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  _BYTE v14[16]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  sub_180029C50(*(_QWORD *)(a1 + 16) + 16LL, v14);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = sub_180013440(v15, (__int64)&unk_1801C9038);
  v8 = (float *)sub_180040308(v6, v7);
  v9 = v8[2] - v8[5];
  v10 = v8[1] - v8[4];
  *a2 = *v8 - v8[3];
  a2[1] = v10;
  a2[2] = v9;
  v11 = v8[5] + v8[2];
  v12 = v8[1] + v8[4];
  *a3 = v8[3] + *v8;
  a3[1] = v12;
  a3[2] = v11;
  return sub_180011E54((__int64)v14);
}
