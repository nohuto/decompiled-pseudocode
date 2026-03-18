/*
 * XREFs of ?GetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248450
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?GetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802484E0 (-GetProperty@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJUDCOMPOSI.c)
 */

__int64 __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  int v6; // xmm6_4

  if ( a2 == 10 )
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 69;
    *(_OWORD *)a3 = *(_OWORD *)(a1 + 152);
  }
  else
  {
    if ( a2 == 11 )
    {
      v6 = *(_DWORD *)(a1 + 168);
    }
    else
    {
      if ( a2 != 13 )
        return CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::GetProperty();
      v6 = *(_DWORD *)(a1 + 172);
    }
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v6;
    *((_DWORD *)a3 + 16) = 18;
  }
  return 0LL;
}
