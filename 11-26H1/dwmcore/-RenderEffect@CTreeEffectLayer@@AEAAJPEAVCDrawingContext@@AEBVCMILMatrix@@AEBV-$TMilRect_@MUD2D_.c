/*
 * XREFs of ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18005C744
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x18005D650 (-RenderLayer@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ @ 0x180016420 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCBrush@@XZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800197F0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005C5A0 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x18005CB40 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z @ 0x18005CB60 (-PushEffectiveAlphaForNode@CDrawingContext@@AEAAJPEBVCVisual@@M_N@Z.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18005CDC8 (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x18005CE3C (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E360 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z @ 0x180082330 (-Pop@-$CWatermarkStack@PEAX$01$01$09@@QEAA_NPEAPEAX@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800C9860 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_180203840.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTreeEffectLayer::RenderEffect(
        CTreeEffectLayer *this,
        CDrawingContext *a2,
        struct CMILMatrix *a3,
        int a4,
        __int64 a5)
{
  char v8; // r12
  char v9; // r15
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned int v15; // eax
  int v16; // eax
  CDropShadow *v18; // rcx
  float v19; // xmm2_4
  float v20; // xmm4_4
  int v21; // eax
  int v22; // r9d
  __int64 v23; // rax
  char *v24; // rdx
  int v25; // [rsp+20h] [rbp-51h]
  unsigned int v26; // [rsp+20h] [rbp-51h]
  __int128 v27; // [rsp+48h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+57h]

  v8 = 0;
  v9 = 0;
  v27 = 0LL;
  if ( !*((_QWORD *)this + 32) )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2BAu, 0LL);
    return v11;
  }
  v10 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, a4, 1, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2BDu, 0LL);
    return v11;
  }
  CDrawingContext::GetClipBoundsWorld((__int64)a2, (float *)&v27);
  if ( *((float *)&v27 + 2) > *(float *)&v27 && *((float *)&v27 + 3) > *((float *)&v27 + 1) )
  {
    v12 = CDrawingContext::PushTransformInternal(a2, 0LL, a3, 0, 1);
    v11 = v12;
    if ( v12 < 0 )
    {
      v26 = 714;
    }
    else
    {
      v8 = 1;
      v12 = CDrawingContext::PushEffectiveAlphaForNode(a2, 0LL, 1.0, 1);
      v11 = v12;
      if ( v12 >= 0 )
      {
        ++*((_DWORD *)a2 + 161);
        v9 = 1;
        if ( g_LockAndReadLayer )
        {
          v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
          if ( a2 )
            v24 = (char *)a2 + 16;
          else
            v24 = 0LL;
          (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 112LL))(v23, v24);
        }
        v13 = *((_QWORD *)this + 32);
        if ( *((_QWORD *)this + 31) )
        {
          v14 = *(_QWORD *)(v13 + 680);
          if ( !v14 )
            goto LABEL_11;
          CTreeEffectLayer::PushLayerTransformOnExplicitSurfaceInput(this);
          *(_QWORD *)(v14 + 8) = this;
          v15 = (*(__int64 (__fastcall **)(_QWORD, CDrawingContext *, __int64, _QWORD))(**((_QWORD **)this + 31) + 208LL))(
                  *((_QWORD *)this + 31),
                  a2,
                  a5,
                  0LL);
          *(_QWORD *)(v14 + 8) = 0LL;
          v11 = v15;
          CTreeEffectLayer::PopLayerTransformFromExplicitSurfaceInput(this);
          if ( (v11 & 0x80000000) == 0 )
            goto LABEL_11;
          v26 = 745;
        }
        else
        {
          v18 = *(CDropShadow **)(v13 + 672);
          if ( !v18 || CDropShadow::GetMaskForLayerVisualNoRef(v18) )
            goto LABEL_11;
          v19 = *((float *)this + 57) - (float)*((int *)this + 4);
          *((float *)&v27 + 1) = *((float *)this + 58) - (float)*((int *)this + 5);
          v20 = *((float *)&v27 + 1) + *((float *)this + 60);
          *(float *)&v27 = v19;
          *((float *)&v27 + 2) = v19 + *((float *)this + 59);
          *((float *)&v27 + 3) = v20;
          v21 = CDrawingContext::DrawBitmapRealization(a2, SLODWORD(FLOAT_1_0));
          v11 = v21;
          if ( v21 >= 0 )
          {
            v11 = 0;
            goto LABEL_11;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8B6,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
            (const char *)(unsigned int)v21,
            v25);
          v26 = 774;
        }
        v22 = v11;
        goto LABEL_23;
      }
      v26 = 717;
    }
    v22 = v12;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v26, 0LL);
  }
LABEL_11:
  CBaseClipStack::Pop((CDrawingContext *)((char *)a2 + 3104));
  --*(_QWORD *)(*((_QWORD *)a2 + 93) - 184LL);
  *((_BYTE *)a2 + 8065) = 1;
  if ( v9 )
  {
    --*((_DWORD *)a2 + 161);
    v16 = *((_DWORD *)a2 + 66);
    if ( v16 )
      *((_DWORD *)a2 + 66) = v16 - 1;
    CWatermarkStack<void *,2,2,10>::Pop((char *)a2 + 3152);
  }
  if ( v8 )
    CDrawingContext::PopTransformInternal(a2, 1);
  return v11;
}
