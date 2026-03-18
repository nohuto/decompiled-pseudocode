/*
 * XREFs of ?SetProperty@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetColor@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A918 (-SetColor@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 *     ?SetDirection@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024ADD8 (-SetDirection@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F.c)
 *     ?SetIntensity@?$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024B670 (-SetIntensity@-$CDistantLightGeneratedT@VCDistantLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CDistantLightGeneratedT<CDistantLight,CPositionedLight>::SetProperty(
        CPositionedLight *a1,
        int a2,
        int a3,
        __int64 a4)
{
  __int64 v5; // rdx
  int v6; // ebx
  int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  switch ( a2 )
  {
    case 4:
      if ( a3 != 70 )
      {
        v5 = 4428LL;
        goto LABEL_15;
      }
      v8 = *(_OWORD *)a4;
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetColor(a1, &v8);
      if ( v6 < 0 )
      {
        v5 = 4429LL;
        goto LABEL_16;
      }
      break;
    case 5:
      if ( a3 != 52 )
      {
        v5 = 4433LL;
        goto LABEL_15;
      }
      v7 = *(_DWORD *)(a4 + 8);
      *(_QWORD *)&v8 = *(_QWORD *)a4;
      DWORD2(v8) = v7;
      v6 = CDistantLightGeneratedT<CDistantLight,CPositionedLight>::SetDirection(a1, (const struct D2D_VECTOR_3F *)&v8);
      if ( v6 < 0 )
      {
        v5 = 4434LL;
        goto LABEL_16;
      }
      break;
    case 6:
      if ( a3 != 18 )
      {
        v5 = 4438LL;
LABEL_15:
        v6 = -2147024809;
        goto LABEL_16;
      }
      v6 = CDistantLightGeneratedT<CDistantLight,CPositionedLight>::SetIntensity(a1, *(float *)a4);
      if ( v6 < 0 )
      {
        v5 = 4439LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
      break;
    default:
      return CLightGeneratedT<CLight,CPropertyChangeResource>::SetProperty();
  }
  return 0LL;
}
