/*
 * XREFs of ?SetOcclusionStrength@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x18024C368
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ @ 0x1802810B0 (-OnOcclusionStrengthChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetOcclusionStrength(
        float *a1,
        float a2)
{
  if ( a2 != a1[31] )
  {
    a1[31] = a2;
    CScenePbrMaterial::OnOcclusionStrengthChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
