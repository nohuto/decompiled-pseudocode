/*
 * XREFs of ?MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x1403FF8A0
 * Callers:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x14031E890 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x140437F40 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x1403FF964 (-GetDisplayIdDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z.c)
 */

__int64 __fastcall MonitorGetDisplayIDFromMonitor(
        struct HDXGMONITOR__ *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  unsigned int DisplayIdDescriptorRaw; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0;
  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v9, (__int64)a1);
    if ( v9[0] )
    {
      DisplayIdDescriptorRaw = DxgMonitor::MonitorDescriptorState::GetDisplayIdDescriptorRaw(
                                 *(DxgMonitor::MonitorDescriptorState **)(v9[0] + 216LL),
                                 a2,
                                 a3,
                                 a4);
    }
    else
    {
      DisplayIdDescriptorRaw = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3573;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v9);
  }
  else
  {
    DisplayIdDescriptorRaw = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3570;
  }
  return DisplayIdDescriptorRaw;
}
