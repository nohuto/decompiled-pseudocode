/*
 * XREFs of ?PreDrawSceneOnSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x180280C70
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1802079A0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAVCSceneSurfaceMaterialInput@@@Z @ 0x180280E00 (-ApplyInputToSpectreResource@CScenePbrMaterial@@IEAAXPEAUISpectreMaterial@@V-$basic_string@DU-$c.c)
 *     ?PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z @ 0x180281130 (-PreDrawSceneOnSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CSceneMetallicRoughnessMaterial::PreDrawSceneOnSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  CScenePbrMaterial::PreDrawSceneOnSpectreResource(this, a2);
  v4 = *((_QWORD *)this + 22);
  v5 = std::string::string((__int64)v8, (__int64)"Material/DiffuseTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource(this, a2, v5, v4);
  v6 = *((_QWORD *)this + 23);
  v7 = std::string::string((__int64)v8, (__int64)"Material/SpecularTexture");
  CScenePbrMaterial::ApplyInputToSpectreResource(this, a2, v7, v6);
}
