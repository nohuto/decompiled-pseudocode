/*
 * XREFs of TriggerSDRWhiteLevelChangedWnf @ 0x1401D0690
 * Callers:
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026FF60 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140402F6C (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 TriggerSDRWhiteLevelChangedWnf()
{
  int updated; // eax
  __int64 v1; // rdi

  PsGetCurrentProcessSessionId();
  updated = ZwUpdateWnfStateData(&WNF_DX_SDR_WHITE_LEVEL_CHANGED, 0LL, 0LL);
  v1 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4960;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to trigger WNF_DX_SDR_WHITE_LEVEL_CHANGED WNF, Status = 0x%I64x",
      v1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v1;
}
