/*
 * XREFs of ?SetProperty@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18027D050
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetRightInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DA350 (-SetRightInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetTopInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DCEA4 (-SetTopInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetLeftInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x1801DE6E0 (-SetLeftInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetBottomInset@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024A3C4 (-SetBottomInset@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetBottomInsetScale@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024A43C (-SetBottomInsetScale@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetIsCenterHollow@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJ_N@Z @ 0x18024B7B4 (-SetIsCenterHollow@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJ_N@Z.c)
 *     ?SetLeftInsetScale@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024BB60 (-SetLeftInsetScale@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetRightInsetScale@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024E7F4 (-SetRightInsetScale@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 *     ?SetTopInsetScale@?$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z @ 0x18024EE24 (-SetTopInsetScale@-$CNineGridBrushGeneratedT@VCNineGridBrush@@VCBrush@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetProperty(float *a1, int a2, int a3, char *a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  __int64 v12; // rdx
  int IsCenterHollow; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v4 = a2 - 1;
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
                v10 = v9 - 1;
                if ( v10 )
                {
                  if ( v10 != 1 )
                    return 2147942487LL;
                  if ( a3 != 17 )
                  {
                    v12 = 2913LL;
LABEL_45:
                    IsCenterHollow = -2147024809;
                    goto LABEL_46;
                  }
                  IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetIsCenterHollow(a1, *a4);
                  if ( IsCenterHollow < 0 )
                  {
                    v12 = 2914LL;
LABEL_46:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v12,
                      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
                      (const char *)(unsigned int)IsCenterHollow);
                    return (unsigned int)IsCenterHollow;
                  }
                }
                else
                {
                  if ( a3 != 18 )
                  {
                    v12 = 2908LL;
                    goto LABEL_45;
                  }
                  IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetBottomInsetScale(
                                     (__int64)a1,
                                     *(float *)a4);
                  if ( IsCenterHollow < 0 )
                  {
                    v12 = 2909LL;
                    goto LABEL_46;
                  }
                }
              }
              else
              {
                if ( a3 != 18 )
                {
                  v12 = 2903LL;
                  goto LABEL_45;
                }
                IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetRightInsetScale(
                                   (__int64)a1,
                                   *(float *)a4);
                if ( IsCenterHollow < 0 )
                {
                  v12 = 2904LL;
                  goto LABEL_46;
                }
              }
            }
            else
            {
              if ( a3 != 18 )
              {
                v12 = 2898LL;
                goto LABEL_45;
              }
              IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetTopInsetScale(
                                 (__int64)a1,
                                 *(float *)a4);
              if ( IsCenterHollow < 0 )
              {
                v12 = 2899LL;
                goto LABEL_46;
              }
            }
          }
          else
          {
            if ( a3 != 18 )
            {
              v12 = 2893LL;
              goto LABEL_45;
            }
            IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetLeftInsetScale(
                               (__int64)a1,
                               *(float *)a4);
            if ( IsCenterHollow < 0 )
            {
              v12 = 2894LL;
              goto LABEL_46;
            }
          }
        }
        else
        {
          if ( a3 != 18 )
          {
            v12 = 2888LL;
            goto LABEL_45;
          }
          IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetBottomInset((__int64)a1, *(float *)a4);
          if ( IsCenterHollow < 0 )
          {
            v12 = 2889LL;
            goto LABEL_46;
          }
        }
      }
      else
      {
        if ( a3 != 18 )
        {
          v12 = 2883LL;
          goto LABEL_45;
        }
        IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetRightInset(a1, *(float *)a4);
        if ( IsCenterHollow < 0 )
        {
          v12 = 2884LL;
          goto LABEL_46;
        }
      }
    }
    else
    {
      if ( a3 != 18 )
      {
        v12 = 2878LL;
        goto LABEL_45;
      }
      IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetTopInset(a1, *(float *)a4);
      if ( IsCenterHollow < 0 )
      {
        v12 = 2879LL;
        goto LABEL_46;
      }
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v12 = 2873LL;
      goto LABEL_45;
    }
    IsCenterHollow = CNineGridBrushGeneratedT<CNineGridBrush,CBrush>::SetLeftInset(a1, *(float *)a4);
    if ( IsCenterHollow < 0 )
    {
      v12 = 2874LL;
      goto LABEL_46;
    }
  }
  return 0LL;
}
