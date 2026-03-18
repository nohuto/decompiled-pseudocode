/*
 * XREFs of ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x18007B1C0
 * Callers:
 *     ?Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x18006E21C (-Render@CDrawListEntry@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z @ 0x1800757E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUD2D_RECT_F@@QEAUD2D_POINT_2F@@@Z.c)
 *     ?RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix@@PEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18007B830 (-RetrieveCurrentLightBufferForContextNoRef@CLightStack@@QEAAJPEAVCDrawingContext@@PEBVCMILMatrix.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800B1E20 (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x1800C57A0 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::AddCpuClipAntialiasDrawList(CDrawingContext *this, struct CDrawListEntry *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  float *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r14
  int v9; // ecx
  bool v10; // zf
  struct D2D_RECT_F v11; // xmm6
  int v12; // esi
  float v13; // xmm0_4
  int v14; // r12d
  float v15; // xmm0_4
  int v16; // r15d
  float v17; // xmm0_4
  int v18; // ebp
  float v19; // xmm6_4
  float left; // xmm10_4
  float top; // xmm9_4
  float right; // xmm12_4
  float bottom; // xmm11_4
  float v24; // xmm13_4
  float v25; // xmm7_4
  float v26; // xmm6_4
  float v27; // xmm5_4
  char v28; // al
  float v29; // xmm1_4
  float y; // xmm7_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  float x; // xmm4_4
  int CurrentLightBufferForContextNoRef; // eax
  unsigned int v35; // r15d
  __int64 v36; // rax
  void (__fastcall ***v37)(_QWORD); // rsi
  int v38; // edx
  int v39; // edx
  int v40; // edx
  int v41; // r12d
  int v42; // eax
  float v43; // xmm6_4
  void (__fastcall ***v44)(_QWORD); // r14
  char v45; // r13
  bool v46; // bp
  _QWORD *v47; // rcx
  __int64 v48; // rbx
  __int64 result; // rax
  CMILMatrix *v50; // rcx
  float v51; // xmm5_4
  float v52; // xmm4_4
  float v53; // xmm13_4
  float v54; // xmm0_4
  float v55; // xmm0_4
  __int32 v56; // xmm1_4
  unsigned __int64 v57; // rax
  float v58; // xmm1_4
  float v59; // xmm0_4
  struct D2D_RECT_F v60; // [rsp+30h] [rbp-F8h] BYREF
  struct D2D_POINT_2F v61[4]; // [rsp+40h] [rbp-E8h] BYREF

  v3 = *((_QWORD *)this + 24);
  if ( v3 && *(_BYTE *)(v3 + 1784) )
    return 0LL;
  v5 = 0LL;
  v6 = (float *)*((_QWORD *)a2 + 2);
  v7 = *((_QWORD *)this + 4);
  v8 = *((_QWORD *)this + 93) - 84LL;
  v9 = *(_DWORD *)(v7 + 360);
  if ( v9 )
    v5 = *(_QWORD *)(*(_QWORD *)(v7 + 336) + 8LL * (unsigned int)(v9 - 1));
  v10 = *(_DWORD *)(v5 + 68) == 1;
  v11 = *(struct D2D_RECT_F *)(v5 + 52);
  v60 = v11;
  if ( v10 )
  {
    v12 = 0x7FFFFFFF;
    v13 = _mm_shuffle_ps((__m128)v11, (__m128)v11, 255).m128_f32[0] - 0.5;
    if ( v13 < -2147483600.0 )
    {
      v14 = 0x80000000;
    }
    else if ( v13 >= 2147483600.0 )
    {
      v14 = 0x7FFFFFFF;
    }
    else
    {
      v14 = (int)ceilf_0(v13);
    }
    v15 = _mm_shuffle_ps((__m128)v11, (__m128)v11, 170).m128_f32[0] - 0.5;
    if ( v15 < -2147483600.0 )
    {
      v16 = 0x80000000;
    }
    else if ( v15 >= 2147483600.0 )
    {
      v16 = 0x7FFFFFFF;
    }
    else
    {
      v16 = (int)ceilf_0(v15);
    }
    v17 = _mm_shuffle_ps((__m128)v11, (__m128)v11, 85).m128_f32[0] - 0.5;
    if ( v17 < -2147483600.0 )
    {
      v18 = 0x80000000;
    }
    else if ( v17 >= 2147483600.0 )
    {
      v18 = 0x7FFFFFFF;
    }
    else
    {
      v18 = (int)ceilf_0(v17);
    }
    v19 = v11.left - 0.5;
    if ( v19 < -2147483600.0 )
    {
      v12 = 0x80000000;
    }
    else if ( v19 < 2147483600.0 )
    {
      v12 = (int)ceilf_0(v19);
    }
    left = (float)v12;
    top = (float)v18;
    right = (float)v16;
    bottom = (float)v14;
  }
  else
  {
    bottom = v60.bottom;
    right = v60.right;
    top = v60.top;
    left = v60.left;
  }
  v24 = v6[14];
  v25 = v6[15];
  v26 = v6[16];
  v27 = v6[17];
  v28 = (char)(4 * *(_BYTE *)(v8 + 64)) >> 6;
  v60.left = v24;
  v60.top = v25;
  v60.right = v26;
  v60.bottom = v27;
  if ( v28 <= 0 )
  {
    if ( v28 < 0 )
    {
LABEL_20:
      v29 = *(float *)(v8 + 48);
      y = v25 + *(float *)(v8 + 52);
      v31 = v27 + *(float *)(v8 + 52);
      v32 = v26 + v29;
      x = v29 + v24;
      goto LABEL_21;
    }
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v8) )
    {
      COERCE_FLOAT(v56 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v8 - 1.0) & v56) < 0.000081380211
        && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v8 + 20) - 1.0) & v56) < 0.000081380211 )
      {
        *(_BYTE *)(v8 + 64) = *(_BYTE *)(v8 + 64) & 0xCF ^ 0x30;
        goto LABEL_20;
      }
    }
    *(_BYTE *)(v8 + 64) = *(_BYTE *)(v8 + 64) & 0xCF ^ 0x10;
  }
  if ( (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(v8) )
  {
    v52 = v24;
    v53 = *(float *)(v8 + 20);
    x = (float)(v52 * *(float *)v8) + *(float *)(v8 + 48);
    y = (float)(v53 * v25) + *(float *)(v8 + 52);
    v32 = (float)(v26 * *(float *)v8) + *(float *)(v8 + 48);
    v31 = (float)(v51 * v53) + *(float *)(v8 + 52);
    if ( *(float *)v8 <= 0.0 || v53 <= 0.0 )
    {
      if ( x > v32 )
      {
        v54 = x;
        x = v32;
        v32 = v54;
      }
      if ( y > v31 )
      {
        v55 = y;
        y = v31;
        v31 = v55;
      }
    }
  }
  else
  {
    CMILMatrix::Transform2DRectToPerspective(v50, &v60, v61);
    x = v61[0].x;
    v57 = 1LL;
    y = v61[0].y;
    v32 = v61[0].x;
    v31 = v61[0].y;
    do
    {
      v58 = v61[v57].x;
      v59 = v61[v57].y;
      x = fminf(x, v58);
      ++v57;
      y = fminf(y, v59);
      v32 = fmaxf(v32, v58);
      v31 = fmaxf(v31, v59);
    }
    while ( v57 < 4 );
  }
LABEL_21:
  if ( right <= x || bottom <= y || v32 <= left || v31 <= top )
    return 0LL;
  *(_QWORD *)&v60.left = 0LL;
  CurrentLightBufferForContextNoRef = CLightStack::RetrieveCurrentLightBufferForContextNoRef(
                                        (CDrawingContext *)((char *)this + 416),
                                        this,
                                        (CDrawingContext *)((char *)this + 88),
                                        (struct CHwLightCollectionBuffer **)&v60);
  v35 = CurrentLightBufferForContextNoRef;
  if ( CurrentLightBufferForContextNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentLightBufferForContextNoRef, 0x3B2u, 0LL);
    return v35;
  }
  v36 = *((_QWORD *)this + 412);
  v37 = 0LL;
  if ( v36 )
    v37 = *(void (__fastcall ****)(_QWORD))(v36 + 256);
  v38 = *((_DWORD *)this + 60);
  if ( v38 )
  {
    v39 = v38 - 1;
    if ( !v39 )
    {
      v41 = 5;
      goto LABEL_33;
    }
    v40 = v39 - 1;
    if ( !v40 )
    {
      v41 = 21;
      goto LABEL_33;
    }
    if ( v40 == 2 )
    {
      v41 = 22;
      goto LABEL_33;
    }
  }
  v41 = 0;
LABEL_33:
  v42 = *((_DWORD *)this + 790);
  if ( v42 )
    v43 = *(float *)(*((_QWORD *)this + 394) + 4LL * (unsigned int)(v42 - 1));
  else
    v43 = FLOAT_1_0;
  v44 = *(void (__fastcall ****)(_QWORD))&v60.left;
  if ( CCommonRegistryData::CpuClipAASinkEnableDebugColors )
  {
    v43 = FLOAT_1_0;
    v41 = 5;
    v44 = 0LL;
  }
  v45 = 0;
  if ( CCommonRegistryData::CpuClipAASinkEnableOcclusion && (v41 == 5 || v43 == 1.0 && *((_BYTE *)a2 + 109)) )
    v45 = 1;
  v46 = 1;
  if ( *((_BYTE *)a2 + 108) )
  {
    if ( v41 != 5 )
      v46 = v41 == 0;
  }
  else
  {
    v46 = 0;
  }
  v47 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 93) - 16LL) + 16LL)
                 + 432LL * *((unsigned __int16 *)a2 + 48)
                 + 8);
  v48 = detail::vector_facade<CCpuClipAntialiasSinkContext::SinkRenderParameters,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkRenderParameters,10,1,detail::liberal_expansion_policy>>::reserve_region(
          v47,
          0xCCCCCCCCCCCCCCCDuLL * ((__int64)(v47[1] - *v47) >> 3),
          1LL);
  *(_QWORD *)v48 = a2;
  CMILRefCountImpl::AddReference((struct CDrawListEntry *)((char *)a2 + 8));
  *(float *)(v48 + 8) = v43;
  *(_DWORD *)(v48 + 12) = v41;
  *(_QWORD *)(v48 + 16) = v44;
  if ( v44 )
    (**v44)(v44);
  *(_QWORD *)(v48 + 24) = v37;
  if ( v37 )
    (**v37)(v37);
  *(_BYTE *)(v48 + 32) = v46;
  result = v35;
  *(_BYTE *)(v48 + 33) = v45;
  return result;
}
