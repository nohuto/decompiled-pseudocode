/*
 * XREFs of ?SetProperty@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOffset@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@QEAAJM@Z @ 0x18024C38C (-SetOffset@-$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@QEAAJM@Z.c)
 *     ?SetThickness@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@QEAAJM@Z @ 0x18024ED60 (-SetThickness@-$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@QEAAJM@Z.c)
 *     ?SetWidth@?$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@QEAAJM@Z @ 0x18024EF3C (-SetWidth@-$CCompositionTextLineGeneratedT@VCCompositionTextLine@@VCTextObject@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  __int64 v5; // rdx
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  switch ( a2 )
  {
    case 3:
      if ( a3 != 18 )
      {
        v5 = 14062LL;
        goto LABEL_15;
      }
      v6 = CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::SetOffset(a1, *a4);
      if ( v6 < 0 )
      {
        v5 = 14063LL;
        goto LABEL_16;
      }
      break;
    case 4:
      if ( a3 != 18 )
      {
        v5 = 14067LL;
        goto LABEL_15;
      }
      v6 = CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::SetWidth();
      if ( v6 < 0 )
      {
        v5 = 14068LL;
        goto LABEL_16;
      }
      break;
    case 5:
      if ( a3 != 18 )
      {
        v5 = 14072LL;
LABEL_15:
        v6 = -2147024809;
        goto LABEL_16;
      }
      v6 = CCompositionTextLineGeneratedT<CCompositionTextLine,CTextObject>::SetThickness();
      if ( v6 < 0 )
      {
        v5 = 14073LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
      break;
    default:
      return CTextObjectGeneratedT<CTextObject,CResource>::SetProperty();
  }
  return 0LL;
}
