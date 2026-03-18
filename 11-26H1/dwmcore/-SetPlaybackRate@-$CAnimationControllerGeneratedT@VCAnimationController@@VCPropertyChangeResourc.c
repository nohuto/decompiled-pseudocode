/*
 * XREFs of ?SetPlaybackRate@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x18024C82C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802192E4 (-SetProperty@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 *     ?SetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180269A30 (-SetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 * Callees:
 *     ?OnPlaybackRateChanged@CAnimationController@@QEAAXXZ @ 0x1801DB7C0 (-OnPlaybackRateChanged@CAnimationController@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetPlaybackRate(
        float *a1,
        float a2)
{
  if ( a2 != a1[21] )
  {
    a1[21] = a2;
    CAnimationController::OnPlaybackRateChanged((CAnimationController *)a1);
  }
  return 0LL;
}
