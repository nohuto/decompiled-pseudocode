/*
 * XREFs of ?SetProperty@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E314
 * Callers:
 *     ?SetProperty@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D260 (-SetProperty@-$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@MEAAJUDCOMP.c)
 *     ?SetProperty@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D2F0 (-SetProperty@-$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJUDCOMP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBaselineOrigin@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024A0DC (-SetBaselineOrigin@-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z.c)
 *     ?SetSnappingOffset@?$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024E98C (-SetSnappingOffset@-$CTextObjectGeneratedT@VCTextObject@@VCResource@@@@QEAAJUD2D_VECTOR_2F@@@Z.c)
 */

__int64 __fastcall CTextObjectGeneratedT<CTextObject,CResource>::SetProperty(__int64 a1, int a2, int a3, __int64 *a4)
{
  int v4; // edx
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return 2147942487LL;
    if ( a3 != 35 )
    {
      v5 = 13729LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v6 = CTextObjectGeneratedT<CTextObject,CResource>::SetSnappingOffset(a1, *a4);
    if ( v6 < 0 )
    {
      v7 = 13730LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  else
  {
    if ( a3 != 35 )
    {
      v5 = 13724LL;
      goto LABEL_9;
    }
    v6 = CTextObjectGeneratedT<CTextObject,CResource>::SetBaselineOrigin(a1, *a4);
    if ( v6 < 0 )
    {
      v7 = 13725LL;
      goto LABEL_13;
    }
  }
  return 0LL;
}
