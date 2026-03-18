/*
 * XREFs of ?MakeTargetFromSource@CGraphRenderingContext@CExternalEffectGraph@@QEAAIIAEBVMatrix3x2F@D2D1@@@Z @ 0x18001A314
 * Callers:
 *     _CBlurRenderingGraphBuilder::BuildPrescale_::_2_::_lambda_1_::operator() @ 0x1800180A8 (_CBlurRenderingGraphBuilder--BuildPrescale_--_2_--_lambda_1_--operator().c)
 *     _CBlurRenderingGraphBuilder::BuildOnePass_::_2_::_lambda_1_::operator() @ 0x180018B84 (_CBlurRenderingGraphBuilder--BuildOnePass_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     ??0EffectInput@@QEAA@AEBU0@@Z @ 0x180019FEC (--0EffectInput@@QEAA@AEBU0@@Z.c)
 *     ?reserve_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUEffectInput@@_K0@Z @ 0x18001A0DC (-reserve_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expans.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x18008AF40 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalEffectGraph::CGraphRenderingContext::MakeTargetFromSource(
        CExternalEffectGraph::CGraphRenderingContext *this,
        unsigned int a2,
        const struct D2D1::Matrix3x2F *a3)
{
  __m128 v3; // xmm2
  detail::liberal_expansion_policy *v4; // r13
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbx
  char v10; // r15
  __m128i v11; // xmm10
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  __int128 v14; // xmm8
  __int128 v15; // xmm9
  EffectInput *v16; // rax
  CExternalEffectGraph::CGraphRenderingContext *v17; // r14
  __int64 v18; // rbx
  __m128i v19; // xmm8
  int v20; // ecx
  __int32 v21; // xmm9_4
  __m128i v22; // xmm6
  float v23; // xmm15_4
  int v24; // ecx
  int v25; // eax
  float *v26; // rax
  float v27; // xmm15_4
  float v28; // xmm7_4
  float v29; // xmm5_4
  float v30; // xmm3_4
  float v31; // xmm15_4
  float v32; // xmm7_4
  float v33; // xmm13_4
  float v34; // xmm12_4
  float v35; // xmm6_4
  float v36; // xmm4_4
  float v37; // xmm11_4
  float v38; // xmm13_4
  float v39; // xmm10_4
  float v40; // xmm12_4
  float v41; // xmm8_4
  float v42; // xmm6_4
  float v43; // xmm7_4
  float v44; // xmm0_4
  float v45; // xmm4_4
  float v46; // xmm5_4
  float v47; // xmm1_4
  float v48; // xmm13_4
  float v49; // xmm10_4
  float v50; // xmm11_4
  float v51; // xmm12_4
  float v52; // xmm8_4
  float v53; // xmm7_4
  float v54; // xmm0_4
  float v55; // xmm3_4
  float v56; // xmm2_4
  float v57; // xmm3_4
  float v58; // xmm1_4
  float v59; // xmm8_4
  float v60; // xmm7_4
  __int64 v61; // rcx
  __int64 v62; // rax
  float v63; // xmm2_4
  float v64; // xmm9_4
  char v66; // [rsp+28h] [rbp-E0h]
  char v67; // [rsp+29h] [rbp-DFh]
  int v69; // [rsp+30h] [rbp-D8h]
  float v70; // [rsp+30h] [rbp-D8h]
  float v71; // [rsp+30h] [rbp-D8h]
  const struct D2D1::Matrix3x2F *v72; // [rsp+38h] [rbp-D0h] BYREF
  CExternalEffectGraph::CGraphRenderingContext *v73; // [rsp+40h] [rbp-C8h]
  _QWORD v74[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v75[3]; // [rsp+58h] [rbp-B0h]
  _QWORD v76[3]; // [rsp+70h] [rbp-98h]
  __int128 v77; // [rsp+88h] [rbp-80h]
  __int128 v78; // [rsp+98h] [rbp-70h]
  __int128 v79; // [rsp+A8h] [rbp-60h]
  _QWORD v80[2]; // [rsp+B8h] [rbp-50h] BYREF
  char v81; // [rsp+C8h] [rbp-40h]
  __m128i v82; // [rsp+D0h] [rbp-38h]
  int v83; // [rsp+E0h] [rbp-28h]
  char v84; // [rsp+E4h] [rbp-24h]
  char v85; // [rsp+E5h] [rbp-23h]
  __int128 v86; // [rsp+E8h] [rbp-20h]
  __int128 v87; // [rsp+F8h] [rbp-10h]
  __int128 v88; // [rsp+108h] [rbp+0h]
  __int128 v89; // [rsp+118h] [rbp+10h]

  v4 = (CExternalEffectGraph::CGraphRenderingContext *)((char *)this + 48);
  v5 = *((_QWORD *)this + 6);
  v6 = 112LL * a2;
  v7 = 0x6DB6DB6DB6DB6DB7LL * ((*((_QWORD *)this + 7) - v5) >> 4);
  v8 = *(_QWORD *)(v6 + v5);
  v72 = a3;
  v73 = this;
  v74[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *(_QWORD *)(v6 + v5 + 8);
  v74[1] = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *(_BYTE *)(v6 + v5 + 44);
  v66 = *(_BYTE *)(v6 + v5 + 16);
  LOBYTE(v75[0]) = v66;
  v69 = *(_DWORD *)(v6 + v5 + 40);
  LODWORD(v76[0]) = v69;
  v67 = *(_BYTE *)(v6 + v5 + 45);
  BYTE5(v76[0]) = v67;
  BYTE4(v76[0]) = v10;
  v11 = _mm_loadu_si128((const __m128i *)(v6 + v5 + 24));
  v12 = *(_OWORD *)(v6 + v5 + 48);
  *(__m128i *)&v75[1] = v11;
  *(_OWORD *)&v76[1] = v12;
  if ( v10 )
  {
    v13 = *(_OWORD *)(v6 + v5 + 64);
    v14 = *(_OWORD *)(v6 + v5 + 80);
    v15 = *(_OWORD *)(v6 + v5 + 96);
    v77 = v13;
    v78 = v14;
    v79 = v15;
  }
  else
  {
    v15 = v79;
    v14 = v78;
    v13 = v77;
  }
  v80[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v80[1] = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v81 = v66;
  v83 = v69;
  v85 = v67;
  v84 = v10;
  v82 = v11;
  v86 = v12;
  if ( v10 )
  {
    v87 = v13;
    v88 = v14;
    v89 = v15;
  }
  v16 = detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::reserve_region(
          v4,
          (const struct EffectInput *)(0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)v4 + 1) - *(_QWORD *)v4) >> 4)),
          (__int64)a3);
  EffectInput::EffectInput(v16, (const struct EffectInput *)v80);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v80);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v74);
  v17 = v73;
  v18 = *((_QWORD *)v73 + 7);
  v19 = (__m128i)*(unsigned int *)(v18 - 28);
  if ( (_mm_cvtsi128_si32(v19) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3.m128_f32[0] = (float)(int)*(float *)v19.m128i_i32 - *(float *)v19.m128i_i32;
    v3 = _mm_cmple_ss(v3, (__m128)LODWORD(FLOAT_N0_5));
    v20 = (int)*(float *)v19.m128i_i32 - _mm_cvtsi128_si32((__m128i)v3);
  }
  else
  {
    v70 = *(float *)v19.m128i_i32 + 6291456.25;
    v20 = (int)(LODWORD(v70) << 10) >> 11;
  }
  COERCE_FLOAT(v21 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v19.m128i_i32 - (float)v20) & v21) > 0.00390625 )
    v20 = CFloatFPU::FloorSat(*(float *)v19.m128i_i32);
  v22 = (__m128i)*(unsigned int *)(v18 - 24);
  v23 = (float)v20;
  if ( (_mm_cvtsi128_si32(v22) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v3.m128_f32[0] = (float)(int)*(float *)v22.m128i_i32 - *(float *)v22.m128i_i32;
    v24 = (int)*(float *)v22.m128i_i32 - _mm_cvtsi128_si32((__m128i)_mm_cmple_ss(v3, (__m128)LODWORD(FLOAT_N0_5)));
  }
  else
  {
    v71 = *(float *)v22.m128i_i32 + 6291456.25;
    v24 = (int)(LODWORD(v71) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v22.m128i_i32 - (float)v24) & v21) > 0.00390625 )
  {
    v25 = CFloatFPU::FloorSat(*(float *)v22.m128i_i32);
    v21 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v24 = v25;
  }
  v26 = (float *)v72;
  LODWORD(v27) = LODWORD(v23) ^ _xmm;
  LODWORD(v28) = COERCE_UNSIGNED_INT((float)v24) ^ _xmm;
  v29 = v27 + *(float *)v19.m128i_i32;
  v30 = v28 + *(float *)v22.m128i_i32;
  *(float *)(v18 - 28) = v27 + *(float *)v19.m128i_i32;
  *(float *)(v18 - 24) = v28 + *(float *)v22.m128i_i32;
  v31 = v27 + *(float *)(v18 - 20);
  *(float *)(v18 - 20) = v31;
  v32 = v28 + *(float *)(v18 - 16);
  *(float *)(v18 - 16) = v32;
  v33 = (float)((float)(v26[2] * v30) + (float)(*v26 * v29)) + v26[4];
  v34 = (float)((float)(v26[3] * v30) + (float)(v26[1] * v29)) + v26[5];
  v35 = (float)((float)(v26[2] * v32) + (float)(*v26 * v31)) + v26[4];
  v36 = (float)((float)(v26[3] * v32) + (float)(v26[1] * v31)) + v26[5];
  v37 = fminf(v33, v35);
  v38 = fmaxf(v33, v35);
  v39 = fminf(v34, v36);
  v40 = fmaxf(v34, v36);
  if ( COERCE_FLOAT(LODWORD(v37) & v21) >= 8388608.0 )
    v41 = v37;
  else
    v41 = (float)(int)floorf_0(v37);
  v42 = ceilf_0(v38);
  if ( COERCE_FLOAT(LODWORD(v39) & _xmm) >= 8388608.0 )
    v43 = v39;
  else
    v43 = (float)(int)floorf_0(v39);
  v44 = ceilf_0(v40);
  v45 = v44;
  if ( v41 == v42 )
    v42 = v42 + 1.0;
  if ( v43 == v44 )
    v45 = v44 + 1.0;
  *(float *)(v18 - 24) = COERCE_FLOAT(LODWORD(v43) ^ _xmm) + v39;
  *(float *)(v18 - 28) = COERCE_FLOAT(LODWORD(v41) ^ _xmm) + v37;
  *(float *)(v18 - 20) = COERCE_FLOAT(LODWORD(v41) ^ _xmm) + v38;
  *(float *)(v18 - 16) = COERCE_FLOAT(LODWORD(v43) ^ _xmm) + v40;
  *((float *)v17 + 10) = v42 - v41;
  *((float *)v17 + 11) = v45 - v43;
  v46 = *(float *)(v6 + v5 + 84);
  v47 = *(float *)(v18 - 28);
  if ( v47 == v46
    && *(float *)(v18 - 24) == *(float *)(v6 + v5 + 88)
    && *(float *)(v18 - 20) == *(float *)(v6 + v5 + 92)
    && *(float *)(v18 - 16) == *(float *)(v6 + v5 + 96) )
  {
    v48 = FLOAT_1_0;
    v49 = 0.0;
    v50 = 0.0;
    v51 = FLOAT_1_0;
    v52 = 0.0;
    v53 = 0.0;
  }
  else
  {
    v54 = *(float *)(v18 - 20) - v47;
    if ( v54 == 0.0 || (v55 = *(float *)(v18 - 24), v56 = *(float *)(v18 - 16) - v55, v56 == 0.0) )
    {
      v48 = *(float *)&a2;
      v49 = *(float *)&a2;
      v50 = *(float *)&a2;
      v51 = *(float *)&a2;
      v52 = *(float *)&a2;
      v53 = *(float *)&a2;
    }
    else
    {
      LODWORD(v57) = LODWORD(v55) ^ _xmm;
      LODWORD(v58) = LODWORD(v47) ^ _xmm;
      v59 = (float)(*(float *)(v6 + v5 + 92) - v46) / v54;
      v60 = (float)(*(float *)(v6 + v5 + 96) - *(float *)(v6 + v5 + 88)) / v56;
      v48 = v59 + 0.0;
      v51 = v60 + 0.0;
      v49 = (float)(v60 * 0.0) + 0.0;
      v50 = (float)(v59 * 0.0) + 0.0;
      v53 = (float)((float)(v60 * v57) + (float)(v58 * 0.0)) + *(float *)(v6 + v5 + 88);
      v52 = (float)((float)(v59 * v58) + (float)(v57 * 0.0)) + v46;
    }
  }
  v61 = *(_QWORD *)(v6 + v5 + 8);
  v62 = 0LL;
  if ( v61 )
    v62 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, const struct D2D1::Matrix3x2F **))(*(_QWORD *)v61 + 32LL))(
                       v61,
                       &v72);
  *(_DWORD *)(v6 + v5 + 56) = 0;
  *(_DWORD *)(v6 + v5 + 68) = 0;
  *(_DWORD *)(v6 + v5 + 80) = 1065353216;
  v63 = 1.0 / (float)(int)v62;
  v64 = 1.0 / (float)SHIDWORD(v62);
  *(float *)(v6 + v5 + 48) = (float)(v48 * v63) + (float)(v49 * 0.0);
  *(float *)(v6 + v5 + 52) = (float)(v49 * v64) + (float)(v48 * 0.0);
  *(float *)(v6 + v5 + 60) = (float)(v50 * v63) + (float)(v51 * 0.0);
  *(float *)(v6 + v5 + 64) = (float)(v51 * v64) + (float)(v50 * 0.0);
  *(float *)(v6 + v5 + 72) = (float)((float)(v52 * v63) + (float)(v53 * 0.0)) + (float)(0.0 - (float)(v63 * 0.0));
  *(float *)(v6 + v5 + 76) = (float)((float)(v53 * v64) + (float)(v52 * 0.0)) + (float)(0.0 - (float)(v64 * 0.0));
  *((_DWORD *)v17 + 8) = a2;
  return (unsigned int)v7;
}
