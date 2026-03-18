/*
 * XREFs of ?SetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DCB0
 * Callers:
 *     ?SetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18024DB90 (-SetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetEmissiveFactor@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2D_VECTOR_3F@@@Z @ 0x18024B078 (-SetEmissiveFactor@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJUD2.c)
 *     ?SetIsDoubleSided@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z @ 0x18024B94C (-SetIsDoubleSided@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z.c)
 *     ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ @ 0x180280F54 (-OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18028103C (-OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ.c)
 *     ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802810B0 (-OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetProperty(
        CScenePbrMaterial *a1,
        int a2,
        int a3,
        __int64 a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v8; // rdx
  int IsDoubleSided; // ebx
  int v10; // eax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  int v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    if ( a3 != 18 )
    {
      v8 = 10583LL;
      goto LABEL_25;
    }
    if ( *(float *)a4 != *((float *)a1 + 24) )
    {
      *((_DWORD *)a1 + 24) = *(_DWORD *)a4;
      CScenePbrMaterial::OnAlphaCutoffChanged(a1);
    }
    return 0LL;
  }
  v4 = a2 - 3;
  if ( !v4 )
  {
    if ( a3 != 52 )
    {
      v8 = 10588LL;
      goto LABEL_25;
    }
    v10 = *(_DWORD *)(a4 + 8);
    v11 = *(_QWORD *)a4;
    v12 = v10;
    IsDoubleSided = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetEmissiveFactor(a1, &v11);
    if ( IsDoubleSided >= 0 )
      return 0LL;
    v8 = 10589LL;
    goto LABEL_26;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    if ( a3 != 17 )
    {
      v8 = 10593LL;
      goto LABEL_25;
    }
    IsDoubleSided = CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetIsDoubleSided(a1, *(_BYTE *)a4);
    if ( IsDoubleSided >= 0 )
      return 0LL;
    v8 = 10594LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"OnecoreUAP\\private\\Windows\\inc\\private\\compgen\\engine_resource_templates.h",
      (const char *)(unsigned int)IsDoubleSided);
    return (unsigned int)IsDoubleSided;
  }
  v6 = v5 - 2;
  if ( v6 )
  {
    if ( v6 != 2 )
      return 2147942487LL;
    if ( a3 != 18 )
    {
      v8 = 10603LL;
LABEL_25:
      IsDoubleSided = -2147024809;
      goto LABEL_26;
    }
    if ( *(float *)a4 != *((float *)a1 + 31) )
    {
      *((_DWORD *)a1 + 31) = *(_DWORD *)a4;
      CScenePbrMaterial::OnOcclusionStrengthChanged(a1);
    }
  }
  else
  {
    if ( a3 != 18 )
    {
      v8 = 10598LL;
      goto LABEL_25;
    }
    if ( *(float *)a4 != *((float *)a1 + 30) )
    {
      *((_DWORD *)a1 + 30) = *(_DWORD *)a4;
      CScenePbrMaterial::OnNormalScaleChanged(a1);
    }
  }
  return 0LL;
}
