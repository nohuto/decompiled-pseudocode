/*
 * XREFs of ?SetTexture@?$CCompositionDynamicTextureGeneratedT@VCCompositionDynamicTexture@@VCContent@@@@QEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x18021F498
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 */

__int64 __fastcall CCompositionDynamicTextureGeneratedT<CCompositionDynamicTexture,CContent>::SetTexture(
        struct CResource **a1,
        struct CResource *a2)
{
  if ( a2 != a1[9] )
    CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)a1, a1 + 9, a2);
  return 0LL;
}
