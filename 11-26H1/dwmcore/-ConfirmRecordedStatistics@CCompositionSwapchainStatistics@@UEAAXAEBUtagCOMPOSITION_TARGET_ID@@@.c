/*
 * XREFs of ?ConfirmRecordedStatistics@CCompositionSwapchainStatistics@@UEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A8FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OutputMatchesMonitorTarget@CCompositionSwapchainStatistics@@CA_NAEBUPresentationOutputID@@AEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A8FE8 (-OutputMatchesMonitorTarget@CCompositionSwapchainStatistics@@CA_NAEBUPresentationOutputID@@AEBUt.c)
 */

void __fastcall CCompositionSwapchainStatistics::ConfirmRecordedStatistics(
        CCompositionSwapchainStatistics *this,
        const struct tagCOMPOSITION_TARGET_ID *a2)
{
  __int64 v2; // r9
  __int64 i; // r8
  __int64 v4; // r8

  v2 = *((_QWORD *)this + 4);
  for ( i = *((_QWORD *)this + 3); i != v2; i = v4 + 64 )
  {
    if ( CCompositionSwapchainStatistics::OutputMatchesMonitorTarget((const struct PresentationOutputID *)(i + 4), a2) )
      *(_BYTE *)(v4 + 60) = 1;
  }
}
