/*
 * XREFs of ?GetProperty@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802484E0
 * Callers:
 *     ?GetProperty@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180248450 (-GetProperty@-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCSce.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::GetProperty(
        __int64 a1,
        int a2,
        CExpressionValue *a3)
{
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v9; // xmm6_4
  char v10; // bl

  if ( !a2 )
  {
    v9 = *(_DWORD *)(a1 + 96);
LABEL_12:
    CExpressionValue::DestroyCurrent(a3);
    *(_DWORD *)a3 = v9;
    *((_DWORD *)a3 + 16) = 18;
    return 0LL;
  }
  v5 = a2 - 3;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 2;
      if ( v7 )
      {
        if ( v7 != 2 )
          return 2147942487LL;
        v9 = *(_DWORD *)(a1 + 124);
      }
      else
      {
        v9 = *(_DWORD *)(a1 + 120);
      }
      goto LABEL_12;
    }
    v10 = *(_BYTE *)(a1 + 116);
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 17;
    *(_BYTE *)a3 = v10;
  }
  else
  {
    CExpressionValue::DestroyCurrent(a3);
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)(a1 + 104);
    *((_DWORD *)a3 + 2) = *(_DWORD *)(a1 + 112);
  }
  return 0LL;
}
