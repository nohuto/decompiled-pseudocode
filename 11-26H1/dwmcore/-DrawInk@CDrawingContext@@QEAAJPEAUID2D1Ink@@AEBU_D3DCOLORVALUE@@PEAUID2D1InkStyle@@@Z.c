/*
 * XREFs of ?DrawInk@CDrawingContext@@QEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180234FCC
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18026FD40 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ @ 0x18006AE00 (--1CTryIgnoreCpuClippingScope@CDrawingContext@@QEAA@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006E5F0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@QEBA_NXZ @ 0x1800AC284 (-IsIn3DMode@CDrawingContext@@QEBA_NXZ.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800E99D4 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ @ 0x18018B6A0 (-HasDeferredD2DLayers@CScopedClipStack@@QEBA_NXZ.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18018B6C4 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180298680 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  float v12; // xmm1_4
  int v13; // ecx
  enum D2D1_PRIMITIVE_BLEND v14; // eax
  unsigned int v16; // [rsp+20h] [rbp-49h]
  __int64 v17; // [rsp+40h] [rbp-29h] BYREF
  struct D2D_RECT_F v18; // [rsp+48h] [rbp-21h] BYREF
  struct _D3DCOLORVALUE v19; // [rsp+58h] [rbp-11h] BYREF
  struct D2D_RECT_F v20; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+78h] [rbp+Fh]

  v17 = 0LL;
  *(struct _D3DCOLORVALUE *)&v19.r = 0LL;
  if ( CDrawingContext::IsIn3DMode(this) )
  {
    v8 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147467263, 0x2C5u, 0LL);
    goto LABEL_16;
  }
  if ( CScopedClipStack::HasDeferredD2DLayers((CDrawingContext *)((char *)this + 736)) )
  {
    v9 = *(_QWORD *)a2;
    v18 = 0LL;
    v10 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, struct D2D_RECT_F *))(v9 + 104))(
            a2,
            a4,
            0LL,
            &v18);
    v8 = v10;
    if ( v10 < 0 )
    {
      v16 = 717;
      goto LABEL_15;
    }
    v21 = 0LL;
    v20 = v18;
    v10 = CDrawingContext::CTryIgnoreCpuClippingScope::Enter(&v17, (__int64)this, &v20);
    v8 = v10;
    if ( v10 < 0 )
    {
      v16 = 719;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v16, 0LL);
      goto LABEL_16;
    }
  }
  v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v8 = v10;
  if ( v10 < 0 )
  {
    v16 = 722;
    goto LABEL_15;
  }
  v11 = *((_DWORD *)this + 790);
  *(struct _D3DCOLORVALUE *)&v19.r = *(struct _D3DCOLORVALUE *)&a3->r;
  if ( v11 )
    v12 = *(float *)(*((_QWORD *)this + 394) + 4LL * (unsigned int)(v11 - 1));
  else
    v12 = FLOAT_1_0;
  v13 = *((_DWORD *)this + 60);
  v19.a = v19.a * v12;
  v14 = (unsigned int)D2DPrimitiveBlendFromMilCompositingMode(v13);
  v10 = CD2DContext::DrawInk(
          (CD2DContext *)(*((_QWORD *)this + 4) + 16LL),
          (const struct ID2DContextOwner *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL)),
          a2,
          &v19,
          a4,
          (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)this + 59) != 0),
          v14);
  v8 = v10;
  if ( v10 < 0 )
  {
    v16 = 733;
    goto LABEL_15;
  }
LABEL_16:
  CDrawingContext::CTryIgnoreCpuClippingScope::~CTryIgnoreCpuClippingScope((CDrawingContext::CTryIgnoreCpuClippingScope *)&v17);
  return v8;
}
