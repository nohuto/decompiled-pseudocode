/*
 * XREFs of sub_180063E40 @ 0x180063E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18005A88C @ 0x18005A88C (sub_18005A88C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180063E40(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rdi
  double v8; // xmm0_8
  unsigned int v9; // xmm8_4
  double v10; // xmm0_8
  unsigned int v11; // xmm7_4
  double v12; // xmm0_8
  unsigned int v13; // xmm6_4
  __m128 v14; // xmm2
  _DWORD *v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  double v18; // xmm0_8
  __int64 v19; // rbx
  double v20; // xmm0_8
  int v21; // xmm6_4
  __m128 v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+48h] [rbp-38h]

  sub_180012A94(*a2 + 56, &v22);
  sub_18001367C(v22.m128_i64[0], &v23);
  if ( v22.m128_u64[1] )
    sub_180010EC8(v22.m128_i64[1]);
  v7 = sub_180033D14(a1, *(_DWORD *)(v23 + 112));
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C91D8, 0LL) )
  {
    v8 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9158);
    v9 = LODWORD(v8);
    v10 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9178);
    v11 = LODWORD(v10);
    v12 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9198);
    v13 = LODWORD(v12);
    *(float *)&v12 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C91B8);
    v22.m128_u64[0] = __PAIR64__(v11, v9);
    v22.m128_u64[1] = __PAIR64__(LODWORD(v12), v13);
    v14 = _mm_mul_ps(
            _mm_or_ps(
              _mm_and_ps(_mm_shuffle_ps(v22, v22, 255), (__m128)xmmword_1800FA1C0),
              _mm_andnot_ps((__m128)xmmword_1800FA1C0, (__m128)xmmword_1800FA2E0)),
            v22);
    v15 = (_DWORD *)*a2;
    v15[74] = v14.m128_i32[0];
    v15[75] = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
    v15[76] = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
    v15[77] = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
  }
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, __m128 *))(*(_QWORD *)*a4 + 8LL))(*a4, &v22) == 2 )
  {
    v16 = *a2;
    *(_QWORD *)(v16 + 296) = 0LL;
    *(_QWORD *)(v16 + 304) = 0LL;
  }
  v17 = *(_DWORD *)(*a2 + 440);
  if ( (v17 & 0x100) != 0 )
  {
    if ( (v17 & 0x2000000) != 0 )
    {
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801CB5B8);
      sub_18005A88C(*a2, *(float *)&v18);
    }
    v19 = *a2;
    v20 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 112LL))(*a4);
    v21 = LODWORD(v20);
    *(float *)&v20 = (*(float (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 120LL))(*a4);
    *(_DWORD *)(v19 + 364) = v21;
    *(_DWORD *)(v19 + 368) = LODWORD(v20);
  }
  if ( v24 )
    sub_180010EC8(v24);
}
