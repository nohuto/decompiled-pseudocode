/*
 * XREFs of ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEBAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18003A4A4
 * Callers:
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 * Callees:
 *     ?Alloc@?$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z @ 0x18003AEBC (-Alloc@-$CThreadLocalObjectCache@VCSurfaceDrawListBrush@@V1@@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechnique::CreateSurfaceDrawListBrushForIntermediate(
        CRenderingTechnique *this,
        unsigned int a2,
        const struct EffectInput *a3,
        struct CSurfaceDrawListBrush **a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdx
  char v8; // bp
  char v9; // r14
  char v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  float v15; // xmm7_4
  __m128 v16; // xmm6
  float v17; // xmm0_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm0_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm0_4
  __int64 v25; // rcx
  __int64 result; // rax
  unsigned int v27; // [rsp+20h] [rbp-88h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  char v29; // [rsp+B0h] [rbp+8h] BYREF

  v4 = 0LL;
  v7 = 44LL * a2;
  v8 = *((_BYTE *)this + v7 + 88);
  v9 = *((_BYTE *)this + v7 + 89);
  if ( !v8 )
  {
    v8 = 1;
    v9 = 1;
  }
  v10 = *((_BYTE *)a3 + 104);
  v11 = CThreadLocalObjectCache<CSurfaceDrawListBrush,CSurfaceDrawListBrush>::Alloc();
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)(v11 + 8) = 1065353216LL;
    *(_DWORD *)(v11 + 16) = 0;
    *(_QWORD *)(v11 + 20) = 1065353216LL;
    *(_DWORD *)(v11 + 28) = 0;
    *(_BYTE *)(v11 + 52) = 0;
    *(_QWORD *)v11 = &CSurfaceDrawListBrush::`vftable';
    v13 = *(_QWORD *)a3;
    *(_QWORD *)(v11 + 56) = *(_QWORD *)a3;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = *((_QWORD *)a3 + 1);
    *(_QWORD *)(v12 + 64) = v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    *(_BYTE *)(v12 + 72) = *((_BYTE *)a3 + 16);
    *(_BYTE *)(v12 + 80) = v10;
    *(_BYTE *)(v12 + 81) = v8;
    *(_BYTE *)(v12 + 82) = v9;
    *(_DWORD *)(v12 + 84) = *((_DWORD *)a3 + 12);
    *(_DWORD *)(v12 + 88) = *((_DWORD *)a3 + 13);
    *(_DWORD *)(v12 + 92) = *((_DWORD *)a3 + 14);
    *(_DWORD *)(v12 + 96) = *((_DWORD *)a3 + 15);
    *(_DWORD *)(v12 + 100) = *((_DWORD *)a3 + 16);
    *(_DWORD *)(v12 + 104) = *((_DWORD *)a3 + 17);
    *(_DWORD *)(v12 + 108) = *((_DWORD *)a3 + 18);
    *(_DWORD *)(v12 + 112) = *((_DWORD *)a3 + 19);
    *(_DWORD *)(v12 + 116) = *((_DWORD *)a3 + 20);
    *(_DWORD *)(v12 + 144) = 0;
    *(struct D2D_RECT_F *)(v12 + 120) = CSurfaceDrawListBrush::k_rcfBoundless;
    if ( v10 )
    {
      v15 = *((float *)a3 + 21);
      v16.m128_f32[0] = v15;
      v17 = floorf_0(v15);
      if ( (float)(v15 - v17) < 0.5 )
        v16.m128_f32[0] = v17 + 0.5;
      v18 = *((float *)a3 + 23);
      v19 = v18;
      v20 = ceilf_0(v18);
      if ( (float)(v20 - v18) < 0.5 )
        v19 = v20 - 0.5;
      if ( v16.m128_f32[0] > v19 )
      {
        v16.m128_f32[0] = (float)(v15 + v18) * 0.5;
        v19 = v16.m128_f32[0];
      }
      v21 = *((float *)a3 + 22);
      v22 = floorf_0(v21);
      if ( (float)(v21 - v22) < 0.5 )
        v21 = v22 + 0.5;
      v23 = *((float *)a3 + 24);
      v24 = ceilf_0(v23);
      if ( (float)(v24 - v23) < 0.5 )
        v23 = v24 - 0.5;
      if ( v21 > v23 )
      {
        v21 = (float)(*((float *)a3 + 22) + *((float *)a3 + 24)) * 0.5;
        v23 = v21;
      }
    }
    else
    {
      v16 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a3 + 84));
      LODWORD(v23) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
      LODWORD(v19) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
      LODWORD(v21) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
    }
    v25 = *((_QWORD *)a3 + 1);
    if ( v25 )
      v4 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v25 + 32LL))(v25, &v29);
    result = 0LL;
    *(float *)(v12 + 120) = v16.m128_f32[0] / (float)(int)v4;
    *(float *)(v12 + 124) = v21 / (float)SHIDWORD(v4);
    *(float *)(v12 + 128) = v19 / (float)(int)v4;
    *(float *)(v12 + 132) = v23 / (float)SHIDWORD(v4);
    *(_BYTE *)(v12 + 145) = 1;
    *a4 = (struct CSurfaceDrawListBrush *)v12;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x3Au, 0LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\renderingtechnique.cpp",
      (const char *)0x8007000ELL,
      v27);
    return 2147942414LL;
  }
  return result;
}
