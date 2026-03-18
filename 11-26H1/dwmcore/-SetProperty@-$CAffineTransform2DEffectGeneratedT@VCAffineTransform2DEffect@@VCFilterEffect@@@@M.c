/*
 * XREFs of ?SetProperty@?$CAffineTransform2DEffectGeneratedT@VCAffineTransform2DEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024C920
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMatrix21@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x180249D30 (-SetMatrix21@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix13@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A184 (-SetMatrix13@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix14@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A1D4 (-SetMatrix14@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetBlueSlope@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A2BC (-SetBlueSlope@-$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJM.c)
 *     ?SetMatrix23@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A30C (-SetMatrix23@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix22@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024BCD8 (-SetMatrix22@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix31@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024BD28 (-SetMatrix31@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CAffineTransform2DEffectGeneratedT<CAffineTransform2DEffect,CFilterEffect>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        float *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v11; // rdx
  int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 12;
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
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return 2147942487LL;
              if ( a3 != 18 )
              {
                v11 = 6157LL;
LABEL_35:
                v12 = -2147024809;
                goto LABEL_36;
              }
              v12 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix31(a1, *a4);
              if ( v12 < 0 )
              {
                v11 = 6158LL;
LABEL_36:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v11,
                  (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
                  (const char *)(unsigned int)v12);
                return (unsigned int)v12;
              }
            }
            else
            {
              if ( a3 != 18 )
              {
                v11 = 6152LL;
                goto LABEL_35;
              }
              v12 = CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::SetBlueSlope(a1, *a4);
              if ( v12 < 0 )
              {
                v11 = 6153LL;
                goto LABEL_36;
              }
            }
          }
          else
          {
            if ( a3 != 18 )
            {
              v11 = 6147LL;
              goto LABEL_35;
            }
            v12 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix23(a1, *a4);
            if ( v12 < 0 )
            {
              v11 = 6148LL;
              goto LABEL_36;
            }
          }
        }
        else
        {
          if ( a3 != 18 )
          {
            v11 = 6142LL;
            goto LABEL_35;
          }
          v12 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix22(a1, *a4);
          if ( v12 < 0 )
          {
            v11 = 6143LL;
            goto LABEL_36;
          }
        }
      }
      else
      {
        if ( a3 != 18 )
        {
          v11 = 6137LL;
          goto LABEL_35;
        }
        v12 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix21(a1, *a4);
        if ( v12 < 0 )
        {
          v11 = 6138LL;
          goto LABEL_36;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v11 = 6132LL;
        goto LABEL_35;
      }
      v12 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix14(a1, *a4);
      if ( v12 < 0 )
      {
        v11 = 6133LL;
        goto LABEL_36;
      }
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v11 = 6127LL;
      goto LABEL_35;
    }
    v12 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix13(a1, *a4);
    if ( v12 < 0 )
    {
      v11 = 6128LL;
      goto LABEL_36;
    }
  }
  return 0LL;
}
