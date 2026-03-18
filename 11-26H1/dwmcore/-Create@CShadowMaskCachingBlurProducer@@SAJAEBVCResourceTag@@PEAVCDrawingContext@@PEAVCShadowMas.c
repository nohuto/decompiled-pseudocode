/*
 * XREFs of ?Create@CShadowMaskCachingBlurProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAPEAVIBitmapResource@@PEAV5@@Z @ 0x1802B2D4C
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18019805C (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180262888 (-GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResourc.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009B8D4 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801C6F84 (--1-$out_param_t@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCac.c)
 *     ??1?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801C74FC (--1-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CShadowMaskCachingBlurProducer@@AEAA@AEBVCResourceTag@@PEAVCShadowMaskProducer@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1802B2C18 (--0CShadowMaskCachingBlurProducer@@AEAA@AEBVCResourceTag@@PEAVCShadowMaskProducer@@AEBV-$TMilRec.c)
 *     ?ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802B32CC (-ProduceRealizationInternal@CShadowMaskCachingBlurProducer@@AEBAJPEAVCDrawingContext@@PEAPEAVCCa.c)
 */

__int64 __fastcall CShadowMaskCachingBlurProducer::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        int a5,
        __int64 *a6,
        __int64 a7)
{
  __m128i v8; // xmm0
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // edi
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 **v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  char v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  __int64 *v21; // [rsp+88h] [rbp+28h] BYREF

  v8 = _mm_loadu_si128(a4);
  *(float *)&v16 = *(float *)v8.m128i_i32 + 1.0;
  *((float *)&v16 + 2) = *(float *)&v8.m128i_i32[2] + 1.0;
  *((float *)&v16 + 1) = *(float *)&v8.m128i_i32[1] + 1.0;
  *((float *)&v16 + 3) = *(float *)&v8.m128i_i32[3] + 1.0;
  v11 = MIDL_user_allocate(0x78uLL);
  if ( !v11 )
  {
    *(_QWORD *)&v16 = 0LL;
    goto LABEL_7;
  }
  v12 = CShadowMaskCachingBlurProducer::CShadowMaskCachingBlurProducer((__int64)v11, a1, a3, &v16, a5);
  *(_QWORD *)&v16 = v12;
  v13 = v12;
  if ( !v12 )
  {
LABEL_7:
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_8;
  }
  CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v12 + 8));
  v17 = &v21;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 1;
  v14 = CShadowMaskCachingBlurProducer::ProduceRealizationInternal(v13, a2, &v18, a7);
  wil::details::out_param_t<std::unique_ptr<CCachedImageProducer::CCachedRealization>>::~out_param_t<std::unique_ptr<CCachedImageProducer::CCachedRealization>>((__int64)&v17);
  if ( v14 >= 0 )
  {
    CCachedImageProducer::Initialize(v13, (__int64 *)&v21);
    *(_QWORD *)&v16 = 0LL;
    *a6 = v13;
    std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v21);
    v14 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)(unsigned int)v14);
    std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v21);
  }
LABEL_8:
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::~com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>((volatile signed __int32 **)&v16);
  return (unsigned int)v14;
}
