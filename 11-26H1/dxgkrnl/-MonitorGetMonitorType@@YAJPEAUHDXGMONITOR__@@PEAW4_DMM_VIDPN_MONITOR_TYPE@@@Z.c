/*
 * XREFs of ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x140345E94
 * Callers:
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401CFE80 (DxgkHandleForceProjectionMonitor.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x140345868 (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x140347990 (DxgkQueryMonitorTypeLockHeld.c)
 * Callees:
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorGetMonitorType(struct HDXGMONITOR__ *a1, enum _DMM_VIDPN_MONITOR_TYPE *a2)
{
  void *v5; // [rsp+20h] [rbp-18h] BYREF
  struct HDXGMONITOR__ *v6; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  WdLogGlobalForLineNumber = 2514;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v5 = retaddr;
  v6 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v5);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v5);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v5);
  v6 = a1;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v5);
  *(_DWORD *)a2 = *((_DWORD *)a1 + 70);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v5);
  return 0LL;
}
