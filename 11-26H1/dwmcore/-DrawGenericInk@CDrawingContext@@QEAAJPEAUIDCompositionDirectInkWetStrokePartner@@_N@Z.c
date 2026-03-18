/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@QEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180125298
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180124D00 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801725B0 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUD2D_RECT_F@@.c)
 * Callees:
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18006AE00 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@QEBA_NXZ @ 0x1800AC284 (-IsIn3DMode@CDrawingContext@@QEBA_NXZ.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x180189050 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x18018B6A0 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18018B6C4 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(
        CDrawingContext *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        bool a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  float v11; // xmm0_4
  __int64 v12; // r11
  D2D1_PRIMITIVE_BLEND v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_RECT_F v17; // [rsp+48h] [rbp-38h] BYREF
  struct D2D_RECT_F v18; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h]

  v16 = 0LL;
  if ( CDrawingContext::IsIn3DMode(this) )
  {
    v6 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467263, 0x2EEu, 0LL);
  }
  else
  {
    if ( !CScopedClipStack::HasDeferredD2DLayers((CDrawingContext *)((char *)this + 736)) )
      goto LABEL_8;
    v7 = *(_QWORD *)a2;
    v17 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IDCompositionDirectInkWetStrokePartner *, struct D2D_RECT_F *))(v7 + 32))(
           a2,
           &v17);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x2F6u, 0LL);
      goto LABEL_12;
    }
    v19 = 0LL;
    v18 = v17;
    v9 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v16, (__int64)this, &v18);
    v6 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x2F8u, 0LL);
    }
    else
    {
LABEL_8:
      v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x2FBu, 0LL);
      }
      else
      {
        v11 = D2DPrimitiveBlendFromMilCompositingMode(*((unsigned int *)this + 60));
        v14 = CD2DContext::DrawGenericInk(
                (CD2DContext *)(v12 + 16),
                (const struct ID2DContextOwner *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
                a2,
                (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 59) != 0),
                v13,
                v11,
                a3);
        v6 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x302u, 0LL);
      }
    }
  }
LABEL_12:
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v16);
  return v6;
}
