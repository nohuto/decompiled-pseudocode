/*
 * XREFs of ?SetAlphaCutoff@?$CScenePbrMaterialGeneratedT@VCScenePbrMaterial@@VCSceneMaterial@@@@QEAAJM@Z @ 0x180249D80
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ @ 0x180280F54 (-OnAlphaCutoffChanged@CScenePbrMaterial@@QEAAXXZ.c)
 */

__int64 __fastcall CScenePbrMaterialGeneratedT<CScenePbrMaterial,CSceneMaterial>::SetAlphaCutoff(float *a1, float a2)
{
  if ( a2 != a1[24] )
  {
    a1[24] = a2;
    CScenePbrMaterial::OnAlphaCutoffChanged((CScenePbrMaterial *)a1);
  }
  return 0LL;
}
