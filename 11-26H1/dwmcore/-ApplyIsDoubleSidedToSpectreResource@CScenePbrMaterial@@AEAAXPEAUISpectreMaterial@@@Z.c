/*
 * XREFs of ?ApplyIsDoubleSidedToSpectreResource@CScenePbrMaterial@@AEAAXPEAUISpectreMaterial@@@Z @ 0x180280E8C
 * Callers:
 *     ?SetIsDoubleSided@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z @ 0x18024B94C (-SetIsDoubleSided@-$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJ_N@Z.c)
 *     ?IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z @ 0x180280EE0 (-IntializeSpectreResource@CScenePbrMaterial@@MEAAXPEAUISpectreMaterial@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScenePbrMaterial::ApplyIsDoubleSidedToSpectreResource(
        CScenePbrMaterial *this,
        struct ISpectreMaterial *a2)
{
  __int64 v2; // rax
  struct ISpectreMaterial *v3; // r8

  v2 = *(_QWORD *)a2;
  v3 = a2;
  LOBYTE(a2) = *((_BYTE *)this + 116);
  (*(void (__fastcall **)(struct ISpectreMaterial *, struct ISpectreMaterial *))(v2 + 56))(v3, a2);
}
