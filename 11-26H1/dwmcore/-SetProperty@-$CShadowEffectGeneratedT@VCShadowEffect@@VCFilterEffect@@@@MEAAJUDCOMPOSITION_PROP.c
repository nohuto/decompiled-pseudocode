/*
 * XREFs of ?SetProperty@?$CShadowEffectGeneratedT@VCShadowEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMatrix21@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x180249D30 (-SetMatrix21@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix13@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A184 (-SetMatrix13@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix14@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A1D4 (-SetMatrix14@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix12@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A7B8 (-SetMatrix12@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetStandardDeviation@?$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024EA00 (-SetStandardDeviation@-$CGaussianBlurEffectGeneratedT@VCGaussianBlurEffect@@VCFilterEffect@@@@QE.c)
 */

__int64 __fastcall CShadowEffectGeneratedT<CShadowEffect,CFilterEffect>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  __int64 v9; // rdx
  int v10; // ebx
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
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 1 )
            return 2147942487LL;
          if ( a3 != 18 )
          {
            v9 = 11215LL;
LABEL_25:
            v10 = -2147024809;
            goto LABEL_26;
          }
          v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix21(a1, *a4);
          if ( v10 < 0 )
          {
            v9 = 11216LL;
LABEL_26:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v9,
              (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
              (const char *)(unsigned int)v10);
            return (unsigned int)v10;
          }
        }
        else
        {
          if ( a3 != 18 )
          {
            v9 = 11210LL;
            goto LABEL_25;
          }
          v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix14(a1, *a4);
          if ( v10 < 0 )
          {
            v9 = 11211LL;
            goto LABEL_26;
          }
        }
      }
      else
      {
        if ( a3 != 18 )
        {
          v9 = 11205LL;
          goto LABEL_25;
        }
        v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix13(a1, *a4);
        if ( v10 < 0 )
        {
          v9 = 11206LL;
          goto LABEL_26;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v9 = 11200LL;
        goto LABEL_25;
      }
      v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix12(a1, *a4);
      if ( v10 < 0 )
      {
        v9 = 11201LL;
        goto LABEL_26;
      }
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v9 = 11195LL;
      goto LABEL_25;
    }
    v10 = CGaussianBlurEffectGeneratedT<CGaussianBlurEffect,CFilterEffect>::SetStandardDeviation();
    if ( v10 < 0 )
    {
      v9 = 11196LL;
      goto LABEL_26;
    }
  }
  return 0LL;
}
