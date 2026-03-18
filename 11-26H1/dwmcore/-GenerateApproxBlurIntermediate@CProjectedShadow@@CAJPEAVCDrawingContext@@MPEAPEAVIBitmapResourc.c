/*
 * XREFs of ?GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180262888
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x180198140 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802B2D4C (-Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMas.c)
 *     ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802B2ED0 (-Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrus.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlurIntermediate(__int64 a1, float a2, _QWORD *a3, __int64 a4)
{
  __m128i si128; // xmm0
  int v7; // r8d
  int v8; // esi
  __int64 v9; // r9
  int v10; // ebx
  int v11; // eax
  char v13; // [rsp+30h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp+7h] BYREF
  char v15; // [rsp+50h] [rbp+Fh]
  const char *v16; // [rsp+58h] [rbp+17h] BYREF
  int v17; // [rsp+60h] [rbp+1Fh]
  __int128 v18; // [rsp+68h] [rbp+27h] BYREF
  __m128i v19; // [rsp+78h] [rbp+37h] BYREF

  si128 = _mm_load_si128((const __m128i *)&_xmm);
  *a3 = 0LL;
  v7 = CProjectedShadow::s_cpMaskForBlur;
  v8 = a1;
  v19 = si128;
  if ( !CProjectedShadow::s_cpMaskForBlur )
  {
    v16 = "DWM ProjectedShadow ApproxBlur Mask";
    CProjectedShadow::s_cpMaskForBlur = 0LL;
    v9 = *((_QWORD *)g_pComposition + 90);
    v13 = 0;
    v14 = 0LL;
    v15 = 0;
    v18 = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v17 = 35;
    v10 = ((__int64 (__fastcall *)(const char **, __int64, void *, __int64, __int64 *, char, __int128 *, __int64 *))CShadowMaskProducer::Create)(
            &v16,
            a1,
            &unk_1803A05C0,
            v9,
            &v14,
            v13,
            &v18,
            &CProjectedShadow::s_cpMaskForBlur);
    CShapePtr::~CShapePtr((CShapePtr *)&v14);
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x30Du, 0LL);
      return (unsigned int)v10;
    }
    v7 = CProjectedShadow::s_cpMaskForBlur;
  }
  v16 = "DWM ProjectedShadow ApproxBlur Blur";
  v17 = 35;
  v11 = CShadowMaskCachingBlurProducer::Create(
          (unsigned int)&v16,
          v8,
          v7,
          (unsigned int)&v19,
          LODWORD(a2),
          (__int64)a3,
          a4);
  v10 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x318u, 0LL);
  return (unsigned int)v10;
}
