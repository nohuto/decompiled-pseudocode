/*
 * XREFs of ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x180280EE0
 * Callers:
 *     ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x180280AB0 (-IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 * Callees:
 *     ?ApplyAlphaCutoffToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280DAC (-ApplyAlphaCutoffToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyAlphaModeToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280DC8 (-ApplyAlphaModeToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280DE4 (-ApplyEmissiveFactorToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyIsDoubleSidedToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280E8C (-ApplyIsDoubleSidedToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyNormalScaleToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280EA8 (-ApplyNormalScaleToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 *     ?ApplyOcclusionStrengthToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280EC4 (-ApplyOcclusionStrengthToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z.c)
 */

void __fastcall CScenePbrMaterial::IntializeSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2,
        bool *a3)
{
  *a3 = 0;
  CScenePbrMaterial::ApplyAlphaCutoffToSpectreResource(this, a2);
  CScenePbrMaterial::ApplyAlphaModeToSpectreResource(this, a2);
  CScenePbrMaterial::ApplyEmissiveFactorToSpectreResource(this, a2);
  CScenePbrMaterial::ApplyIsDoubleSidedToSpectreResource(this, a2);
  CScenePbrMaterial::ApplyNormalScaleToSpectreResource(this, a2);
  CScenePbrMaterial::ApplyOcclusionStrengthToSpectreResource(this, a2);
  *a3 = 1;
}
