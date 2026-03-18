/*
 * XREFs of ?ApplyMetallicRoughnessFactorToSpectreResource@CSceneMetallicRoughnessMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280A84
 * Callers:
 *     ?IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x180280AB0 (-IntializeSpectreResource@CSceneMetallicRoughnessMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 *     ?OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x180280B80 (-OnMetallicFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 *     ?OnRoughnessFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ @ 0x180280BF4 (-OnRoughnessFactorChanged@CSceneMetallicRoughnessMaterial@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CSceneMetallicRoughnessMaterial::ApplyMetallicRoughnessFactorToSpectreResource(
        CSceneMetallicRoughnessMaterial *this,
        struct ISpectreMaterial *a2)
{
  (*(void (__fastcall **)(struct ISpectreMaterial *))(*(_QWORD *)a2 + 64LL))(a2);
}
