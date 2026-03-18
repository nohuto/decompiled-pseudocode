/*
 * XREFs of ?SetRightInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DA350
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetInsets@CNineGridBrush@@QEAAXMMMM@Z @ 0x18027CED8 (-SetInsets@CNineGridBrush@@QEAAXMMMM@Z.c)
 *     ?SetProperty@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027D050 (-SetProperty@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnRightInsetChanged@CNineGridBrush@@QEAAXXZ @ 0x1801DA3A0 (-OnRightInsetChanged@CNineGridBrush@@QEAAXXZ.c)
 */

__int64 __fastcall CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetRightInset(float *a1, float a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == a1[28] )
    return 0LL;
  if ( a2 >= 0.0 )
  {
    a1[28] = a2;
    CNineGridBrush::OnRightInsetChanged((CNineGridBrush *)a1);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9FE,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)0x88980403LL);
  return 2291663875LL;
}
