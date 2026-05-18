/*
 * XREFs of sub_18006E9F0 @ 0x18006E9F0
 * Callers:
 *     sub_1800577E0 @ 0x1800577E0 (sub_1800577E0.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_18006F16C @ 0x18006F16C (sub_18006F16C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180024998 @ 0x180024998 (sub_180024998.c)
 *     sub_18006B170 @ 0x18006B170 (sub_18006B170.c)
 *     sub_18006E940 @ 0x18006E940 (sub_18006E940.c)
 */

_QWORD *__fastcall sub_18006E9F0(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rbp
  __int64 **v6; // rdi
  __int64 *v7; // rax
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __int64 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]
  _QWORD *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = a2;
  v3 = a3;
  v6 = (__int64 **)(a1 + 16 * (a3 + 11LL));
  if ( !*v6 )
  {
    v7 = sub_180024998(*(_QWORD **)(*(_QWORD *)(a1 + 32) + 3984LL), &v11);
    sub_180011F5C(v6, v7);
    if ( v12 )
      sub_180010EC8(v12);
    v8 = 0LL;
    v9 = 0LL;
    v8.m128_f32[0] = (float)*(int *)(a1 + 8) / flt_180106E18[v3];
    v9.m128_f32[0] = (float)*(int *)(a1 + 12) / flt_180106E18[v3];
    sub_18006E940((int *)&v13, _mm_unpacklo_ps(v8, v9).m128_i64[0]);
    sub_18006B170(*v6, (unsigned int)v13, HIDWORD(v13), 1u, 0, *(_QWORD *)(a1 + 32));
  }
  sub_180012C40(a2, v6);
  return a2;
}
