/*
 * XREFs of ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D76A8
 * Callers:
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801CB150 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18003DAE0 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D5338 (-InternalRelease@-$ComPtr@VCShadowMaskProducer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ @ 0x1800D5FD4 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEBAPEAVCBrush@@XZ.c)
 *     ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800D7828 (-GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802B2ED0 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 *     ?CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z @ 0x1802B3054 (-CreateDrawListBrush@CShadowMaskProducer@@QEAAJPEAPEAVCDrawListBrush@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CProjectedShadowReceiver::GetReceiverMaskInputBrush(
        volatile signed __int32 **this,
        struct CDrawingContext *a2,
        struct CDrawListBrush **a3)
{
  unsigned int v3; // ebx
  CBrush *EffectiveMaskBrush; // r15
  CShadowMaskProducer **v8; // rdi
  int v9; // eax
  int DrawListBrush; // eax
  volatile signed __int32 *v12; // r8
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  char v14; // [rsp+48h] [rbp-61h]
  const char *v15; // [rsp+50h] [rbp-59h] BYREF
  int v16; // [rsp+58h] [rbp-51h]
  __int128 v17; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v18[8]; // [rsp+70h] [rbp-39h] BYREF
  struct CDrawListBrush *v19; // [rsp+78h] [rbp-31h]
  __int64 v20; // [rsp+80h] [rbp-29h]

  v3 = 0;
  *a3 = 0LL;
  EffectiveMaskBrush = CProjectedShadowReceiver::GetEffectiveMaskBrush((CProjectedShadowReceiver *)this);
  if ( CBrush::GetBrushGraph(EffectiveMaskBrush) )
    return v3;
  v8 = (CShadowMaskProducer **)(this + 15);
  if ( !this[15] )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator(
      (CBrushDrawListGenerator *)v18,
      a2,
      (const struct D2D_SIZE_F *)(this[9] + 35));
    v9 = (*(__int64 (__fastcall **)(CBrush *, _BYTE *))(*(_QWORD *)EffectiveMaskBrush + 344LL))(EffectiveMaskBrush, v18);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xBDu, 0LL);
    }
    else
    {
      if ( !v20 )
      {
        *a3 = v19;
        v19 = 0LL;
LABEL_6:
        CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v18);
        goto LABEL_7;
      }
      Microsoft::WRL::ComPtr<CShadowMaskProducer>::InternalRelease(this + 15);
      v12 = this[9];
      v15 = "DWM ProjectedShadow Receiver Mask";
      v13 = 0LL;
      v17 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v14 = 0;
      v16 = 33;
      v3 = ((__int64 (__fastcall *)(const char **, struct CDrawingContext *, volatile signed __int32 *, CBrush *, __int64 *, _BYTE, __int128 *, volatile signed __int32 **))CShadowMaskProducer::Create)(
             &v15,
             a2,
             v12 + 35,
             EffectiveMaskBrush,
             &v13,
             0,
             &v17,
             this + 15);
      CShapePtr::~CShapePtr((CShapePtr *)&v13);
      if ( (v3 & 0x80000000) == 0 )
        goto LABEL_6;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0xCCu, 0LL);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v18);
    return v3;
  }
LABEL_7:
  if ( *v8 )
  {
    DrawListBrush = CShadowMaskProducer::CreateDrawListBrush(*v8, a3);
    v3 = DrawListBrush;
    if ( DrawListBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawListBrush, 0xD8u, 0LL);
  }
  return v3;
}
