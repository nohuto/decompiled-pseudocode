/*
 * XREFs of ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18022F4CC
 * Callers:
 *     ??1CLight@@MEAA@XZ @ 0x180264280 (--1CLight@@MEAA@XZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x18026AD80 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x18027F720 (--1CSceneMesh@@MEAA@XZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1802805B4 (--1CSceneMaterial@@MEAA@XZ.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1802818F4 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x180288790 (--1CSceneWorld@@MEAA@XZ.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180196E9C (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneResourceManager::UnregisterSceneListener(
        const __m128i **this,
        struct ISceneNotificationListener *a2)
{
  __m128i *trivial_8; // rdi
  struct ISpectreRenderer *SpectreRenderer; // rdx

  trivial_8 = (__m128i *)_std_find_trivial_8(this[5], this[6], (unsigned __int64)a2);
  if ( trivial_8 != this[6] )
  {
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer((CSceneResourceManager *)this);
    if ( SpectreRenderer )
      (*(void (__fastcall **)(struct ISceneNotificationListener *, struct ISpectreRenderer *))(*(_QWORD *)a2 + 8LL))(
        a2,
        SpectreRenderer);
    std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
      &trivial_8->m128i_u64[1],
      (__int64)this[6],
      trivial_8);
    this[6] = (const __m128i *)((char *)this[6] - 8);
  }
}
