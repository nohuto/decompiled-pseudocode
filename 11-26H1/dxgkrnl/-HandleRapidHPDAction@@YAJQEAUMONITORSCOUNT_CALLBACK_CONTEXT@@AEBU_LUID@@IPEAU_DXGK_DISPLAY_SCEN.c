/*
 * XREFs of ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CF2D8
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1403ABC4C (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CDCB0 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkInvalidateMonitorConnections @ 0x1403ADA10 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ADC38 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 */

__int64 __fastcall HandleRapidHPDAction(
        struct MONITORSCOUNT_CALLBACK_CONTEXT *const a1,
        struct _LUID *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 result; // rax
  unsigned __int8 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)DxgkInvalidateMonitorConnections(2uLL) < 0 )
  {
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 4290;
  }
  *((_DWORD *)a1 + 8) |= 0x10u;
  v9 = 0;
  if ( (int)DisplayConfigHelperCreateSimulateMonitor(a2, a3, 3u, 0, &v9) >= 0 )
    *((_BYTE *)a1 + 26) = 0;
  result = DisplayConfigHandleMonitorInvalidation(1uLL, a1, a4);
  if ( (int)result < 0 )
  {
    WdLogSingleEntry1(4LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 4320;
  }
  return result;
}
