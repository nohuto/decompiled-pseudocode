/*
 * XREFs of ?SetRootVisual@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJPEAVCVisual@@@Z @ 0x18021E814
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z @ 0x180152B24 (--$ReplaceNotifier@VCSceneMaterialInput@@@CResource@@QEAAXPEAPEAVCSceneMaterialInput@@PEAV1@@Z.c)
 *     ?OnRootVisualChanged@CCaptureController@@IEAAXXZ @ 0x18021E848 (-OnRootVisualChanged@CCaptureController@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetRootVisual(
        struct CResource **this,
        struct CResource *a2)
{
  if ( a2 != this[13] )
  {
    CResource::ReplaceNotifier<CSceneMaterialInput>((CResource *)this, this + 13, a2);
    CCaptureController::OnRootVisualChanged((CCaptureController *)this);
  }
  return 0LL;
}
