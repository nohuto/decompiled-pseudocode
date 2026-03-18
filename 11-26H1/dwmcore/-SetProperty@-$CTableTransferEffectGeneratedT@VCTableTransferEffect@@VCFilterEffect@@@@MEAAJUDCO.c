/*
 * XREFs of ?SetProperty@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802855C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetAlphaDisable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x180249DF0 (-SetAlphaDisable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ.c)
 *     ?SetBlueDisable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x18024A270 (-SetBlueDisable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ_.c)
 *     ?SetClampOutput@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x18024A76C (-SetClampOutput@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ_.c)
 *     ?SetGreenDisable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x18024B264 (-SetGreenDisable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ.c)
 *     ?SetRedDisable@?$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ_N@Z @ 0x18024E690 (-SetRedDisable@-$CTableTransferEffectGeneratedT@VCTableTransferEffect@@VCFilterEffect@@@@QEAAJ_N.c)
 */

__int64 __fastcall CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetProperty(
        _QWORD *a1,
        int a2,
        int a3,
        char *a4)
{
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 16;
  if ( (unsigned int)(a2 - 16) <= 0x3FF )
  {
    v5 = a1[45];
    v6 = v4;
    if ( v4 >= (unsigned __int64)((a1[46] - v5) >> 2) || a3 != 18 )
    {
      v7 = 13494LL;
LABEL_5:
      v8 = -2147024809;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    goto LABEL_18;
  }
  v10 = a2 - 1041;
  if ( (unsigned int)(a2 - 1041) <= 0x3FF )
  {
    v5 = a1[48];
    v6 = v10;
    if ( v10 >= (unsigned __int64)((a1[49] - v5) >> 2) || a3 != 18 )
    {
      v7 = 13502LL;
      goto LABEL_5;
    }
    goto LABEL_18;
  }
  v11 = a2 - 2066;
  if ( (unsigned int)(a2 - 2066) <= 0x3FF )
  {
    v5 = a1[51];
    v6 = v11;
    if ( v11 >= (unsigned __int64)((a1[52] - v5) >> 2) || a3 != 18 )
    {
      v7 = 13510LL;
      goto LABEL_5;
    }
    goto LABEL_18;
  }
  v12 = a2 - 3091;
  if ( (unsigned int)(a2 - 3091) <= 0x3FF )
  {
    v5 = a1[54];
    v6 = v12;
    if ( v12 >= (unsigned __int64)((a1[55] - v5) >> 2) || a3 != 18 )
    {
      v7 = 13518LL;
      goto LABEL_5;
    }
LABEL_18:
    *(_DWORD *)(v5 + 4 * v6) = *(_DWORD *)a4;
    return 0LL;
  }
  v13 = a2 - 10;
  if ( !v13 )
  {
    if ( a3 != 17 )
    {
      v7 = 13526LL;
      goto LABEL_5;
    }
    v8 = CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetRedDisable((__int64)a1, *a4);
    if ( v8 < 0 )
    {
      v7 = 13527LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a3 != 17 )
    {
      v7 = 13531LL;
      goto LABEL_5;
    }
    v8 = CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetGreenDisable((__int64)a1, *a4);
    if ( v8 < 0 )
    {
      v7 = 13532LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( a3 != 17 )
    {
      v7 = 13536LL;
      goto LABEL_5;
    }
    v8 = CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetBlueDisable((__int64)a1, *a4);
    if ( v8 < 0 )
    {
      v7 = 13537LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( a3 != 17 )
    {
      v7 = 13541LL;
      goto LABEL_5;
    }
    v8 = CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetAlphaDisable((__int64)a1, *a4);
    if ( v8 < 0 )
    {
      v7 = 13542LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  if ( v16 == 1 )
  {
    if ( a3 != 17 )
    {
      v7 = 13546LL;
      goto LABEL_5;
    }
    v8 = CTableTransferEffectGeneratedT<CTableTransferEffect,CFilterEffect>::SetClampOutput((__int64)a1, *a4);
    if ( v8 < 0 )
    {
      v7 = 13547LL;
      goto LABEL_6;
    }
    return 0LL;
  }
  return 2147942487LL;
}
