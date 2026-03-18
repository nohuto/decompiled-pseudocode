/*
 * XREFs of ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1802069C0
 * Callers:
 *     ??0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z @ 0x18020682C (--0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneMesh@@QEAA@PEAVCComposition@@@Z @ 0x1802068AC (--0CSceneMesh@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x180206924 (--0CSceneMaterial@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x180219AEC (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ?UpdateSceneLightInfo@CLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x180264E0C (-UpdateSceneLightInfo@CLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x18028857C (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180196E9C (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneResourceManager::RegisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  struct ISceneNotificationListener *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  v5 = (_QWORD *)((char *)this + 40);
  if ( v4 == (_QWORD *)v5[2] )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      v5,
      (__int64)v4,
      (__int64 *)&v7);
  }
  else
  {
    *v4 = a2;
    v5[1] += 8LL;
  }
  SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
  if ( SpectreRenderer )
    (**(void (__fastcall ***)(struct ISceneNotificationListener *, struct ISpectreRenderer *))a2)(a2, SpectreRenderer);
}
