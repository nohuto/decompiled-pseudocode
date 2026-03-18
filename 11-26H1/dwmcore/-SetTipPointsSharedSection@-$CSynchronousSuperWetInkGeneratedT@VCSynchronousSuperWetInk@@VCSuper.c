/*
 * XREFs of ?SetTipPointsSharedSection@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJPEAVCSharedSectionBase@@@Z @ 0x180219D4C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180219DBC (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::SetTipPointsSharedSection(
        struct CResource **this,
        struct CResource *a2)
{
  if ( a2 != this[24] )
  {
    CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)this, this + 24, a2);
    CSynchronousSuperWetInk::OnPropertyChanged((CSynchronousSuperWetInk *)this);
  }
  return 0LL;
}
