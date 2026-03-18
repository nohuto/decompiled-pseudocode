/*
 * XREFs of ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@M@Z @ 0x180203840
 * Callers:
 *     ?RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18005C744 (-RenderEffect@CTreeEffectLayer@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUD2D_.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180078480 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x1801CAF28 (-RenderMask@CTreeEffectLayer@@AEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1M@Z @ 0x1802037D0 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039FA0 (--1-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z @ 0x1800BA820 (--0CRectanglesShape@@QEAA@AEBUD2D_RECT_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800BAF10 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800D1830 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?PopAlpha@CDrawingContext@@AEAAX_N@Z @ 0x18018DECC (-PopAlpha@CDrawingContext@@AEAAX_N@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802039A0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     gsl::final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___::_final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___ @ 0x18021F5F0 (gsl--final_action__CDrawingContext--DrawBitmapRealization_--_2_--_lambda_1___--_final_action__CD.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmapRealization(
        CDrawingContext *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        __int64 a4,
        int a5)
{
  _QWORD *v8; // rcx
  int v9; // eax
  float v10; // xmm0_4
  int v11; // eax
  unsigned int v12; // ebx
  float v14; // [rsp+30h] [rbp-51h] BYREF
  __int128 v15; // [rsp+38h] [rbp-49h] BYREF
  char v16; // [rsp+48h] [rbp-39h]
  __int64 v17; // [rsp+50h] [rbp-31h]
  const struct D2D_RECT_F *v18; // [rsp+58h] [rbp-29h]
  CDrawingContext *v19; // [rsp+60h] [rbp-21h] BYREF
  char v20; // [rsp+68h] [rbp-19h]
  _BYTE v21[64]; // [rsp+70h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  CRectanglesShape::CRectanglesShape((CRectanglesShape *)v21, a3);
  v8 = (_QWORD *)((char *)this + 3152);
  v9 = *((_DWORD *)this + 790);
  if ( v9 )
    v10 = *(float *)(*v8 + 4LL * (unsigned int)(v9 - 1));
  else
    v10 = FLOAT_1_0;
  v14 = v10 * *(float *)&a5;
  CWatermarkStack<float,64,2,10>::Push((__int64)v8, &v14);
  v19 = this;
  v20 = 1;
  v16 = 0;
  v15 = 0LL;
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)&v15 + 1, a2);
  v17 = 1LL;
  v18 = a3;
  if ( !a3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v11 = CDrawingContext::FillRectanglesWithDrawListBitmap(this, 0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)&v15);
    gsl::final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___::_final_action__CDrawingContext::DrawBitmapRealization_::_2_::_lambda_1___(&v19);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D2,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15 + 1);
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::~com_ptr_t<IBitmapResource,wil::err_returncode_policy>((__int64 *)&v15);
    CDrawingContext::PopAlpha(this, 0);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v21);
    return v12;
  }
}
