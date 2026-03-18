/*
 * XREFs of ?MonitorIsConnectedMonitorDisabled@@YAJPEAUHDXGMONITOR__@@PEAE@Z @ 0x1403EF4B4
 * Callers:
 *     ?IsConnectedMonitorDisabled@DMMVIDEOPRESENTTARGET@@QEBAJAEAE@Z @ 0x1403EF450 (-IsConnectedMonitorDisabled@DMMVIDEOPRESENTTARGET@@QEBAJAEAE@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ @ 0x1403EF53C (-_IsMonitorDisabled@DXGMONITOR@@QEBA_NXZ.c)
 */

__int64 __fastcall MonitorIsConnectedMonitorDisabled(struct HDXGMONITOR__ *a1, unsigned __int8 *a2)
{
  DXGMONITOR *v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  *a2 = 0;
  MONITOR_MGR::AcquireMonitorShared(v4, (__int64)a1);
  if ( v4[0] )
  {
    *a2 = DXGMONITOR::_IsMonitorDisabled(v4[0]);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v4);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3611;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v4);
    return 3221226021LL;
  }
}
