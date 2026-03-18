/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NPEAVCDrawListEntryBuilder@@@Z @ 0x18023642C
 * Callers:
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180194CF0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitmapResource@@@Z @ 0x180201CBC (-RenderSpriteBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVIBitma.c)
 *     ?RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180268C7C (-RenderFlipExContent@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18001B620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800900E0 (--1-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreePathUnit@CVisu.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800D361C (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18016B5B8 (-resize@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z @ 0x180192A14 (-SetInverse@MILMatrix3x2@@QEAAXAEBV1@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBVMILMatrix3x2@@PEAVCDrawListEntryBuilder@@@Z @ 0x1802039A0 (-FillRectanglesWithDrawListBitmap@CDrawingContext@@AEAAJAEBVCDrawListBitmap@@AEBV-$span@$$CBUD2D.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IBitmapResource *a2,
        const struct CMILMatrix *a3,
        const struct CShape *a4,
        bool a5,
        struct CDrawListEntryBuilder *a6)
{
  __int64 v6; // rax
  const char *v11; // r9
  int v12; // xmm1_4
  unsigned int v13; // xmm0_4
  int v14; // xmm1_4
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int v19; // [rsp+30h] [rbp-99h] BYREF
  __int64 v20; // [rsp+38h] [rbp-91h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-89h]
  int v22; // [rsp+48h] [rbp-81h]
  int v23; // [rsp+4Ch] [rbp-7Dh]
  __int64 v24[2]; // [rsp+50h] [rbp-79h] BYREF
  bool v25; // [rsp+60h] [rbp-69h]
  _BYTE v26[24]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v27[3]; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v28[64]; // [rsp+98h] [rbp-31h] BYREF
  char v29; // [rsp+D8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v6 = *(_QWORD *)a4;
  v19 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned int *))(v6 + 64))(a4, &v19) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x855,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      v11);
  if ( v19 )
  {
    v12 = *((_DWORD *)a3 + 1);
    LODWORD(v20) = *(_DWORD *)a3;
    v13 = *((_DWORD *)a3 + 4);
    HIDWORD(v20) = v12;
    v21 = __PAIR64__(*((_DWORD *)a3 + 5), v13);
    v14 = *((_DWORD *)a3 + 13);
    v22 = *((_DWORD *)a3 + 12);
    v23 = v14;
    MILMatrix3x2::SetInverse((MILMatrix3x2 *)v26, (const struct MILMatrix3x2 *)&v20);
    CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v24, a2);
    v25 = a5;
    v27[0] = (__int64)v28;
    v27[1] = (__int64)v28;
    v27[2] = (__int64)&v29;
    detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::resize(
      v27,
      v19);
    (*(void (__fastcall **)(const struct CShape *, __int64, _QWORD))(*(_QWORD *)a4 + 80LL))(a4, v27[0], v19);
    v15 = v27[0];
    gsl::details::extent_type<-1>::extent_type<-1>(&v20, v19);
    v21 = v15;
    if ( v20 == -1 || !v15 && v20 )
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    v16 = CDrawingContext::FillRectanglesWithDrawListBitmap(this, v24, (__int64)&v20, (__int64)v26, a6);
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x868,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
        (const char *)(unsigned int)v16);
      detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(v27);
      CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v24);
      return v17;
    }
    detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::~vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>(v27);
    CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v24);
  }
  return 0LL;
}
