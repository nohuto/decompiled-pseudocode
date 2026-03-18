/*
 * XREFs of ?MonitorIsPhysicalMonitor@@YAEPEAUHDXGMONITOR__@@@Z @ 0x140194B64
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x14006AA6C (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

bool __fastcall MonitorIsPhysicalMonitor(struct HDXGMONITOR__ *a1)
{
  bool v1; // bl
  _QWORD v3[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( !a1 )
    return 0;
  MONITOR_MGR::AcquireMonitorShared(v3, (__int64)a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(v3[0] + 280LL) == 1;
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v3);
  return v1;
}
