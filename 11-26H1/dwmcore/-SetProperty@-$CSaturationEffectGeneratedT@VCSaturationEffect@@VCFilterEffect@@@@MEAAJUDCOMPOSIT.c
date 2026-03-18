/*
 * XREFs of ?SetProperty@?$CSaturationEffectGeneratedT@VCSaturationEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMatrix11@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x180249F78 (-SetMatrix11@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CSaturationEffectGeneratedT<CSaturationEffect,CFilterEffect>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 10 )
    return 2147942487LL;
  if ( a3 != 18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2488,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v5 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix11(a1, *a4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2489,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)v5);
  return v6;
}
