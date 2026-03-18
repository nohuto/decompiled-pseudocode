/*
 * XREFs of ?SetReferenceVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x18021E70C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 *     ?OnReferenceVisualChanged@CCaptureController@@IEAAXXZ @ 0x18021E740 (-OnReferenceVisualChanged@CCaptureController@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetReferenceVisual(
        struct CResource **this,
        struct CResource *a2)
{
  if ( a2 != this[15] )
  {
    CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)this, this + 15, a2);
    CCaptureController::OnReferenceVisualChanged((CCaptureController *)this);
  }
  return 0LL;
}
