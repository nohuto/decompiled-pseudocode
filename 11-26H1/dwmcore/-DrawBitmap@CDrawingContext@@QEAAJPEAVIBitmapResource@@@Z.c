/*
 * XREFs of ?DrawBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@@Z @ 0x1802349D4
 * Callers:
 *     ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180286CA0 (-Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z @ 0x180171EB0 (-RecordBitmapResourceInfo@CDrawingContext@@QEBAXPEAVIBitmapResource@@@Z.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x180192A14 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z @ 0x180199658 (--0CDrawListBitmap@@QEAA@PEAVIBitmapRealization@@@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802039A0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::DrawBitmap(CDrawingContext *this, struct IBitmapResource *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(struct IBitmapResource *, struct IBitmapRealization **); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  struct IBitmapRealization *v10; // [rsp+30h] [rbp-79h] BYREF
  __int64 v11; // [rsp+38h] [rbp-71h] BYREF
  struct D2D_RECT_F *v12; // [rsp+40h] [rbp-69h]
  int v13; // [rsp+48h] [rbp-61h]
  int v14; // [rsp+4Ch] [rbp-5Dh]
  __m128i si128; // [rsp+50h] [rbp-59h] BYREF
  __int64 v16; // [rsp+60h] [rbp-49h]
  __int64 v17[3]; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v18[6]; // [rsp+80h] [rbp-29h] BYREF
  int v19; // [rsp+B0h] [rbp+7h]
  int v20; // [rsp+B4h] [rbp+Bh]
  int v21; // [rsp+C0h] [rbp+17h]
  struct D2D_RECT_F v22; // [rsp+D0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  CDrawingContext::RecordBitmapResourceInfo(this, a2);
  v4 = *(_QWORD *)a2;
  v10 = 0LL;
  v5 = *(__int64 (__fastcall **)(struct IBitmapResource *, struct IBitmapRealization **))(v4 + 64);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v10);
  v6 = v5(a2, &v10);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v21 = 0;
    v22 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _QWORD *, struct D2D_RECT_F *))(*(_QWORD *)v10 + 40LL))(
           v10,
           v18,
           &v22) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v18, &v22, &v22.left);
      v11 = v18[0];
      v12 = (struct D2D_RECT_F *)v18[2];
      v13 = v19;
      v14 = v20;
      MILMatrix3x2::SetInverse((MILMatrix3x2 *)&si128, (const struct MILMatrix3x2 *)&v11);
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v16 = 0LL;
    }
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v17, v10);
    v11 = 1LL;
    v12 = &v22;
    v8 = CDrawingContext::FillRectanglesWithDrawListBitmap(this, v17, (__int64)&v11, (__int64)&si128, 0LL);
    v7 = v8;
    if ( v8 >= 0 )
    {
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v17);
      v7 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
        (const char *)(unsigned int)v8);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v17);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB46,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)v6);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
  return v7;
}
