/*
 * XREFs of ?SetProperty@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D660
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetColor@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024A918 (-SetColor@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 *     ?SetConstantAttenuation@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024AA84 (-SetConstantAttenuation@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetIntensity@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024B6B4 (-SetIntensity@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetLinearAttenuation@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024BBD8 (-SetLinearAttenuation@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetMaxAttenuationCutoff@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024C048 (-SetMaxAttenuationCutoff@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetMinAttenuationCutoff@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024C1A8 (-SetMinAttenuationCutoff@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetQuadraticAttenuation@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024C1EC (-SetQuadraticAttenuation@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetOffset@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024C3D8 (-SetOffset@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z.c)
 */

__int64 __fastcall CPointLightGeneratedT<CPointLight,CPositionedLight>::SetProperty(
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
        v5 = 4832LL;
        goto LABEL_40;
      }
      v8 = *(_OWORD *)a4;
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetColor(a1, &v8);
      if ( v6 < 0 )
      {
        v5 = 4833LL;
        goto LABEL_41;
      }
      break;
    case 5:
      if ( a3 != 18 )
      {
        v5 = 4837LL;
        goto LABEL_40;
      }
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetConstantAttenuation(a1, *(float *)a4);
      if ( v6 < 0 )
      {
        v5 = 4838LL;
        goto LABEL_41;
      }
      break;
    case 6:
      if ( a3 != 18 )
      {
        v5 = 4842LL;
        goto LABEL_40;
      }
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetIntensity(a1, *(float *)a4);
      if ( v6 < 0 )
      {
        v5 = 4843LL;
        goto LABEL_41;
      }
      break;
    case 7:
      if ( a3 != 18 )
      {
        v5 = 4847LL;
        goto LABEL_40;
      }
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetLinearAttenuation(a1, *(float *)a4);
      if ( v6 < 0 )
      {
        v5 = 4848LL;
        goto LABEL_41;
      }
      break;
    case 8:
      if ( a3 != 18 )
      {
        v5 = 4852LL;
        goto LABEL_40;
      }
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetMaxAttenuationCutoff(a1, *(float *)a4);
      if ( v6 < 0 )
      {
        v5 = 4853LL;
        goto LABEL_41;
      }
      break;
    case 9:
      if ( a3 != 18 )
      {
        v5 = 4857LL;
        goto LABEL_40;
      }
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetMinAttenuationCutoff(a1, *(float *)a4);
      if ( v6 < 0 )
      {
        v5 = 4858LL;
        goto LABEL_41;
      }
      break;
    case 10:
      if ( a3 != 52 )
      {
        v5 = 4862LL;
        goto LABEL_40;
      }
      v7 = *(_DWORD *)(a4 + 8);
      *(_QWORD *)&v8 = *(_QWORD *)a4;
      DWORD2(v8) = v7;
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetOffset(a1, (__int64 *)&v8);
      if ( v6 < 0 )
      {
        v5 = 4863LL;
        goto LABEL_41;
      }
      break;
    case 11:
      if ( a3 != 18 )
      {
        v5 = 4867LL;
LABEL_40:
        v6 = -2147024809;
        goto LABEL_41;
      }
      v6 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetQuadraticAttenuation(a1, *(float *)a4);
      if ( v6 < 0 )
      {
        v5 = 4868LL;
LABEL_41:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v5,
          (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
          (const char *)(unsigned int)v6);
        return (unsigned int)v6;
      }
      break;
    default:
      return CLightGeneratedT<CLight,CPropertyChangeResource>::SetProperty(a1, a2, a3, (char *)a4);
  }
  return 0LL;
}
