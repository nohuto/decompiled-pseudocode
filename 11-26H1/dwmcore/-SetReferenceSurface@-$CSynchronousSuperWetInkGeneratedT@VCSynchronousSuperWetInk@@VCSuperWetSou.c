/*
 * XREFs of ?SetReferenceSurface@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x18021BB44
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180219DBC (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::SetReferenceSurface(
        CSynchronousSuperWetInk *this,
        struct CResource *a2)
{
  struct CResource **v2; // rsi
  struct CResource *v4; // rcx

  v2 = (struct CResource **)((char *)this + 184);
  v4 = (struct CResource *)*((_QWORD *)this + 23);
  if ( a2 != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v4 + 12) + 424LL))(*((_QWORD **)v4 + 12), 0LL);
    CResource::ReplaceNotifier<CSceneMaterialInput>(this, v2, a2);
    CSynchronousSuperWetInk::OnPropertyChanged(this);
  }
  return 0LL;
}
