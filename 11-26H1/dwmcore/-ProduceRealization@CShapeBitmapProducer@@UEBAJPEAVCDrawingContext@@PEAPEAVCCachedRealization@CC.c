/*
 * XREFs of ?ProduceRealization@CShapeBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x18028B480
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005CEB0 (-RenderIntermediate@CShapeTree@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@1AEBV-$TMilRect_@MUD2D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@QEAA@XZ @ 0x18009C208 (--1-$unique_ptr@VCCachedRealization@CCachedImageProducer@@U-$default_delete@VCCachedRealization@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CShapeBitmapProducer::ProduceRealization(
        CShapeBitmapProducer *this,
        struct CDrawingContext *a2,
        struct CCachedImageProducer::CCachedRealization **a3)
{
  __int64 v3; // rbx
  __m128 *v5; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  struct CCachedImageProducer::CCachedRealization *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 3);
  v5 = (__m128 *)*((_QWORD *)this + 9);
  v13 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v13);
  *(float *)&v14 = (float)(int)v3;
  *((float *)&v14 + 1) = (float)SHIDWORD(v3);
  v8 = CShapeTree::RenderIntermediate(
         v5,
         a2,
         (struct D2D_SIZE_F *)this + 10,
         (__int64)&v14,
         (float *)this + 22,
         (float *)this + 26,
         4,
         &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = (struct CCachedImageProducer::CCachedRealization *)operator new(8uLL);
    if ( v10 )
    {
      *(_QWORD *)v10 = v13;
      v13 = 0LL;
    }
    v14 = 0LL;
    *a3 = v10;
    std::unique_ptr<CCachedImageProducer::CCachedRealization>::~unique_ptr<CCachedImageProducer::CCachedRealization>(&v14);
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\shapetree.cpp",
      (const char *)(unsigned int)v8);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  return v9;
}
