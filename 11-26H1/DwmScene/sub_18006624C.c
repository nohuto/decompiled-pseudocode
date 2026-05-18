/*
 * XREFs of sub_18006624C @ 0x18006624C
 * Callers:
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001C5B0 @ 0x18001C5B0 (sub_18001C5B0.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18004E184 @ 0x18004E184 (sub_18004E184.c)
 *     sub_18005FC30 @ 0x18005FC30 (sub_18005FC30.c)
 *     sub_180064854 @ 0x180064854 (sub_180064854.c)
 *     sub_18007EAEC @ 0x18007EAEC (sub_18007EAEC.c)
 *     sub_18007EBB8 @ 0x18007EBB8 (sub_18007EBB8.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006624C(const __m128i *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __m128 v6; // xmm6
  int v7; // eax
  char v8; // bl
  int v9; // r15d
  char v10; // si
  int v11; // r13d
  int v12; // r12d
  int v13; // esi
  char v14; // al
  float v15; // xmm11_4
  int v16; // xmm14_4
  float v17; // xmm12_4
  int v18; // xmm13_4
  int v19; // eax
  double v20; // xmm0_8
  double v21; // xmm0_8
  float v22; // xmm7_4
  double v23; // xmm0_8
  float v24; // xmm6_4
  __int64 v25; // rax
  double v26; // xmm0_8
  float v27; // xmm7_4
  double v28; // xmm0_8
  float v29; // xmm6_4
  __int64 v30; // rax
  double v31; // xmm0_8
  double v32; // xmm0_8
  __m128i v33; // xmm6
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __int64 v36; // r8
  __int64 v37; // r8
  __int64 v38; // r8
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v41; // r8
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 result; // rax
  int v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+2Ch] [rbp-DCh]
  int v47; // [rsp+30h] [rbp-D8h]
  unsigned int v48; // [rsp+34h] [rbp-D4h]
  unsigned int v49; // [rsp+38h] [rbp-D0h]
  __m128i si128; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v51; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-A0h]
  float v54; // [rsp+70h] [rbp-98h]
  float v55; // [rsp+74h] [rbp-94h]
  float v56; // [rsp+78h] [rbp-90h]
  int v57; // [rsp+7Ch] [rbp-8Ch]
  float v58; // [rsp+80h] [rbp-88h]
  float v59; // [rsp+84h] [rbp-84h]
  int v60; // [rsp+88h] [rbp-80h]
  float v61; // [rsp+8Ch] [rbp-7Ch]
  __m128 v62; // [rsp+90h] [rbp-78h]
  int v63; // [rsp+178h] [rbp+70h]
  unsigned __int8 v64; // [rsp+178h] [rbp+70h]
  char v65; // [rsp+180h] [rbp+78h]
  char v66; // [rsp+190h] [rbp+88h]

  v5 = sub_180033D14((__int64)a1, a3);
  v48 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_1801C9358, 0LL);
  v49 = sub_18005FC30(v5);
  v65 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C9318, 0LL);
  v66 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C9998, 0LL);
  v6 = (__m128)_mm_loadu_si128(a1 + 92);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  v62 = _mm_mul_ps(
          v6,
          _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v7), (__m128)COERCE_UNSIGNED_INT((float)v7), 0));
  v8 = 1;
  v9 = 0;
  if ( _mm_movemask_ps(_mm_cmpneq_ps((__m128)a1[92], (__m128)xmmword_1800FA7E0)) )
    a1[91].m128i_i8[1] = 1;
  else
    v62.m128_i32[1] = 0;
  v10 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C91F8, 0LL);
  if ( v10
    && (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C9218, 0LL) )
  {
    v46 = 1;
  }
  else
  {
    v46 = 0;
    if ( !v10 )
      goto LABEL_10;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C9238, 0LL) )
  {
LABEL_10:
    v63 = 0;
    if ( !v10 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v63 = 1;
LABEL_11:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C9258, 0LL) )
  {
    v47 = 1;
    goto LABEL_14;
  }
LABEL_13:
  v47 = 0;
  if ( !v10 )
    goto LABEL_16;
LABEL_14:
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C9278, 0LL) )
  {
LABEL_16:
    v11 = 0;
    if ( !v10 )
      goto LABEL_19;
    goto LABEL_17;
  }
  v11 = 1;
LABEL_17:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C9298, 0LL) )
  {
    v12 = 1;
    goto LABEL_20;
  }
LABEL_19:
  v12 = 0;
  if ( !v10 )
  {
LABEL_29:
    v13 = v63;
LABEL_30:
    v14 = 1;
    goto LABEL_31;
  }
LABEL_20:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801C92B8, 0LL) )
    v9 = 1;
  if ( (float)v46 == 0.0 )
    goto LABEL_29;
  v13 = v63;
  if ( (float)v63 == 0.0 || (float)v47 == 0.0 || (float)v11 == 0.0 || (float)v12 == 0.0 || (float)v9 == 0.0 )
    goto LABEL_30;
  v14 = 0;
LABEL_31:
  if ( v49 || v48 != 2 || v14 )
    a1[91].m128i_i8[1] = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191450);
  v51 = si128;
  v15 = 1.0;
  v16 = 0;
  v17 = 1.0;
  v64 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801CBAB8, 0LL);
  v18 = 0;
  v19 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 72LL))(v5, &unk_1801CBAD8, 0LL);
  v45 = v19;
  if ( v64 )
  {
    v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBA98);
    v17 = *(float *)&v20 / 100.0;
    a1[91].m128i_i8[1] = 1;
    v19 = v45;
  }
  if ( v19 )
  {
    if ( v19 == 2 )
      v18 = 1065353216;
    a1[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801CBB58, 0LL) )
  {
    v21 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBB38);
    v22 = *(float *)&v21;
    v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBB18);
    v24 = *(float *)&v23;
    *(float *)&v23 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBAF8);
    v25 = sub_18001C5B0((__int64)&v52, *(float *)&v23, v24, v22);
    si128.m128i_i64[0] = *(_QWORD *)v25;
    si128.m128i_i32[2] = *(_DWORD *)(v25 + 8);
    si128.m128i_i32[3] = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBB78);
    a1[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801CBBF8, 0LL) )
  {
    v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBBD8);
    v27 = *(float *)&v26;
    v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBBB8);
    v29 = *(float *)&v28;
    *(float *)&v28 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBB98);
    v30 = sub_18001C5B0((__int64)&v52, *(float *)&v28, v29, v27);
    v51.m128i_i64[0] = *(_QWORD *)v30;
    v51.m128i_i32[2] = *(_DWORD *)(v30 + 8);
    v51.m128i_i32[3] = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBC18);
    a1[91].m128i_i8[1] = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v5 + 64LL))(v5, &unk_1801CBC58, 0LL) )
  {
    v31 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBC38);
    v15 = *(float *)&v31 / 100.0;
    v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v5 + 88LL))(v5, &unk_1801CBC78);
    v16 = LODWORD(v32);
    a1[91].m128i_i8[1] = 1;
  }
  v33 = *(__m128i *)sub_180064854(si128.m128i_i32, &v52);
  v34 = *(__m128i *)sub_180064854(v51.m128i_i32, &v52);
  v51 = v33;
  si128 = v34;
  v54 = v15;
  v55 = v15;
  v56 = v15;
  v57 = v16;
  v58 = v17;
  v59 = (float)v64;
  v60 = v18;
  v61 = (float)(v45 != 0);
  sub_18004E184(a1[32].m128i_i64[0], &v52);
  v35 = v52;
  sub_18007EBB8(v52, &unk_1801CC658, v48);
  sub_18007EBB8(v35, &unk_1801CC678, v49);
  LOBYTE(v36) = v65;
  sub_18007EAEC(v35, &unk_1801CC698, v36);
  if ( (float)v46 == 0.0 )
    v37 = 0LL;
  else
    LOBYTE(v37) = 1;
  sub_18007EAEC(v35, &unk_1801CC6B8, v37);
  if ( (float)v13 == 0.0 )
    v38 = 0LL;
  else
    LOBYTE(v38) = 1;
  sub_18007EAEC(v35, &unk_1801CC6D8, v38);
  if ( (float)v47 == 0.0 )
    v39 = 0LL;
  else
    LOBYTE(v39) = 1;
  sub_18007EAEC(v35, &unk_1801CC6F8, v39);
  if ( (float)v11 == 0.0 )
    v40 = 0LL;
  else
    LOBYTE(v40) = 1;
  sub_18007EAEC(v35, &unk_1801CC718, v40);
  if ( (float)v12 == 0.0 )
    v41 = 0LL;
  else
    LOBYTE(v41) = 1;
  sub_18007EAEC(v35, &unk_1801CC738, v41);
  if ( (float)v9 == 0.0 )
    v8 = 0;
  LOBYTE(v42) = v8;
  sub_18007EAEC(v35, &unk_1801CC758, v42);
  LOBYTE(v43) = v66;
  sub_18007EAEC(v35, &unk_1801CC818, v43);
  sub_18007F1B0(v35, &unk_1801CC778);
  sub_18007F1B0(v35, &unk_1801CC798);
  sub_18007F1B0(v35, &unk_1801CC7B8);
  sub_18007F1B0(v35, &unk_1801CC7D8);
  result = sub_18007F1B0(v35, &unk_1801CC7F8);
  if ( v53 )
    return sub_180010EC8(v53);
  return result;
}
