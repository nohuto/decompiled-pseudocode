/*
 * XREFs of ?SetCoordinateSpaceVisual@?$CPositionedLightGeneratedT@VCPositionedLight@@VCLight@@@@QEAAJPEAVCVisual@@@Z @ 0x18024AC1C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 *     ?IssueLightChangedNotification@CLight@@QEAAXXZ @ 0x18021B488 (-IssueLightChangedNotification@CLight@@QEAAXXZ.c)
 *     ?RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z @ 0x180232138 (-RegisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z.c)
 *     ?UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z @ 0x180232194 (-UnregisterLightCoordspace@CPreWalkVisual@@SAXPEAVCVisual@@PEAVCPositionedLight@@@Z.c)
 */

__int64 __fastcall CPositionedLightGeneratedT<CPositionedLight,CLight>::SetCoordinateSpaceVisual(
        struct CPositionedLight *a1,
        struct CResource *a2)
{
  struct CResource **v2; // rdi
  struct CVisual *v4; // rcx

  v2 = (struct CResource **)((char *)a1 + 232);
  v4 = (struct CVisual *)*((_QWORD *)a1 + 29);
  if ( a2 != v4 )
  {
    if ( *((_BYTE *)a1 + 80) && v4 )
      CPreWalkVisual::UnregisterLightCoordspace(v4, a1);
    CResource::ReplaceNotifier<CSceneMaterialInput>(a1, v2, a2);
    if ( *((_BYTE *)a1 + 80) && *v2 )
      CPreWalkVisual::RegisterLightCoordspace(*v2, a1);
    CLight::IssueLightChangedNotification(a1);
  }
  return 0LL;
}
