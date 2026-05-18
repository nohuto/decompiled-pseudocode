/*
 * XREFs of sub_1800C1B5C @ 0x1800C1B5C
 * Callers:
 *     sub_1800120E0 @ 0x1800120E0 (sub_1800120E0.c)
 *     sub_1800C1FC0 @ 0x1800C1FC0 (sub_1800C1FC0.c)
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180016BD8 @ 0x180016BD8 (sub_180016BD8.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_180028564 @ 0x180028564 (sub_180028564.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_1800BF2BC @ 0x1800BF2BC (sub_1800BF2BC.c)
 *     sub_1800C1AD4 @ 0x1800C1AD4 (sub_1800C1AD4.c)
 *     sub_1800C3038 @ 0x1800C3038 (sub_1800C3038.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800C1B5C(_QWORD *a1, __int64 *a2, __int64 *a3, __int64 *a4, int a5, int a6)
{
  int v10; // r12d
  int v11; // eax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  _QWORD *v19; // rax
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  __int64 v23; // [rsp+20h] [rbp-99h] BYREF
  int v24; // [rsp+28h] [rbp-91h]
  __int64 v25; // [rsp+30h] [rbp-89h] BYREF
  __int64 v26; // [rsp+38h] [rbp-81h]
  __int64 v27; // [rsp+40h] [rbp-79h] BYREF
  __int64 v28; // [rsp+48h] [rbp-71h]
  __int64 *v29; // [rsp+50h] [rbp-69h]
  __int64 *v30; // [rsp+58h] [rbp-61h]
  __int64 *v31; // [rsp+60h] [rbp-59h]
  __int64 v32; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v33[4]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v34; // [rsp+98h] [rbp-21h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-19h]

  v29 = a2;
  v30 = a3;
  v31 = a4;
  v10 = 1;
  v11 = 1;
  if ( a5 )
    v11 = a5;
  v24 = v11;
  if ( a6 )
    v10 = a6;
  sub_180012A94((__int64)(a1 + 9), &v27);
  v12 = sub_180016BD8(v27, &v25);
  sub_180011F5C(a1 + 12, v12);
  if ( v26 )
    sub_180010EC8(v26);
  v13 = sub_180012C40(&v32, a1 + 12);
  sub_18001818C(&v25, v13);
  v23 = *a3;
  sub_180012440(&v23);
  sub_1800C3038(v25, &v23, 0LL);
  if ( *a4 )
  {
    v14 = sub_180016BD8(v27, &v34);
    sub_180011F5C(a1 + 14, v14);
    if ( v35 )
      sub_180010EC8(v35);
    v15 = a1[14];
    v16 = sub_18002912C((__int64)a1, &v34);
    v17 = sub_18001C87C((__int64)v33, (__int64)v16, (__int64)"Staging");
    sub_1800292C4(v15, v17);
    sub_1800129D0((__int64)&v34);
    v18 = sub_180012C40(v33, a1 + 14);
    sub_18001818C(&v34, v18);
    v19 = sub_1800BF2BC(&v23, a4);
    sub_1800C3038(v34, v19, 128LL);
    if ( v35 )
      sub_180010EC8(v35);
  }
  sub_1800C1AD4(a1 + 16, a2);
  v20 = 0LL;
  v20.m128_f32[0] = (float)v24;
  v21 = 0LL;
  v21.m128_f32[0] = (float)v10;
  sub_180028564((__int64)a1, _mm_unpacklo_ps(v20, v21).m128_i64[0]);
  if ( v26 )
    sub_180010EC8(v26);
  if ( v28 )
    sub_180010EC8(v28);
  sub_18000F938(a2);
  sub_18000F938(a3);
  return sub_18000F938(a4);
}
