/*
 * XREFs of sub_180067CF0 @ 0x180067CF0
 * Callers:
 *     sub_180061970 @ 0x180061970 (sub_180061970.c)
 *     sub_180064320 @ 0x180064320 (sub_180064320.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180013E60 @ 0x180013E60 (sub_180013E60.c)
 *     sub_180014E04 @ 0x180014E04 (sub_180014E04.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18003B394 @ 0x18003B394 (sub_18003B394.c)
 *     sub_18003CD04 @ 0x18003CD04 (sub_18003CD04.c)
 *     sub_18003CD7C @ 0x18003CD7C (sub_18003CD7C.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 *     sub_180041DBC @ 0x180041DBC (sub_180041DBC.c)
 *     sub_18006382C @ 0x18006382C (sub_18006382C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int8 __fastcall sub_180067CF0(__int64 a1, __int64 *a2, char a3)
{
  __m128 v3; // xmm0
  __int64 v7; // rbx
  unsigned __int8 result; // al
  __m128 v9; // xmm11
  __int64 v10; // r8
  char v11; // al
  char v12; // r15
  __m128 v13; // xmm12
  __m128 v14; // xmm13
  double v15; // xmm0_8
  unsigned __int32 v16; // xmm6_4
  double v17; // xmm0_8
  unsigned int v18; // xmm8_4
  double v19; // xmm0_8
  unsigned int v20; // xmm9_4
  double v21; // xmm0_8
  unsigned __int32 v22; // xmm10_4
  __int64 v23; // rcx
  __int64 v24; // rbx
  __m128 v25; // xmm6
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  __m128 v29; // xmm2
  unsigned __int64 v30; // [rsp+28h] [rbp-79h] BYREF
  unsigned __int32 v31; // [rsp+30h] [rbp-71h]
  __int64 v32; // [rsp+38h] [rbp-69h]
  unsigned int v33; // [rsp+40h] [rbp-61h]
  __int64 v34; // [rsp+48h] [rbp-59h] BYREF
  __int64 v35; // [rsp+50h] [rbp-51h]
  __int64 v36; // [rsp+58h] [rbp-49h] BYREF
  __int128 v37; // [rsp+60h] [rbp-41h]

  v7 = sub_180033D14(a1, *(_DWORD *)(*a2 + 112));
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9A38, 0LL);
  if ( result )
  {
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9A18);
    v9 = v3;
    LOBYTE(v10) = 1;
    (*(void (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, &unk_1801C9A58, v10);
    v12 = v11;
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9A78);
    v13 = v3;
    *(double *)v3.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9A98);
    v14 = v3;
    v15 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9AB8);
    v16 = LODWORD(v15);
    v17 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9AD8);
    v18 = LODWORD(v17);
    v19 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9AF8);
    v20 = LODWORD(v19);
    v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9B18);
    v22 = LODWORD(v21);
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_1801C9B38);
    result = (unsigned __int8)sub_18006382C(v23, &v36, a2);
    v24 = v36;
    if ( v36 )
    {
      if ( a3 || sub_180041DBC(a1 + 1467) )
      {
        v31 = v16;
        v25 = 0LL;
        v33 = 0;
        if ( v12 )
        {
          sub_180014E04(v24, &v34);
          if ( v34 )
          {
            v25 = (__m128)*(unsigned int *)(v34 + 104);
            v25.m128_f32[0] = v25.m128_f32[0] + 0.0;
          }
          if ( v35 )
            sub_180010EC8(v35);
        }
        v26 = 0LL;
        v26.m128_u64[0] = _mm_unpacklo_ps(v13, v14).m128_u64[0];
        v27 = 0LL;
        v27.m128_u64[0] = _mm_unpacklo_ps((__m128)0LL, v25).m128_u64[0];
        v32 = 0LL;
        v28 = _mm_add_ps(_mm_movelh_ps(v26, (__m128)v31), _mm_movelh_ps(v27, (__m128)v33));
        v30 = v28.m128_u64[0];
        v31 = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
        sub_180013E60(v24, &v30);
        if ( a3 )
          goto LABEL_19;
      }
      if ( sub_180041DBC(a1 + 1468) )
      {
LABEL_19:
        v30 = __PAIR64__(v20, v18);
        v31 = v22;
        sub_18003B394((__int64)&v34, &v30);
        sub_18003CD04(v24, &v34);
        if ( a3 )
          goto LABEL_14;
      }
      result = sub_180041DBC(a1 + 1466);
      if ( result )
      {
LABEL_14:
        sub_18003D718(v24);
        v33 = *(_DWORD *)(v24 + 180);
        v29 = _mm_mul_ps(
                _mm_movelh_ps((__m128)*(unsigned __int64 *)(v24 + 172), (__m128)v33),
                _mm_shuffle_ps(v9, v9, 0));
        v32 = 0LL;
        v30 = v29.m128_u64[0];
        v31 = _mm_shuffle_ps(v29, v29, 170).m128_u32[0];
        result = sub_18003CD7C(v24, &v30);
      }
    }
    if ( (_QWORD)v37 )
      return sub_180010EC8(v37);
  }
  return result;
}
