/*
 * XREFs of ?SetServerSurface@?$CRemoteTextureGeneratedT@VCRemoteTexture@@VCContent@@@@QEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x18021E6CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteTextureGeneratedT<CRemoteTexture,CContent>::SetServerSurface(
        struct CResource **a1,
        struct CResource *a2)
{
  if ( a2 != a1[11] )
  {
    CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)a1, a1 + 11, a2);
    (*((void (__fastcall **)(struct CResource **, _QWORD, _QWORD))*a1 + 10))(a1, 0LL, 0LL);
  }
  return 0LL;
}
