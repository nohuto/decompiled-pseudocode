/*
 * XREFs of ?_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2000
 * Callers:
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x1403E17AC (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 */

void __fastcall MONITOR_MGR::_FlushPendingCreation(
        MONITOR_MGR *this,
        const struct MONITOR_REF_ACCESSOR *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v4; // rdx

  v4 = *((_QWORD *)a2 + 1);
  if ( *(_BYTE *)(v4 + 360) )
  {
    if ( (int)MONITOR_MGR::_HandleCreateMonitorStep2(
                this,
                *(_DWORD *)(v4 + 180),
                (const struct MONITOR_REF_ACCESSOR *)(v4 + 368),
                a2,
                a3) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 986;
    }
    if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 360LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 987;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)(*((_QWORD *)a2 + 1) + 368LL));
  }
}
