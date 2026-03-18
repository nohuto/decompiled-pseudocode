/*
 * XREFs of ?MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x14026F244
 * Callers:
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x14025653C (DpiPdoGetDeviceIdFromDescriptor.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x140279DE0 (-GetMonitorDescriptorPnpIds@MonitorDescriptorState@DxgMonitor@@QEBAJPEAU_DXGK_GENERIC_DESCRIPTOR.c)
 */

__int64 __fastcall MonitorGetMonitorDescriptorIDs(__int64 a1, __int64 a2, struct _DXGK_GENERIC_DESCRIPTOR *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  unsigned int MonitorDescriptorPnpIds; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (unsigned int)a2;
  v6 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = a1;
  WdLogGlobalForLineNumber = 2182;
  if ( !a1 || !a3 || (_DWORD)v4 == -1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v9, a1, v4, 1u);
  if ( v9[0] )
  {
    MonitorDescriptorPnpIds = DxgMonitor::MonitorDescriptorState::GetMonitorDescriptorPnpIds(
                                *(DxgMonitor::MonitorDescriptorState **)(v9[0] + 216LL),
                                a3);
  }
  else
  {
    MonitorDescriptorPnpIds = -1073741275;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2194;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v9);
  return MonitorDescriptorPnpIds;
}
