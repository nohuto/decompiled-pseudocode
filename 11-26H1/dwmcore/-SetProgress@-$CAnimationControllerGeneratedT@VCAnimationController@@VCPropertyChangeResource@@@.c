/*
 * XREFs of ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x18024C8E4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?SetProperty@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@MEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1802192E4 (-SetProperty@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 *     ?SetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180269A30 (-SetProperty@CAnimationController@@EEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 * Callees:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800232A8 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProgress(
        float *a1,
        float a2)
{
  float v2; // xmm0_4

  v2 = fminf(1.0, fmaxf(a2, 0.0));
  if ( v2 != a1[20] )
  {
    a1[20] = v2;
    CAnimationController::OnProgressChanged((CAnimationController *)a1);
  }
  return 0LL;
}
