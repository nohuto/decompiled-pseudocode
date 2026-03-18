/*
 * XREFs of ?ApplyAlphaCutoffToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280DAC
 * Callers:
 *     ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x180280EE0 (-IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 *     ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ @ 0x180280F54 (-OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CScenePbrMaterial::ApplyAlphaCutoffToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 24LL))(a2);
}
