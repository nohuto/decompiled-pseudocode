/*
 * XREFs of ?SetProperty@?$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStandardDeviation@?$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024EA00 (-SetStandardDeviation@-$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@QE.c)
 */

__int64 __fastcall CGaussianBlurEffectGeneratedT<CGaussianBlurEffect,CFilterEffect>::SetProperty(
        __int64 a1,
        int a2,
        int a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 != 10 )
    return 2147942487LL;
  if ( a3 != 18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FD3,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v4 = CGaussianBlurEffectGeneratedT<CGaussianBlurEffect,CFilterEffect>::SetStandardDeviation();
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FD4,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)v4);
  return v5;
}
