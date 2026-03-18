/*
 * XREFs of ?SetProperty@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024CAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetColor@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A808 (-SetColor@-$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 *     ?SetIntensity@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@QEAAJM@Z @ 0x18024B620 (-SetIntensity@-$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CAmbientLightGeneratedT<CAmbientLight,CLight>::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  __int64 v5; // rdx
  int v6; // ebx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 3 )
  {
    if ( a3 != 70 )
    {
      v5 = 2273LL;
      goto LABEL_10;
    }
    v7 = *(_OWORD *)a4;
    v6 = CAmbientLightGeneratedT<CAmbientLight,CLight>::SetColor(a1, &v7);
    if ( v6 < 0 )
    {
      v5 = 2274LL;
      goto LABEL_11;
    }
  }
  else
  {
    if ( a2 != 4 )
      return CLightGeneratedT<CLight,CPropertyChangeResource>::SetProperty();
    if ( a3 != 18 )
    {
      v5 = 2278LL;
LABEL_10:
      v6 = -2147024809;
      goto LABEL_11;
    }
    v6 = CAmbientLightGeneratedT<CAmbientLight,CLight>::SetIntensity(a1, *a4);
    if ( v6 < 0 )
    {
      v5 = 2279LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  return 0LL;
}
