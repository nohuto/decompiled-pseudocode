/*
 * XREFs of ?SetProperty@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D260
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOffsetInSurface@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024C564 (-SetOffsetInSurface@-$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAA.c)
 *     ?SetSurfaceScale@?$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024EB58 (-SetSurfaceScale@-$CCompositionGlyphRunGeneratedT@VCCompositionGlyphRun@@VCTextObject@@@@QEAAJUD.c)
 */

__int64 __fastcall CCompositionGlyphRunGeneratedT<CCompositionGlyphRun,CTextObject>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        __int64 *a4)
{
  __int64 v5; // rdx
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 3 )
  {
    if ( a3 != 35 )
    {
      v5 = 13875LL;
      goto LABEL_10;
    }
    v6 = CCompositionGlyphRunGeneratedT<CCompositionGlyphRun,CTextObject>::SetOffsetInSurface(a1, *a4);
    if ( v6 < 0 )
    {
      v5 = 13876LL;
      goto LABEL_11;
    }
  }
  else
  {
    if ( a2 != 4 )
      return CTextObjectGeneratedT<CTextObject,CResource>::SetProperty();
    if ( a3 != 35 )
    {
      v5 = 13880LL;
LABEL_10:
      v6 = -2147024809;
      goto LABEL_11;
    }
    v6 = CCompositionGlyphRunGeneratedT<CCompositionGlyphRun,CTextObject>::SetSurfaceScale(a1, *a4);
    if ( v6 < 0 )
    {
      v5 = 13881LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  return 0LL;
}
