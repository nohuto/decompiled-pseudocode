/*
 * XREFs of ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x1800C61E0
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800C70F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 * Callees:
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180011FD0 (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B8950 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?pop_back@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C27F4 (-pop_back@-$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V-$buffer_impl@USinkEntry@CCp.c)
 *     ??$emplace_back@$$V@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C5380 (--$emplace_back@$$V@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClip.c)
 *     ?pop_back@?$vector_facade@UCpuClipStackState@CScopedClipStack@@V?$buffer_impl@UCpuClipStackState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800C60A0 (-pop_back@-$vector_facade@UCpuClipStackState@CScopedClipStack@@V-$buffer_impl@UCpuClipStackState.c)
 *     ?Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800C8D10 (-Push@CD2DClipStack@@QEAAJAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1800CA200 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DAFB8 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800DB820 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800E7154 (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 *     ?Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z @ 0x180187FB8 (-Create@CCpuClipAntialiasSinkContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1802B96CC (ceilf_0.c)
 *     floorf_0 @ 0x1802B9708 (floorf_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScopedClipStack::PushCpuClipToScope(
        CScopedClipStack *this,
        const struct CShape *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6,
        struct CCpuClipAntialiasSink *a7,
        bool *a8)
{
  struct CShape *v8; // r13
  char v9; // r15
  __int64 v12; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  char v17; // al
  unsigned __int32 v18; // xmm11_4
  float bottom; // xmm10_4
  __int64 v20; // rax
  int v21; // eax
  int v22; // esi
  struct CShape *v23; // rdx
  bool v24; // r12
  __int64 v25; // rax
  int v26; // eax
  float right; // xmm9_4
  float top; // xmm8_4
  float left; // xmm7_4
  __int64 v30; // rcx
  enum D2D1_ANTIALIAS_MODE v31; // r14d
  int v32; // ebx
  unsigned int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rax
  _BYTE *v38; // rax
  __int64 v40; // rcx
  void (__fastcall ***v41)(_QWORD, __int64); // rcx
  int v42; // esi
  float v43; // xmm7_4
  int v44; // eax
  float v45; // xmm8_4
  int v46; // eax
  float v47; // xmm9_4
  int v48; // eax
  float v49; // xmm10_4
  __int64 v50; // rbx
  CCpuClipAntialiasSinkContext **v51; // r12
  __int64 v52; // rcx
  CCpuClipAntialiasSinkContext *v53; // rcx
  int v54; // eax
  int v55; // ebx
  unsigned int v56; // eax
  unsigned int v57; // [rsp+20h] [rbp-E0h]
  char v58; // [rsp+30h] [rbp-D0h]
  char v59; // [rsp+31h] [rbp-CFh]
  struct CShape *v60; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+48h] [rbp-B8h]
  struct CCpuClipAntialiasSinkContext *v63[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v64; // [rsp+60h] [rbp-A0h]
  __int128 v65; // [rsp+70h] [rbp-90h] BYREF
  __int128 v66; // [rsp+80h] [rbp-80h]
  __int128 v67; // [rsp+90h] [rbp-70h]
  __int128 v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+B0h] [rbp-50h]
  bool *v70; // [rsp+C0h] [rbp-40h]
  struct D2D_RECT_F X; // [rsp+C8h] [rbp-38h] BYREF
  void *retaddr; // [rsp+198h] [rbp+98h]

  v8 = 0LL;
  *(_QWORD *)&X.left = a7;
  v9 = 0;
  v70 = a8;
  v12 = *((_QWORD *)this + 1);
  v69 = 0;
  v59 = 0;
  if ( a4 )
  {
    CMILMatrix::Multiply(a4, (__m128 *)(v12 - 84), (struct CMILMatrix *)&v65);
  }
  else
  {
    v65 = *(_OWORD *)(v12 - 84);
    v66 = *(_OWORD *)(v12 - 68);
    v67 = *(_OWORD *)(v12 - 52);
    v68 = *(_OWORD *)(v12 - 36);
    v69 = *(_DWORD *)(v12 - 20);
  }
  v15 = *((_QWORD *)this + 1);
  v16 = 0LL;
  v62 = 0LL;
  if ( v15 != *(_QWORD *)this && *(_QWORD *)(v15 - 176) )
  {
    v16 = *(_QWORD *)(*((_QWORD *)this + 244) - 24LL);
    v62 = v16;
  }
  v58 = 0;
  v17 = (*(__int64 (__fastcall **)(const struct CShape *))(*(_QWORD *)a2 + 16LL))(a2);
  v18 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
  bottom = 0.0;
  if ( v17 )
    goto LABEL_11;
  v20 = *(_QWORD *)a2;
  LODWORD(v61) = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, __int64 *))(v20 + 64))(a2, &v61) || (_DWORD)v61 != 1 )
    goto LABEL_12;
  if ( (char)v69 >> 6 != 1 )
  {
    if ( (char)v69 >> 6 < 0 )
    {
LABEL_11:
      v58 = 1;
      v62 = v16 + 1;
      goto LABEL_12;
    }
    if ( (char)(4 * BYTE1(v69)) >> 6 == 1 )
      goto LABEL_66;
    if ( (char)(4 * BYTE1(v69)) >> 6 >= 0 )
    {
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(HIDWORD(v66) & v18) * 61440.0)
                                        + (float)(COERCE_FLOAT(HIDWORD(v65) & v18) * 61440.0))
                                + COERCE_FLOAT(HIDWORD(v68) & v18))
                        - 1.0) & v18) >= 0.000081380211 )
      {
        BYTE1(v69) = BYTE1(v69) & 0xCF | 0x10;
LABEL_66:
        LOBYTE(v69) = v69 & 0x3F | 0x40;
        goto LABEL_67;
      }
      BYTE1(v69) |= 0x30u;
    }
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v65 + 1) - 0.0) & v18) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v66 - 0.0) & v18) < 0.000081380211 )
    {
      LOBYTE(v69) = v69 | 0xC0;
      goto LABEL_11;
    }
    goto LABEL_66;
  }
LABEL_67:
  if ( CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>((__int64)&v65) )
    goto LABEL_11;
LABEL_12:
  v60 = 0LL;
  if ( a3 )
  {
    v21 = CShape::CopyShape(a3, 0LL, &v60);
    v22 = v21;
    if ( v21 >= 0 )
    {
LABEL_14:
      v23 = v60;
      goto LABEL_15;
    }
    v57 = 354;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, v57, 0LL);
LABEL_45:
    detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::pop_back((__int64 *)this + 243);
    v32 = v22;
    if ( v9 && v8 )
      (**(void (__fastcall ***)(struct CShape *, __int64))v8)(v8, 1LL);
    return (unsigned int)v32;
  }
  v40 = *((_QWORD *)this + 1);
  if ( v40 == *(_QWORD *)this || !*(_QWORD *)(v40 - 176) )
  {
    v21 = CShape::CopyShape(a2, a4, &v60);
    v22 = v21;
    if ( v21 >= 0 )
      goto LABEL_14;
    v57 = 369;
    goto LABEL_44;
  }
  v61 = *(_QWORD *)(*((_QWORD *)this + 244) - 40LL);
  v55 = CShape::TryOptimizedCombinePaths(v61, 0LL, a2, a4, 1, &v60);
  v22 = v55;
  if ( v55 < 0 )
  {
    v56 = 456;
    goto LABEL_87;
  }
  v23 = v60;
  if ( !v60 )
  {
    v55 = CShape::D2DCombine(v61, 0LL, a2, a4, 1, &v60);
    v22 = v55;
    if ( v55 >= 0 )
      goto LABEL_14;
    v56 = 467;
LABEL_87:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, v56, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v55, 0x16Cu, 0LL);
    goto LABEL_45;
  }
LABEL_15:
  v24 = a6;
  v9 = 1;
  v8 = v23;
  if ( !a6 )
    goto LABEL_16;
  v50 = *((_QWORD *)this + 1);
  v51 = (CCpuClipAntialiasSinkContext **)(v50 - 16);
  if ( !*(_QWORD *)(v50 - 16) )
  {
    v63[0] = (struct CCpuClipAntialiasSinkContext *)(v50 - 16);
    v63[1] = 0LL;
    v64 = 1;
    v22 = CCpuClipAntialiasSinkContext::Create(&v63[1]);
    if ( v64 )
    {
      v52 = *(_QWORD *)v63[0];
      *(_QWORD *)v63[0] = v63[1];
      if ( v52 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 8LL))(v52);
    }
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x17Fu, 0LL);
      goto LABEL_45;
    }
    v53 = *v51;
    *(_OWORD *)((char *)v53 + 904) = *(_OWORD *)(v50 - 84);
    *(_OWORD *)((char *)v53 + 920) = *(_OWORD *)(v50 - 68);
    *(_OWORD *)((char *)v53 + 936) = *(_OWORD *)(v50 - 52);
    *(_OWORD *)((char *)v53 + 952) = *(_OWORD *)(v50 - 36);
    *((_DWORD *)v53 + 242) = *(_DWORD *)(v50 - 20);
    v23 = v60;
  }
  v21 = CCpuClipAntialiasSinkContext::PushSink(*v51, v23, *(struct CCpuClipAntialiasSink **)&X.left);
  v22 = v21;
  if ( v21 < 0 )
  {
    v57 = 391;
    goto LABEL_44;
  }
  v24 = a6;
  v59 = 1;
LABEL_16:
  v25 = *(_QWORD *)a2;
  X = 0LL;
  v26 = (*(__int64 (__fastcall **)(const struct CShape *, struct D2D_RECT_F *, __int128 *))(v25 + 48))(a2, &X, &v65);
  if ( v26 < 0 )
  {
    if ( v26 != -2003304438 )
      ModuleFailFastForHRESULT(v26, retaddr);
    right = 0.0;
    X.bottom = 0.0;
    top = 0.0;
    X.right = 0.0;
    left = 0.0;
    X.top = 0.0;
    X.left = 0.0;
  }
  else
  {
    bottom = X.bottom;
    right = X.right;
    top = X.top;
    left = X.left;
  }
  if ( !v58 )
  {
    if ( COERCE_FLOAT(LODWORD(left) & v18) < 8388608.0 )
      left = (float)(int)floorf_0(left);
    X.left = left;
    if ( COERCE_FLOAT(LODWORD(top) & v18) < 8388608.0 )
      top = (float)(int)floorf_0(top);
    X.top = top;
    if ( COERCE_FLOAT(LODWORD(right) & v18) < 8388608.0 )
      right = (float)(int)ceilf_0(right);
    X.right = right;
    if ( COERCE_FLOAT(LODWORD(bottom) & v18) < 8388608.0 )
      bottom = (float)(int)ceilf_0(bottom);
    X.bottom = bottom;
  }
  v30 = *((_QWORD *)this + 1);
  if ( v30 == *(_QWORD *)this || !*(_QWORD *)(v30 - 168) )
  {
    v31 = a5;
    if ( a5 == D2D1_ANTIALIAS_MODE_ALIASED )
    {
      v42 = 0x7FFFFFFF;
      v43 = left - 0.5;
      if ( v43 < -2147483600.0 )
      {
        v44 = 0x80000000;
      }
      else if ( v43 >= 2147483600.0 )
      {
        v44 = 0x7FFFFFFF;
      }
      else
      {
        v44 = (int)ceilf_0(v43);
      }
      v45 = top - 0.5;
      left = (float)v44;
      if ( v45 < -2147483600.0 )
      {
        v46 = 0x80000000;
      }
      else if ( v45 >= 2147483600.0 )
      {
        v46 = 0x7FFFFFFF;
      }
      else
      {
        v46 = (int)ceilf_0(v45);
      }
      v47 = right - 0.5;
      top = (float)v46;
      if ( v47 < -2147483600.0 )
      {
        v48 = 0x80000000;
      }
      else if ( v47 >= 2147483600.0 )
      {
        v48 = 0x7FFFFFFF;
      }
      else
      {
        v48 = (int)ceilf_0(v47);
      }
      v49 = bottom - 0.5;
      right = (float)v48;
      if ( v49 < -2147483600.0 )
      {
        v42 = 0x80000000;
      }
      else if ( v49 < 2147483600.0 )
      {
        v42 = (int)ceilf_0(v49);
      }
      bottom = (float)v42;
    }
    v34 = *((_DWORD *)this + 601);
    v63[0] = (struct CCpuClipAntialiasSinkContext *)__PAIR64__(LODWORD(top), LODWORD(left));
    v63[1] = (struct CCpuClipAntialiasSinkContext *)__PAIR64__(LODWORD(bottom), LODWORD(right));
    if ( *((_DWORD *)this + 600) == v34 )
    {
      v54 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,8,2,8>::Grow((char *)this + 2392);
      v22 = v54;
      if ( v54 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)(unsigned int)v54);
        v33 = 513;
        v32 = v22;
LABEL_104:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, v33, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x1A9u, 0LL);
        v9 = 1;
        if ( v59 )
          detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::pop_back((__int64 *)(*(_QWORD *)(*((_QWORD *)this + 1) - 16LL) + 16LL));
        goto LABEL_45;
      }
    }
    *(_OWORD *)(*((_QWORD *)this + 299) + 16LL * *((unsigned int *)this + 600)) = *(_OWORD *)v63;
    v35 = *((_DWORD *)this + 603);
    if ( v35 <= ++*((_DWORD *)this + 600) )
      v35 = *((_DWORD *)this + 600);
    *((_DWORD *)this + 603) = v35;
    v32 = 0;
  }
  else
  {
    v31 = a5;
    v32 = CD2DClipStack::Push((CScopedClipStack *)((char *)this + 2392), &X, a5);
    v22 = v32;
    if ( v32 < 0 )
    {
      v33 = 517;
      goto LABEL_104;
    }
  }
  ++*(_QWORD *)(*((_QWORD *)this + 1) - 168LL);
  detail::vector_facade<CScopedClipStack::CpuClipStackState,detail::buffer_impl<CScopedClipStack::CpuClipStackState,10,1,detail::liberal_expansion_policy>>::emplace_back<>((__int64 *)this + 243);
  ++*(_QWORD *)(*((_QWORD *)this + 1) - 176LL);
  v36 = *((_QWORD *)this + 244);
  if ( *(_BYTE *)(v36 - 32) )
  {
    v41 = *(void (__fastcall ****)(_QWORD, __int64))(v36 - 40);
    if ( v41 )
      (**v41)(v41, 1LL);
  }
  v37 = v62;
  *(_QWORD *)(v36 - 40) = v8;
  *(_BYTE *)(v36 - 32) = 1;
  *(_QWORD *)(v36 - 24) = v37;
  v38 = v70;
  *(_QWORD *)(v36 - 16) = 0LL;
  *(_DWORD *)(v36 - 8) = v31;
  *(_BYTE *)(v36 - 4) = v24;
  *v38 = v58;
  return (unsigned int)v32;
}
