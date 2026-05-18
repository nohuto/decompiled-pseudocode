/*
 * XREFs of sub_18006EAE0 @ 0x18006EAE0
 * Callers:
 *     sub_1800577E0 @ 0x1800577E0 (sub_1800577E0.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800116C8 @ 0x1800116C8 (sub_1800116C8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180027EC8 @ 0x180027EC8 (sub_180027EC8.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_18006E940 @ 0x18006E940 (sub_18006E940.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18006EAE0(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v5; // rbx
  __int64 *v6; // rsi
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rax
  int v14[4]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  __int64 v16; // [rsp+48h] [rbp-61h]
  _QWORD v17[4]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v18[32]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v19[32]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v20[4]; // [rsp+B0h] [rbp+7h] BYREF

  *(_QWORD *)v14 = a2;
  v5 = a3;
  v6 = (__int64 *)(a1 + 16 * (a3 + 5LL));
  if ( !*v6 )
  {
    sub_1800116C8(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 3984LL), &v15);
    sub_180011F5C(v6, &v15);
    if ( v16 )
      sub_180010EC8(v16);
    v7 = 0LL;
    v7.m128_f32[0] = (float)*(int *)(a1 + 8) / flt_180106E18[v5];
    v8 = 0LL;
    v8.m128_f32[0] = (float)*(int *)(a1 + 12) / flt_180106E18[v5];
    sub_18006E940(v14, _mm_unpacklo_ps(v7, v8).m128_i64[0]);
    v9 = sub_180028AE4(v20, (int)flt_180106E18[v5]);
    v10 = sub_18001C928((__int64)v19, (__int64)"ImageProcessing Scaled ", v9);
    sub_18001C87C((__int64)v18, v10, (__int64)"x");
    sub_1800129D0((__int64)v19);
    sub_1800129D0((__int64)v20);
    v11 = *v6;
    v12 = sub_1800181BC(v17, (__int64)v18);
    sub_1800292C4(v11, (__int64)v12);
    sub_180027EC8(*v6, v14[0], v14[1], *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 28) & 0xFFFFFFBF, *(_QWORD *)(a1 + 32));
    sub_1800129D0((__int64)v18);
  }
  sub_180012C40(a2, v6);
  return a2;
}
