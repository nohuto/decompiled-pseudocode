/*
 * XREFs of ?OutputMatchesMonitorTarget@CCompositionSwapchainStatistics@@CA_NAEBUPresentationOutputID@@AEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A8FE8
 * Callers:
 *     ?RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A8B30 (-RecordCompositionStats@CCompositionSwapchainStatistics@@UEAA_N_NW4BufferCompositionMode@@0AEBVC.c)
 *     ?ConfirmRecordedStatistics@CCompositionSwapchainStatistics@@UEAAXAEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A8FB0 (-ConfirmRecordedStatistics@CCompositionSwapchainStatistics@@UEAAXAEBUtagCOMPOSITION_TARGET_ID@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSwapchainStatistics::OutputMatchesMonitorTarget(
        const struct PresentationOutputID *a1,
        const struct tagCOMPOSITION_TARGET_ID *a2)
{
  return *(_DWORD *)a1 == *(_DWORD *)a2
      && *((_DWORD *)a1 + 1) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)a1 + 3) == *((_DWORD *)a2 + 6)
      && *((_DWORD *)a1 + 2) == *((_DWORD *)a2 + 4)
      && *((_DWORD *)a1 + 4) == *((_DWORD *)a2 + 2)
      && *((_DWORD *)a1 + 5) == *((_DWORD *)a2 + 3);
}
