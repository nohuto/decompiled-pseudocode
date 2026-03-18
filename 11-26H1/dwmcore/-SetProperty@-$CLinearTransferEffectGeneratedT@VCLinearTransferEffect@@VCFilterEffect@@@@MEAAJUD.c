/*
 * XREFs of ?SetProperty@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027A6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMatrix21@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x180249D30 (-SetMatrix21@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetAlphaDisable@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x180249DA4 (-SetAlphaDisable@-$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEA.c)
 *     ?SetMatrix33@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x180249ED8 (-SetMatrix33@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix32@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x180249F28 (-SetMatrix32@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix11@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x180249F78 (-SetMatrix11@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetMatrix14@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A1D4 (-SetMatrix14@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetBlueDisable@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x18024A224 (-SetBlueDisable@-$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAA.c)
 *     ?SetBlueSlope@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A2BC (-SetBlueSlope@-$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJM.c)
 *     ?SetMatrix23@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A30C (-SetMatrix23@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetClampOutput@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x18024A720 (-SetClampOutput@-$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAA.c)
 *     ?SetMatrix12@?$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z @ 0x18024A7B8 (-SetMatrix12@-$CColorMatrixEffectGeneratedT@VCColorMatrixEffect@@VCFilterEffect@@@@QEAAJM@Z.c)
 *     ?SetGreenDisable@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x18024B218 (-SetGreenDisable@-$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEA.c)
 *     ?SetRedDisable@?$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x18024E644 (-SetRedDisable@-$CLinearTransferEffectGeneratedT@VCLinearTransferEffect@@VCFilterEffect@@@@QEAAJ.c)
 */

__int64 __fastcall CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::SetProperty(
        __int64 a1,
        unsigned int a2,
        int a3,
        char *a4)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  __int64 v9; // rdx
  int v10; // ebx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 > 0x10 )
  {
    v12 = a2 - 17;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              if ( v16 != 1 )
                return 2147942487LL;
              if ( a3 != 17 )
              {
                v9 = 8901LL;
                goto LABEL_31;
              }
              v10 = CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::SetClampOutput(a1, *a4);
              if ( v10 < 0 )
              {
                v9 = 8902LL;
                goto LABEL_32;
              }
            }
            else
            {
              if ( a3 != 17 )
              {
                v9 = 8896LL;
                goto LABEL_31;
              }
              v10 = CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::SetAlphaDisable(a1, *a4);
              if ( v10 < 0 )
              {
                v9 = 8897LL;
                goto LABEL_32;
              }
            }
          }
          else
          {
            if ( a3 != 18 )
            {
              v9 = 8891LL;
              goto LABEL_31;
            }
            v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix33(a1, *(float *)a4);
            if ( v10 < 0 )
            {
              v9 = 8892LL;
              goto LABEL_32;
            }
          }
        }
        else
        {
          if ( a3 != 18 )
          {
            v9 = 8886LL;
            goto LABEL_31;
          }
          v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix32(a1, *(float *)a4);
          if ( v10 < 0 )
          {
            v9 = 8887LL;
            goto LABEL_32;
          }
        }
      }
      else
      {
        if ( a3 != 17 )
        {
          v9 = 8881LL;
          goto LABEL_31;
        }
        v10 = CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::SetBlueDisable(a1, *a4);
        if ( v10 < 0 )
        {
          v9 = 8882LL;
          goto LABEL_32;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v9 = 8876LL;
        goto LABEL_31;
      }
      v10 = CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::SetBlueSlope(a1, *(float *)a4);
      if ( v10 < 0 )
      {
        v9 = 8877LL;
        goto LABEL_32;
      }
    }
  }
  else if ( a2 == 16 )
  {
    if ( a3 != 18 )
    {
      v9 = 8871LL;
      goto LABEL_31;
    }
    v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix23(a1, *(float *)a4);
    if ( v10 < 0 )
    {
      v9 = 8872LL;
      goto LABEL_32;
    }
  }
  else
  {
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
            v8 = v7 - 1;
            if ( !v8 )
            {
              if ( a3 != 18 )
              {
                v9 = 8861LL;
                goto LABEL_31;
              }
              v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix21(a1, *(float *)a4);
              if ( v10 < 0 )
              {
                v9 = 8862LL;
                goto LABEL_32;
              }
              return 0LL;
            }
            if ( v8 == 1 )
            {
              if ( a3 != 17 )
              {
                v9 = 8866LL;
LABEL_31:
                v10 = -2147024809;
                goto LABEL_32;
              }
              v10 = CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::SetGreenDisable(a1, *a4);
              if ( v10 < 0 )
              {
                v9 = 8867LL;
LABEL_32:
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)v9,
                  (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
                  (const char *)(unsigned int)v10);
                return (unsigned int)v10;
              }
              return 0LL;
            }
            return 2147942487LL;
          }
          if ( a3 != 18 )
          {
            v9 = 8856LL;
            goto LABEL_31;
          }
          v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix14(a1, *(float *)a4);
          if ( v10 < 0 )
          {
            v9 = 8857LL;
            goto LABEL_32;
          }
        }
        else
        {
          if ( a3 != 17 )
          {
            v9 = 8851LL;
            goto LABEL_31;
          }
          v10 = CLinearTransferEffectGeneratedT<CLinearTransferEffect,CFilterEffect>::SetRedDisable(a1, *a4);
          if ( v10 < 0 )
          {
            v9 = 8852LL;
            goto LABEL_32;
          }
        }
      }
      else
      {
        if ( a3 != 18 )
        {
          v9 = 8846LL;
          goto LABEL_31;
        }
        v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix12(a1, *(float *)a4);
        if ( v10 < 0 )
        {
          v9 = 8847LL;
          goto LABEL_32;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v9 = 8841LL;
        goto LABEL_31;
      }
      v10 = CColorMatrixEffectGeneratedT<CColorMatrixEffect,CFilterEffect>::SetMatrix11(a1, *(float *)a4);
      if ( v10 < 0 )
      {
        v9 = 8842LL;
        goto LABEL_32;
      }
    }
  }
  return 0LL;
}
