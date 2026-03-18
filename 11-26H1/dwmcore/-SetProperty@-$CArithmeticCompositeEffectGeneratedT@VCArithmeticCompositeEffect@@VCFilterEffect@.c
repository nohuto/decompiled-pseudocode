/*
 * XREFs of ?SetProperty@?$CArithmeticCompositeEffectGeneratedT@VCArithmeticCompositeEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024CB50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMatrix11@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x180249F78 (-SetMatrix11@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix13@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A184 (-SetMatrix13@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix14@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A1D4 (-SetMatrix14@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix12@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A7B8 (-SetMatrix12@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CArithmeticCompositeEffectGeneratedT<CArithmeticCompositeEffect,CFilterEffect>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v8; // rdx
  int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 10;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return 2147942487LL;
        if ( a3 != 18 )
        {
          v8 = 6438LL;
LABEL_20:
          v9 = -2147024809;
          goto LABEL_21;
        }
        v9 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix14(a1, *a4);
        if ( v9 < 0 )
        {
          v8 = 6439LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v8,
            (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
            (const char *)(unsigned int)v9);
          return (unsigned int)v9;
        }
      }
      else
      {
        if ( a3 != 18 )
        {
          v8 = 6433LL;
          goto LABEL_20;
        }
        v9 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix13(a1, *a4);
        if ( v9 < 0 )
        {
          v8 = 6434LL;
          goto LABEL_21;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v8 = 6428LL;
        goto LABEL_20;
      }
      v9 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix12(a1, *a4);
      if ( v9 < 0 )
      {
        v8 = 6429LL;
        goto LABEL_21;
      }
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v8 = 6423LL;
      goto LABEL_20;
    }
    v9 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix11(a1, *a4);
    if ( v9 < 0 )
    {
      v8 = 6424LL;
      goto LABEL_21;
    }
  }
  return 0LL;
}
