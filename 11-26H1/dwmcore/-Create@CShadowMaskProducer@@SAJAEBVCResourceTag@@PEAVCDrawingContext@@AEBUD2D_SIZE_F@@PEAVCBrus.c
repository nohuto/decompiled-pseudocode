/*
 * XREFs of ?Create@CShadowMaskProducer@@SAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@$$QEAVCShapePtr@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAV1@@Z @ 0x1802B2ED0
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D76A8 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180262888 (-GenerateApproxBlurIntermediate@CProjectedShadow@@CAJPEAVCDrawingContext@@MPEAPEAVIBitmapResourc.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x180263EC0 (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x180039FBC (--0CCachedImageProducer@@IEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009B8D4 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801C6F84 (--1-$out_param_t@V-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCac.c)
 *     ??1?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801C74FC (--1-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x1801D3C5C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     ?ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x1802B31A0 (-ProduceRealization@CShadowMaskProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCa.c)
 */

__int64 __fastcall CShadowMaskProducer::Create(
        _OWORD *a1,
        struct CDrawingContext *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int128 *a7,
        CShadowMaskProducer **a8)
{
  CCachedImageProducer *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm0
  CShadowMaskProducer *v15; // rdi
  int v16; // ebx
  __int64 *v18; // [rsp+20h] [rbp-30h] BYREF
  CShadowMaskProducer *v19; // [rsp+28h] [rbp-28h] BYREF
  __int64 **v20; // [rsp+30h] [rbp-20h] BYREF
  struct CCachedImageProducer::CCachedRealization *v21; // [rsp+38h] [rbp-18h] BYREF
  char v22; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  v12 = (CCachedImageProducer *)MIDL_user_allocate(0x90uLL);
  if ( v12 )
  {
    CCachedImageProducer::CCachedImageProducer(v12, (__int64)v12);
    *(_QWORD *)(v13 + 16) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)v13 = &CShadowMaskProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    *(_OWORD *)(v13 + 72) = *a1;
    *(_QWORD *)(v13 + 88) = *a3;
    *(_QWORD *)(v13 + 96) = a4;
    *(_QWORD *)(v13 + 104) = *(_QWORD *)a5;
    *(_BYTE *)(v13 + 112) = *(_BYTE *)(a5 + 8);
    *(_QWORD *)a5 = 0LL;
    *(_BYTE *)(a5 + 8) = 0;
    v14 = *a7;
    *(_BYTE *)(v13 + 136) = a6;
    *(_OWORD *)(v13 + 120) = v14;
  }
  else
  {
    v13 = 0LL;
  }
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    &v19,
    v13);
  v15 = v19;
  if ( v19 )
  {
    v18 = 0LL;
    v20 = &v18;
    v21 = 0LL;
    v22 = 1;
    v16 = CShadowMaskProducer::ProduceRealization(v19, a2, &v21);
    wil::details::out_param_t<std::unique_ptr<CCachedImageProducer::CCachedRealization>>::~out_param_t<std::unique_ptr<CCachedImageProducer::CCachedRealization>>((__int64)&v20);
    if ( v16 >= 0 )
    {
      CCachedImageProducer::Initialize((__int64)v15, (__int64 *)&v18);
      v19 = 0LL;
      *a8 = v15;
      std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v18);
      v16 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
        (const char *)(unsigned int)v16);
      std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v18);
    }
  }
  else
  {
    v16 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\shadowhelpers.cpp",
      (const char *)0x8007000ELL);
  }
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::~com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>((volatile signed __int32 **)&v19);
  return (unsigned int)v16;
}
