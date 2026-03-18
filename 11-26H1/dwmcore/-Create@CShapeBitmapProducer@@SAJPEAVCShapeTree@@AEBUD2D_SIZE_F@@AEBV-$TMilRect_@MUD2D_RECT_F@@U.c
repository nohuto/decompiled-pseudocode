/*
 * XREFs of ?Create@CShapeBitmapProducer@@SAJPEAVCShapeTree@@AEBUD2D_SIZE_F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@PEAPEAV1@@Z @ 0x18009A82C
 * Callers:
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D2050 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ??0CCachedImageProducer@@IEAA@XZ @ 0x180039FBC (--0CCachedImageProducer@@IEAA@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x18009B8D4 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ??R?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18009C290 (--R-$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@QEBAXPEAVCCachedRealization@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CShapeBitmapProducer::Create(
        __int64 a1,
        _QWORD *a2,
        _OWORD *a3,
        _OWORD *a4,
        __int64 *a5,
        CCachedImageProducer **a6)
{
  CCachedImageProducer *v10; // rax
  __int64 v11; // rdx
  CCachedImageProducer *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = (CCachedImageProducer *)MIDL_user_allocate(0x78uLL);
  v12 = v10;
  if ( v10 )
  {
    CCachedImageProducer::CCachedImageProducer(v10, v11);
    *((_QWORD *)v12 + 9) = a1;
    *((_QWORD *)v12 + 2) = &CWindowBackgroundBitmapProducer::`vftable'{for `IBitmapRealization'};
    *(_QWORD *)v12 = &CShapeBitmapProducer::`vftable'{for `CMILCOMBaseT<IBitmapResource,IBitmapResource,CMilObjectDeleter>'};
    *((_QWORD *)v12 + 10) = *a2;
    *(_OWORD *)((char *)v12 + 88) = *a3;
    *(_OWORD *)((char *)v12 + 104) = *a4;
    CMILRefCountImpl::AddReference((CCachedImageProducer *)((char *)v12 + 8));
    v13 = operator new(8uLL);
    if ( v13 )
    {
      v14 = *a5;
      *a5 = 0LL;
      *v13 = v14;
    }
    v16 = v13;
    CCachedImageProducer::Initialize(v12, &v16);
    if ( v16 )
      std::default_delete<CCachedImageProducer::CCachedRealization>::operator()();
    *a6 = v12;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x191,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
