/*
 * XREFs of ?SetDefaultSDRBoost@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJM@Z @ 0x18024ADB4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ @ 0x18026A408 (-OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetDefaultSDRBoost(float *a1, float a2)
{
  if ( a2 != a1[22] )
  {
    a1[22] = a2;
    CCaptureController::OnDefaultSDRBoostChanged((CCaptureController *)a1);
  }
  return 0LL;
}
