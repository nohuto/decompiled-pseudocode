/*
 * XREFs of ?Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800C8D10
 * Callers:
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 */

__int64 __fastcall CD2DClipStack::Push(const void **this, __m128 *a2, enum D2D1_ANTIALIAS_MODE a3)
{
  __m128 v5; // xmm9
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm4_4
  __int64 v9; // rdx
  __m128 si128; // xmm6
  float v11; // xmm3_4
  float v12; // xmm2_4
  __m128 v13; // xmm6
  float v14; // xmm1_4
  __m128 v15; // xmm6
  float v16; // xmm0_4
  __m128 v17; // xmm6
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v22; // esi
  float v23; // xmm0_4
  int v24; // eax
  float v25; // xmm0_4
  int v26; // eax
  float v27; // xmm0_4
  int v28; // eax
  float v29; // xmm0_4
  __int64 v30; // rdx
  unsigned int v31; // ebx
  unsigned int v32; // edi
  unsigned int v33; // esi
  void *v34; // rax
  const void *v35; // rbp
  __m128 v36; // [rsp+30h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( a3 == D2D1_ANTIALIAS_MODE_ALIASED )
  {
    v22 = 0x7FFFFFFF;
    v23 = a2->m128_f32[0] - 0.5;
    if ( v23 < -2147483600.0 )
    {
      v24 = 0x80000000;
    }
    else if ( v23 >= 2147483600.0 )
    {
      v24 = 0x7FFFFFFF;
    }
    else
    {
      v24 = (int)ceilf_0(v23);
    }
    v25 = a2->m128_f32[1] - 0.5;
    v5.m128_f32[0] = (float)v24;
    if ( v25 < -2147483600.0 )
    {
      v26 = 0x80000000;
    }
    else if ( v25 >= 2147483600.0 )
    {
      v26 = 0x7FFFFFFF;
    }
    else
    {
      v26 = (int)ceilf_0(v25);
    }
    v27 = a2->m128_f32[2] - 0.5;
    v6 = (float)v26;
    if ( v27 < -2147483600.0 )
    {
      v28 = 0x80000000;
    }
    else if ( v27 >= 2147483600.0 )
    {
      v28 = 0x7FFFFFFF;
    }
    else
    {
      v28 = (int)ceilf_0(v27);
    }
    v29 = a2->m128_f32[3] - 0.5;
    v7 = (float)v28;
    if ( v29 < -2147483600.0 )
    {
      v22 = 0x80000000;
    }
    else if ( v29 < 2147483600.0 )
    {
      v22 = (int)ceilf_0(v29);
    }
    v8 = (float)v22;
  }
  else
  {
    v5 = *a2;
    LODWORD(v6) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
    LODWORD(v7) = _mm_shuffle_ps(*a2, *a2, 170).m128_u32[0];
    LODWORD(v8) = _mm_shuffle_ps(*a2, *a2, 255).m128_u32[0];
  }
  v9 = *((unsigned int *)this + 2);
  if ( (_DWORD)v9 )
    si128 = *((__m128 *)*this + (unsigned int)(v9 - 1));
  else
    si128 = (__m128)_mm_load_si128((const __m128i *)&_xmm);
  v36 = si128;
  v11 = si128.m128_f32[0];
  if ( v5.m128_f32[0] > si128.m128_f32[0] )
  {
    v11 = v5.m128_f32[0];
    si128.m128_f32[0] = v5.m128_f32[0];
    v36 = si128;
  }
  v12 = _mm_shuffle_ps(si128, si128, 85).m128_f32[0];
  if ( v6 > v12 )
  {
    v12 = v6;
    v13 = _mm_shuffle_ps(v36, v36, 225);
    v13.m128_f32[0] = v6;
    si128 = _mm_shuffle_ps(v13, v13, 225);
    v36 = si128;
  }
  v14 = _mm_shuffle_ps(si128, si128, 170).m128_f32[0];
  if ( v14 > v7 )
  {
    v14 = v7;
    v15 = _mm_shuffle_ps(v36, v36, 210);
    v15.m128_f32[0] = v7;
    si128 = _mm_shuffle_ps(v15, v15, 201);
    v36 = si128;
  }
  v16 = _mm_shuffle_ps(si128, si128, 255).m128_f32[0];
  if ( v16 > v8 )
  {
    v16 = v8;
    v17 = _mm_shuffle_ps(v36, v36, 147);
    v17.m128_f32[0] = v8;
    si128 = _mm_shuffle_ps(v17, v17, 57);
  }
  if ( v14 <= v11 || v16 <= v12 )
    si128 = 0uLL;
  v18 = *((unsigned int *)this + 3);
  if ( (_DWORD)v9 != (_DWORD)v18 )
    goto LABEL_16;
  if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
  {
    v30 = 98LL;
LABEL_35:
    v31 = -2147024362;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v31);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v31);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v31, 0x31u, 0LL);
    return v31;
  }
  v32 = 8;
  if ( (unsigned int)(2 * v18) > 8 )
    v32 = 2 * v18;
  v33 = 16 * v9;
  if ( (unsigned __int64)(16 * v9) > 0xFFFFFFFF )
  {
    v30 = 101LL;
    goto LABEL_35;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v32 <= 0x10 )
  {
    v31 = -2147024809;
    goto LABEL_44;
  }
  v34 = MIDL_user_allocate(16LL * v32);
  v35 = v34;
  if ( !v34 )
  {
    v31 = -2147024882;
LABEL_44:
    v30 = 104LL;
    goto LABEL_36;
  }
  memcpy_0(v34, *this, v33);
  operator delete((void *)*this);
  *this = v35;
  *((_DWORD *)this + 3) = v32;
LABEL_16:
  *((__m128 *)*this + *((unsigned int *)this + 2)) = si128;
  v19 = *((_DWORD *)this + 5);
  v20 = *((_DWORD *)this + 2) + 1;
  *((_DWORD *)this + 2) = v20;
  if ( v19 <= v20 )
    v19 = v20;
  *((_DWORD *)this + 5) = v19;
  return 0LL;
}
