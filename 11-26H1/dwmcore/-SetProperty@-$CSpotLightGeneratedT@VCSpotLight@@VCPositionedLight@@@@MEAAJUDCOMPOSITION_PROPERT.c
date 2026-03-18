/*
 * XREFs of ?SetProperty@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024E000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetConstantAttenuation@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024AAC8 (-SetConstantAttenuation@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetDirection@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024AE64 (-SetDirection@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z.c)
 *     ?SetInnerConeAngle@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024B4D0 (-SetInnerConeAngle@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetInnerConeColor@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024B514 (-SetInnerConeColor@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE.c)
 *     ?SetInnerConeIntensity@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024B590 (-SetInnerConeIntensity@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetLinearAttenuation@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024BC1C (-SetLinearAttenuation@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetMaxAttenuationCutoff@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024C08C (-SetMaxAttenuationCutoff@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetQuadraticAttenuation@?$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024C1EC (-SetQuadraticAttenuation@-$CPointLightGeneratedT@VCPointLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetOffset@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024C464 (-SetOffset@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJUD2D_VECTOR_3F@@@Z.c)
 *     ?SetOuterConeAngle@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024C6B0 (-SetOuterConeAngle@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetOuterConeColor@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18024C6F4 (-SetOuterConeColor@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJU_D3DCOLORVALUE.c)
 *     ?SetOuterConeIntensity@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024C770 (-SetOuterConeIntensity@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 *     ?SetProperty@?$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024D5F0 (-SetProperty@-$CLightGeneratedT@VCLight@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY.c)
 *     ?SetQuadraticAttenuation@?$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z @ 0x18024E600 (-SetQuadraticAttenuation@-$CSpotLightGeneratedT@VCSpotLight@@VCPositionedLight@@@@QEAAJM@Z.c)
 */

__int64 __fastcall CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetProperty(
        CPositionedLight *a1,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  __int64 v4; // rdx
  int v5; // ebx
  int v6; // eax
  int v8; // eax
  __int128 v9; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]

  if ( a2 > 0xA )
  {
    switch ( a2 )
    {
      case 0xBu:
        if ( a3 != 18 )
        {
          v4 = 11862LL;
          goto LABEL_31;
        }
        v5 = CPointLightGeneratedT<CPointLight,CPositionedLight>::SetQuadraticAttenuation(a1, *(float *)a4);
        if ( v5 < 0 )
        {
          v4 = 11863LL;
          goto LABEL_32;
        }
        break;
      case 0xCu:
        if ( a3 != 52 )
        {
          v4 = 11867LL;
          goto LABEL_31;
        }
        v8 = *(_DWORD *)(a4 + 8);
        *(_QWORD *)&v9 = *(_QWORD *)a4;
        DWORD2(v9) = v8;
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetOffset(a1, (__int64 *)&v9);
        if ( v5 < 0 )
        {
          v4 = 11868LL;
          goto LABEL_32;
        }
        break;
      case 0xDu:
        if ( a3 != 18 )
        {
          v4 = 11872LL;
          goto LABEL_31;
        }
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetOuterConeAngle(a1, *(float *)a4);
        if ( v5 < 0 )
        {
          v4 = 11873LL;
          goto LABEL_32;
        }
        break;
      case 0xEu:
        if ( a3 != 70 )
        {
          v4 = 11877LL;
          goto LABEL_31;
        }
        v9 = *(_OWORD *)a4;
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetOuterConeColor(a1, &v9);
        if ( v5 < 0 )
        {
          v4 = 11878LL;
          goto LABEL_32;
        }
        break;
      case 0xFu:
        if ( a3 != 18 )
        {
          v4 = 11882LL;
          goto LABEL_31;
        }
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetOuterConeIntensity(a1, *(float *)a4);
        if ( v5 < 0 )
        {
          v4 = 11883LL;
          goto LABEL_32;
        }
        break;
      case 0x10u:
        if ( a3 != 18 )
        {
          v4 = 11887LL;
          goto LABEL_31;
        }
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetQuadraticAttenuation(a1);
        if ( v5 < 0 )
        {
          v4 = 11888LL;
          goto LABEL_32;
        }
        break;
      default:
        return CLightGeneratedT<CLight,CPropertyChangeResource>::SetProperty(a1, a2, a3, (char *)a4);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 0xAu:
        if ( a3 != 18 )
        {
          v4 = 11857LL;
          goto LABEL_31;
        }
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetMaxAttenuationCutoff(a1, *(float *)a4);
        if ( v5 < 0 )
        {
          v4 = 11858LL;
          goto LABEL_32;
        }
        break;
      case 4u:
        if ( a3 != 18 )
        {
          v4 = 11827LL;
          goto LABEL_31;
        }
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetConstantAttenuation(a1, *(float *)a4);
        if ( v5 < 0 )
        {
          v4 = 11828LL;
          goto LABEL_32;
        }
        break;
      case 5u:
        if ( a3 != 52 )
        {
          v4 = 11832LL;
          goto LABEL_31;
        }
        v6 = *(_DWORD *)(a4 + 8);
        *(_QWORD *)&v9 = *(_QWORD *)a4;
        DWORD2(v9) = v6;
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetDirection(a1, (const struct D2D_VECTOR_3F *)&v9);
        if ( v5 < 0 )
        {
          v4 = 11833LL;
          goto LABEL_32;
        }
        break;
      case 6u:
        if ( a3 != 18 )
        {
          v4 = 11837LL;
          goto LABEL_31;
        }
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetInnerConeAngle(a1, *(float *)a4);
        if ( v5 < 0 )
        {
          v4 = 11838LL;
          goto LABEL_32;
        }
        break;
      case 7u:
        if ( a3 != 70 )
        {
          v4 = 11842LL;
          goto LABEL_31;
        }
        v9 = *(_OWORD *)a4;
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetInnerConeColor(a1, &v9);
        if ( v5 < 0 )
        {
          v4 = 11843LL;
          goto LABEL_32;
        }
        break;
      case 8u:
        if ( a3 != 18 )
        {
          v4 = 11847LL;
          goto LABEL_31;
        }
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetInnerConeIntensity(a1, *(float *)a4);
        if ( v5 < 0 )
        {
          v4 = 11848LL;
          goto LABEL_32;
        }
        return 0LL;
      case 9u:
        if ( a3 != 18 )
        {
          v4 = 11852LL;
LABEL_31:
          v5 = -2147024809;
          goto LABEL_32;
        }
        v5 = CSpotLightGeneratedT<CSpotLight,CPositionedLight>::SetLinearAttenuation(a1, *(float *)a4);
        if ( v5 < 0 )
        {
          v4 = 11853LL;
LABEL_32:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v4,
            (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
            (const char *)(unsigned int)v5);
          return (unsigned int)v5;
        }
        return 0LL;
      default:
        return CLightGeneratedT<CLight,CPropertyChangeResource>::SetProperty(a1, a2, a3, (char *)a4);
    }
  }
  return 0LL;
}
