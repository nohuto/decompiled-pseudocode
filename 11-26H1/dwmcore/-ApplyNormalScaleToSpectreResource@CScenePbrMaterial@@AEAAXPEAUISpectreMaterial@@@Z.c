/*
 * XREFs of ?ApplyNormalScaleToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280EA8
 * Callers:
 *     ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x180280EE0 (-IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 *     ?OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ @ 0x18028103C (-OnNormalScaleChanged@CScenePbrMaterial@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CScenePbrMaterial::ApplyNormalScaleToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 72LL))(a2);
}
