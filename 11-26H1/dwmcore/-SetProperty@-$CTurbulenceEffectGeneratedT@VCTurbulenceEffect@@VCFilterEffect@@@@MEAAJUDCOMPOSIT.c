/*
 * XREFs of ?SetProperty@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180285EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetBaseFrequency@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_VECTOR_2F@@@Z @ 0x18024A068 (-SetBaseFrequency@-$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_.c)
 *     ?SetOffset@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024C4F0 (-SetOffset@-$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_POINT_2.c)
 *     ?SetSize@?$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_POINT_2F@@@Z @ 0x18024E8D4 (-SetSize@-$CTurbulenceEffectGeneratedT@VCTurbulenceEffect@@VCFilterEffect@@@@QEAAJUD2D_POINT_2F@.c)
 */

__int64 __fastcall CTurbulenceEffectGeneratedT<CTurbulenceEffect,CFilterEffect>::SetProperty(
        __int64 a1,
        int a2,
        int a3,
        __int64 *a4)
{
  int v4; // edx
  int v5; // edx
  __int64 v7; // rdx
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a2 - 10;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return 2147942487LL;
      if ( a3 != 35 )
      {
        v7 = 16306LL;
LABEL_15:
        v8 = -2147024809;
        goto LABEL_16;
      }
      v8 = CTurbulenceEffectGeneratedT<CTurbulenceEffect,CFilterEffect>::SetSize(a1, *a4);
      if ( v8 < 0 )
      {
        v7 = 16307LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
    }
    else
    {
      if ( a3 != 35 )
      {
        v7 = 16301LL;
        goto LABEL_15;
      }
      v8 = CTurbulenceEffectGeneratedT<CTurbulenceEffect,CFilterEffect>::SetBaseFrequency(a1, *a4);
      if ( v8 < 0 )
      {
        v7 = 16302LL;
        goto LABEL_16;
      }
    }
  }
  else
  {
    if ( a3 != 35 )
    {
      v7 = 16296LL;
      goto LABEL_15;
    }
    v8 = CTurbulenceEffectGeneratedT<CTurbulenceEffect,CFilterEffect>::SetOffset(a1, *a4);
    if ( v8 < 0 )
    {
      v7 = 16297LL;
      goto LABEL_16;
    }
  }
  return 0LL;
}
