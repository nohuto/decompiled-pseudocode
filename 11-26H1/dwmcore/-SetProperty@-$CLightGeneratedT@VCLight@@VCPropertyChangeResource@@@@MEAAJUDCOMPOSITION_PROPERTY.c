/*
 * XREFs of ?SetProperty@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D5F0
 * Callers:
 *     ?SetProperty@?$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024CAB0 (-SetProperty@-$CAmbientLightGeneratedT@VCAmbientLight@@VCLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID.c)
 *     ?SetProperty@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D3B0 (-SetProperty@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_P.c)
 *     ?SetProperty@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D660 (-SetProperty@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPE.c)
 *     ?SetProperty@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E000 (-SetProperty@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEnabled@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@QEAAJ_N@Z @ 0x18024B140 (-SetEnabled@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CLightGeneratedT<CLight,CPropertyChangeResource>::SetProperty(_BYTE *a1, int a2, int a3, char *a4)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
    return 2147942487LL;
  if ( a3 != 17 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x857,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v5 = CLightGeneratedT<CLight,CPropertyChangeResource>::SetEnabled(a1, *a4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x858,
    (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
    (const char *)(unsigned int)v5);
  return v6;
}
