/*
 * XREFs of ?SetInsets@CNineGridBrush@@QEAAXMMMM@Z @ 0x18027CED8
 * Callers:
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCNineGridBrush@@@Z @ 0x1802629F8 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TM.c)
 * Callees:
 *     ?SetRightInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DA350 (-SetRightInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetTopInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DCEA4 (-SetTopInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetLeftInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DE6E0 (-SetLeftInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18022C75C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBottomInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024A3C4 (-SetBottomInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetBottomInsetScale@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024A43C (-SetBottomInsetScale@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetLeftInsetScale@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024BB60 (-SetLeftInsetScale@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetRightInsetScale@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024E7F4 (-SetRightInsetScale@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetTopInsetScale@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024EE24 (-SetTopInsetScale@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 */

void __fastcall CNineGridBrush::SetInsets(CNineGridBrush *this, float a2, float a3, float a4, float a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetLeftInset((float *)this, a2);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      236LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
      (const char *)(unsigned int)v6);
  v7 = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetTopInset((float *)this, a3);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      237LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
      (const char *)(unsigned int)v7);
  v8 = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetRightInset((float *)this, a2);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      238LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
      (const char *)(unsigned int)v8);
  v9 = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetBottomInset((__int64)this, a3);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      239LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
      (const char *)(unsigned int)v9);
  v10 = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetLeftInsetScale((__int64)this, a4);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      240LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
      (const char *)(unsigned int)v10);
  v11 = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetTopInsetScale((__int64)this, a5);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      241LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
      (const char *)(unsigned int)v11);
  v12 = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetRightInsetScale((__int64)this, a4);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      242LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
      (const char *)(unsigned int)v12);
  v13 = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetBottomInsetScale((__int64)this, a5);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      243LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\ninegridbrush.cpp",
      (const char *)(unsigned int)v13);
}
