/*
 * XREFs of ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x180206924
 * Callers:
 *     ??0?$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMaterial@@@@IEAA@PEAVCComposition@@@Z @ 0x1801D2108 (--0-$CSceneMetallicRoughnessMaterialGeneratedT@VCSceneMetallicRoughnessMaterial@@VCScenePbrMater.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1802069C0 (-RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z.c)
 */

CSceneMaterial *__fastcall CSceneMaterial::CSceneMaterial(CSceneMaterial *this, struct CComposition *a2)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax

  *((_DWORD *)this + 2) = 0;
  v3 = (unsigned __int64)this + 72;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CSceneMaterial::`vftable'{for `CSceneMaterialGeneratedT<CSceneMaterial,CSceneObject>'};
  *((_QWORD *)this + 9) = &CSceneMetallicRoughnessMaterial::`vftable'{for `ISceneNotificationListener'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v4 = operator new(0x30uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)this + 10) = v4;
  CSceneResourceManager::RegisterSceneListener(
    *(CSceneResourceManager **)(*((_QWORD *)this + 3) + 672LL),
    (struct ISceneNotificationListener *)(v3 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  return this;
}
