/*
 * XREFs of sub_18008DF20 @ 0x18008DF20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001205C @ 0x18001205C (sub_18001205C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_1800434E4 @ 0x1800434E4 (sub_1800434E4.c)
 *     sub_18004357C @ 0x18004357C (sub_18004357C.c)
 *     sub_1800435A4 @ 0x1800435A4 (sub_1800435A4.c)
 *     sub_18004A294 @ 0x18004A294 (sub_18004A294.c)
 *     sub_18004B290 @ 0x18004B290 (sub_18004B290.c)
 *     sub_18005A750 @ 0x18005A750 (sub_18005A750.c)
 *     sub_18005A8BC @ 0x18005A8BC (sub_18005A8BC.c)
 *     sub_18007EDAC @ 0x18007EDAC (sub_18007EDAC.c)
 *     sub_18007EFAC @ 0x18007EFAC (sub_18007EFAC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008DF20(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, __int128 *a5)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // r8
  int v12; // r8d
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r9
  __int64 v16; // rdi
  void (__fastcall *v17)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v18; // rax
  __m128 v19; // xmm0
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ebx
  __int64 *v23; // rax
  __m128i v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rdi
  void (__fastcall *v27)(__int64, __int64, __int64, __int64, _QWORD *); // rbx
  __int64 v28; // rax
  _DWORD *v29; // rax
  __int64 result; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int128 v33; // [rsp+38h] [rbp-61h] BYREF
  __int64 v34; // [rsp+48h] [rbp-51h]
  __int64 v35; // [rsp+50h] [rbp-49h]
  __int64 v36; // [rsp+58h] [rbp-41h]
  __int128 *v37; // [rsp+60h] [rbp-39h]
  __int64 v38; // [rsp+68h] [rbp-31h]
  _QWORD v39[4]; // [rsp+70h] [rbp-29h] BYREF

  v36 = a3;
  v35 = a2;
  v37 = a4;
  v38 = (__int64)a5;
  v7 = sub_180012C40(&v33, (_QWORD *)(a1 + 232));
  sub_18005A8BC(v8, v7);
  v33 = 0LL;
  sub_18005A750(*(_QWORD *)(a1 + 24), (__int64 *)&v33);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v9 = (__int64 *)(a1 + 72);
  v10 = sub_180012C40(&v33, (_QWORD *)(a1 + 248));
  sub_18004B290(v11, v10);
  sub_18004357C(*(_QWORD *)(a1 + 248), -1LL, 0);
  sub_1800435A4(*(_QWORD *)(a1 + 248), 0, v12, v12 + 2);
  v13 = *(_QWORD *)(a1 + 200);
  v33 = *a5;
  *(_QWORD *)a5 = 0LL;
  *((_QWORD *)a5 + 1) = 0LL;
  sub_18007EDAC(v13, (__int64)&unk_1801CCFB8, &v33);
  v14 = sub_180012C40(&v33, (_QWORD *)(a1 + 40));
  sub_18007EFAC(v15, (__int64)&unk_1801CCFB8, v14);
  v16 = *(_QWORD *)(a1 + 24);
  v17 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v16 + 208LL);
  sub_180011CC4(v39, "Bloom Phase 1");
  v34 = v35 + 8;
  v18 = sub_180012BF8(v35 + 8, &v33);
  v17(v16, v18, v36, a1 + 72, v39);
  if ( *((_QWORD *)&v33 + 1) )
    sub_180010EC8(*((__int64 *)&v33 + 1));
  sub_1800129D0((__int64)v39);
  v19 = (__m128)*(unsigned int *)(a1 + 280);
  v19.m128_f32[0] = sub_18001205C(v19.m128_f32[0], 0.0, 1.0);
  v20 = *(_QWORD *)(a1 + 200);
  v33 = *a4;
  *(_QWORD *)a4 = 0LL;
  *((_QWORD *)a4 + 1) = 0LL;
  sub_18007EDAC(v20, (__int64)&unk_1801CCFB8, &v33);
  sub_1800434E4(*(_QWORD *)(a1 + 248), (__int64)&unk_1801CD218, 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 24) + 465LL) &= 0xF8u;
  v21 = sub_180033D14(*(_QWORD *)(v35 + 3984), 1);
  v22 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v21 + 72LL))(v21, &unk_1801CAAB8, 14LL);
  v23 = (__int64 *)sub_18004A294(*v9, (__int64)&v33);
  sub_1800435A4(*v23, v22, 0, 2);
  if ( *((_QWORD *)&v33 + 1) )
    sub_180010EC8(*((__int64 *)&v33 + 1));
  v24 = (__m128i)_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), (__m128)xmmword_1800FA7E0);
  *(_QWORD *)&v33 = v24.m128i_i64[0];
  v24.m128i_i64[0] = _mm_srli_si128(v24, 8).m128i_u64[0];
  *((_QWORD *)&v33 + 1) = v24.m128i_i64[0];
  v25 = *v9;
  *(_QWORD *)(v25 + 172) = v33;
  *(_DWORD *)(v25 + 180) = v24.m128i_i32[0];
  *(_DWORD *)(v25 + 184) = HIDWORD(v33);
  v26 = *(_QWORD *)(a1 + 24);
  v27 = *(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD *))(*(_QWORD *)v26 + 208LL);
  sub_180011CC4(v39, "Bloom Scene Overlay");
  v28 = sub_180012BF8(v34, &v33);
  v27(v26, v28, v36, a1 + 72, v39);
  if ( *((_QWORD *)&v33 + 1) )
    sub_180010EC8(*((__int64 *)&v33 + 1));
  sub_1800129D0((__int64)v39);
  v29 = (_DWORD *)*v9;
  v29[43] = 1065353216;
  v29[44] = 1065353216;
  v29[45] = 1065353216;
  v29[46] = 1065353216;
  v33 = 0LL;
  result = sub_18007EDAC(*(_QWORD *)(a1 + 200), (__int64)&unk_1801CCFB8, &v33);
  v31 = *((_QWORD *)a4 + 1);
  if ( v31 )
    result = sub_180010EC8(v31);
  v32 = *((_QWORD *)a5 + 1);
  if ( v32 )
    return sub_180010EC8(v32);
  return result;
}
