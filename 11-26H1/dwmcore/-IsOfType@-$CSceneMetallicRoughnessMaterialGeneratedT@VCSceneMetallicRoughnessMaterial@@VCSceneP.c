/*
 * XREFs of ?IsOfType@?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180249100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSceneMetallicRoughnessMaterialGeneratedT<CSceneMetallicRoughnessMaterial,CScenePbrMaterial>::IsOfType(
        __int64 a1,
        int a2)
{
  unsigned int v2; // edx
  int v3; // eax
  bool result; // al

  v2 = a2 - 118;
  result = 0;
  if ( v2 <= 8 )
  {
    v3 = 401;
    if ( _bittest(&v3, v2) )
      return 1;
  }
  return result;
}
