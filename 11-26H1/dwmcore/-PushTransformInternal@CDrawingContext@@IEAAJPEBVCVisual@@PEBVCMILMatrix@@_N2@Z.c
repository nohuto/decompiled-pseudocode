/*
 * XREFs of ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360
 * Callers:
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180018E80 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180019868 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18005C744 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005CEB0 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18005E3F0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18005EA58 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006C720 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x1800AF4BC (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800D11E8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800D907C (-RenderInternalEffect@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801594E8 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180159B74 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180182C78 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UMil3DRect.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180194CF0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1801ADF20 (-ProduceRealization@CWindowBackgroundBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRea.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@MPEAVCVisual@@@Z @ 0x180200410 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18022CF50 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180234B84 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1802351BC (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCEnvironmentLight@@AEBVCMILMatrix@@@Z.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x18024F6C0 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x180250800 (-RenderLayer@CSuperSampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180042890 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x18007ECC0 (-Grow@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushTransformInternal(
        const void **this,
        const struct CVisual *a2,
        const struct CMILMatrix *a3,
        char a4,
        bool a5)
{
  char v5; // si
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // eax
  const void **v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  char *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  unsigned int v20; // eax
  int v21; // eax
  _BYTE *v22; // rcx
  char v23; // r8
  char v24; // bl
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // ebx
  __int64 result; // rax
  void *v30; // rbp
  unsigned int v31; // ecx
  unsigned int v32; // edx
  __int64 v33; // rdx
  unsigned int v34; // ebx
  unsigned int v35; // ebp
  char v36; // dl
  char v37; // bl
  size_t v38; // r14
  unsigned int v39; // eax
  unsigned int v40; // eax
  __int64 v41; // rcx
  int v42; // esi
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  unsigned int v48; // ebp
  HANDLE v49; // rax
  void *v50; // rax
  const void *v51; // rbx
  unsigned int v52; // r14d
  unsigned int v53; // esi
  unsigned int v54; // ecx
  SIZE_T v55; // rbx
  HANDLE v56; // rax
  void *v57; // rax
  const void *v58; // rbx
  HANDLE ProcessHeap; // rax
  void *v60; // rax
  const void *v61; // r13
  unsigned __int64 v62; // r15
  void *v63; // rax
  __int64 v64; // rdx
  __int32 v65; // xmm2_4
  HANDLE v66; // rax
  int v67; // eax
  HANDLE v68; // rax
  int v69; // [rsp+20h] [rbp-F8h]
  int v70; // [rsp+20h] [rbp-F8h]
  int v71; // [rsp+20h] [rbp-F8h]
  int v72; // [rsp+20h] [rbp-F8h]
  int v73; // [rsp+20h] [rbp-F8h]
  size_t Size[2]; // [rsp+30h] [rbp-E8h]
  unsigned int Sizea; // [rsp+30h] [rbp-E8h]
  void *Sizeb; // [rsp+30h] [rbp-E8h]
  const void *Sizec; // [rsp+30h] [rbp-E8h]
  unsigned int v78; // [rsp+40h] [rbp-D8h]
  __m128 v79[4]; // [rsp+50h] [rbp-C8h] BYREF
  int v80; // [rsp+90h] [rbp-88h]
  _OWORD v81[4]; // [rsp+A0h] [rbp-78h] BYREF
  int v82; // [rsp+E0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]
  bool v84; // [rsp+140h] [rbp+28h]

  v5 = 0;
  v10 = 64LL;
  if ( !a5 )
    goto LABEL_6;
  v11 = *((unsigned int *)this + 67);
  v12 = *((unsigned int *)this + 66);
  Size[0] = 5LL;
  Size[1] = (size_t)a2;
  if ( (_DWORD)v12 == (_DWORD)v11 )
  {
    if ( (unsigned __int64)(2 * v11) <= 0xFFFFFFFF )
    {
      v52 = 64;
      if ( (unsigned int)(2 * v11) > 0x40 )
        v52 = 2 * v11;
      v53 = 16 * v12;
      if ( (unsigned __int64)(16 * v12) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v52 <= 0x10 )
        {
          v28 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v60 = HeapAlloc(ProcessHeap, 0, 16LL * v52);
          v61 = v60;
          if ( v60 )
          {
            memcpy_0(v60, this[32], v53);
            operator delete((void *)this[32]);
            this[32] = v61;
            *((_DWORD *)this + 67) = v52;
            goto LABEL_3;
          }
          v28 = -2147024882;
        }
        v27 = 104LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v28,
          v69);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v28,
          v70);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xCF7u, 0LL);
        return v28;
      }
      v27 = 101LL;
    }
    else
    {
      v27 = 98LL;
    }
    v28 = -2147024362;
    goto LABEL_22;
  }
LABEL_3:
  v5 = 1;
  *((_OWORD *)this[32] + *((unsigned int *)this + 66)) = *(_OWORD *)Size;
  v13 = *((_DWORD *)this + 69);
  if ( v13 <= ++*((_DWORD *)this + 66) )
    v13 = *((_DWORD *)this + 66);
  *((_DWORD *)this + 69) = v13;
LABEL_6:
  v14 = this + 35;
  v84 = v5;
  v15 = *((unsigned int *)this + 72);
  if ( !(_DWORD)v15 || !a4 )
  {
    v16 = *((unsigned int *)this + 73);
    if ( (_DWORD)v15 != (_DWORD)v16 )
    {
LABEL_9:
      v17 = (char *)*v14;
      v18 = 68LL * *((unsigned int *)this + 72);
      *(_OWORD *)&v17[v18] = *(_OWORD *)a3;
      *(_OWORD *)&v17[v18 + 16] = *((_OWORD *)a3 + 1);
      *(_OWORD *)&v17[v18 + 32] = *((_OWORD *)a3 + 2);
      *(_OWORD *)&v17[v18 + 48] = *((_OWORD *)a3 + 3);
      v19 = *((_DWORD *)a3 + 16);
LABEL_10:
      *(_DWORD *)&v17[v18 + 64] = v19;
      ++*((_DWORD *)this + 72);
      v20 = *((_DWORD *)this + 75);
      if ( v20 <= *((_DWORD *)this + 72) )
        v20 = *((_DWORD *)this + 72);
      *((_DWORD *)this + 75) = v20;
      v21 = *((_DWORD *)this + 72);
      if ( v21 )
        v22 = (char *)*v14 + 68 * (unsigned int)(v21 - 1);
      else
        v22 = &CMILMatrix::Identity;
      v23 = v22[65];
      if ( (v23 & 0x20) == 0 && 4 * (v23 & 0xF0) != 0 )
        goto LABEL_61;
      if ( (v23 & 0x20) != 0 )
      {
        v24 = 1;
        goto LABEL_38;
      }
      COERCE_FLOAT(v65 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)v22 + 7) & v65) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)v22 + 3) & v65) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)v22 + 15) & v65))
                        - 1.0) & v65) < 0.000081380211 )
      {
        v24 = 1;
        v36 = -16;
      }
      else
      {
        v24 = 0;
        v36 = 16;
      }
      v22[65] = v36 ^ (v23 ^ v36) & 0xCF;
      if ( !v24 )
LABEL_61:
        v24 = 0;
LABEL_38:
      v37 = v24 ^ 1;
      v38 = *((unsigned int *)this + 78);
      if ( (_DWORD)v38 != *((_DWORD *)this + 79) )
        goto LABEL_39;
      v62 = 2LL * *((unsigned int *)this + 79);
      if ( v62 > 0xFFFFFFFF )
      {
        v35 = -2147024362;
        v64 = 98LL;
      }
      else
      {
        if ( (unsigned int)v62 <= 0x40 )
          LODWORD(v62) = 64;
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v62 <= 1 )
        {
          v35 = -2147024809;
        }
        else
        {
          v63 = MIDL_user_allocate((unsigned int)v62);
          Sizec = v63;
          if ( v63 )
          {
            memcpy_0(v63, this[38], v38);
            operator delete((void *)this[38]);
            this[38] = Sizec;
            *((_DWORD *)this + 79) = v62;
LABEL_39:
            *((_BYTE *)this[38] + (unsigned int)(*((_DWORD *)this + 78))++) = v37;
            v39 = *((_DWORD *)this + 81);
            if ( v39 <= *((_DWORD *)this + 78) )
              v39 = *((_DWORD *)this + 78);
            *((_DWORD *)this + 81) = v39;
            if ( a2 )
            {
              v40 = *((_DWORD *)this + 85);
              v41 = *((unsigned int *)this + 84);
              v42 = *((_DWORD *)this + 72);
              if ( (_DWORD)v41 == v40 )
              {
                v43 = 2LL * v40;
                if ( v43 > 0xFFFFFFFF )
                {
                  v44 = 98LL;
LABEL_45:
                  v35 = -2147024362;
                  goto LABEL_46;
                }
                if ( (unsigned int)v43 > 0x40 )
                  v10 = (unsigned int)v43;
                v48 = 4 * v41;
                if ( (unsigned __int64)(4 * v41) > 0xFFFFFFFF )
                {
                  v44 = 101LL;
                  goto LABEL_45;
                }
                if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v10 <= 4 )
                {
                  v35 = -2147024809;
                  goto LABEL_60;
                }
                v49 = GetProcessHeap();
                v50 = HeapAlloc(v49, 0, 4 * v10);
                v51 = v50;
                if ( !v50 )
                {
                  v35 = -2147024882;
LABEL_60:
                  v44 = 104LL;
LABEL_46:
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)v44,
                    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                    (const char *)v35,
                    v69);
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x83,
                    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
                    (const char *)v35,
                    v72);
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xD06u, 0LL);
                  v45 = *((_DWORD *)this + 78);
                  v5 = v84;
                  if ( v45 )
                    *((_DWORD *)this + 78) = v45 - 1;
                  goto LABEL_48;
                }
                memcpy_0(v50, this[41], v48);
                v30 = (void *)this[41];
                if ( v30 )
                {
                  v68 = GetProcessHeap();
                  HeapFree(v68, 0, v30);
                }
                this[41] = v51;
                *((_DWORD *)this + 85) = v10;
              }
              *((_DWORD *)this[41] + *((unsigned int *)this + 84)) = v42;
              v31 = *((_DWORD *)this + 87);
              if ( v31 <= ++*((_DWORD *)this + 84) )
                v31 = *((_DWORD *)this + 84);
              *((_DWORD *)this + 87) = v31;
            }
            return 0LL;
          }
          v35 = -2147024882;
        }
        v64 = 104LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v64,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v35,
        v69);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)v35,
        v73);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xD00u, 0LL);
LABEL_48:
      v46 = *((_DWORD *)this + 72);
      if ( v46 )
        *((_DWORD *)this + 72) = v46 - 1;
      goto LABEL_50;
    }
    v32 = 2 * v16;
    if ( (unsigned __int64)(2 * v16) <= 0xFFFFFFFF )
    {
      v54 = 8;
      if ( v32 > 8 )
        v54 = v32;
      v78 = v54;
      Sizea = 68 * v15;
      if ( (unsigned __int64)(68 * v15) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v54 <= 0x44 )
        {
          v34 = -2147024809;
        }
        else
        {
          v55 = 68LL * v54;
          v56 = GetProcessHeap();
          v57 = HeapAlloc(v56, 0, v55);
          v58 = v57;
          if ( v57 )
          {
            memcpy_0(v57, *v14, Sizea);
            Sizeb = (void *)*v14;
            if ( *v14 )
            {
              v66 = GetProcessHeap();
              HeapFree(v66, 0, Sizeb);
            }
            *v14 = v58;
            *((_DWORD *)this + 73) = v78;
            goto LABEL_9;
          }
          v34 = -2147024882;
        }
        v33 = 104LL;
        goto LABEL_34;
      }
      v33 = 101LL;
    }
    else
    {
      v33 = 98LL;
    }
    v34 = -2147024362;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v34,
      v69);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)v34,
      v71);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x36u, 0LL);
    v35 = v34;
    goto LABEL_35;
  }
  v80 = 0;
  v82 = 0;
  v25 = (unsigned int)(v15 - 1);
  v26 = *v14;
  v79[0] = *(__m128 *)((char *)*v14 + 68 * v25);
  v79[1] = *(__m128 *)&v26[17 * v25 + 4];
  v79[2] = *(__m128 *)&v26[17 * v25 + 8];
  v79[3] = *(__m128 *)&v26[17 * v25 + 12];
  v80 = v26[17 * v25 + 16];
  CMILMatrix::Multiply(a3, v79, (struct CMILMatrix *)v81);
  if ( *((_DWORD *)this + 72) != *((_DWORD *)this + 73)
    || (v69 = (_DWORD)this + 280, v67 = CWatermarkStack<CMILMatrix,8,2,8>::Grow(this + 35), v34 = v67, v67 >= 0) )
  {
    v17 = (char *)*v14;
    v18 = 68LL * *((unsigned int *)this + 72);
    *(_OWORD *)&v17[v18] = v81[0];
    *(_OWORD *)&v17[v18 + 16] = v81[1];
    *(_OWORD *)&v17[v18 + 32] = v81[2];
    *(_OWORD *)&v17[v18 + 48] = v81[3];
    v19 = v82;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
    (const char *)(unsigned int)v67,
    v69);
  v35 = v34;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x45u, 0LL);
LABEL_35:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0xCFCu, 0LL);
LABEL_50:
  result = v35;
  if ( v5 )
  {
    v47 = *((_DWORD *)this + 66);
    if ( v47 )
      *((_DWORD *)this + 66) = v47 - 1;
  }
  return result;
}
