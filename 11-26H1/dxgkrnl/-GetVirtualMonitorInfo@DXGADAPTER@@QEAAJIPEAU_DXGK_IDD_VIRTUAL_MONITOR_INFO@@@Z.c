/*
 * XREFs of ?GetVirtualMonitorInfo@DXGADAPTER@@QEAAJIPEAU_DXGK_IDD_VIRTUAL_MONITOR_INFO@@@Z @ 0x140191220
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 *     ?IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403E91D4 (-IsVirtualSlate@CCD_TOPOLOGY@@AEAA_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z @ 0x140405140 (-OutputDuplPreIndirectPresent@@YAJPEAVDXGDEVICE@@IPEAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x140412E24 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGADAPTER::GetVirtualMonitorInfo(
        DXGADAPTER *this,
        __int64 a2,
        struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *a3)
{
  __int64 (__fastcall *v4)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *); // rax

  if ( (*((_DWORD *)this + 111) & 0x40000) != 0 )
  {
    v4 = (__int64 (__fastcall *)(_QWORD, __int64, struct _DXGK_IDD_VIRTUAL_MONITOR_INFO *))*((_QWORD *)this + 303);
    if ( v4 )
      return v4(*((_QWORD *)this + 292), a2, a3);
  }
  WdLogSingleEntry2(2LL, this, -1073741822LL);
  WdLogGlobalForLineNumber = 11422;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"GetVirtualMonitorInfo called on non-virtual adapter 0x%I64x, returning Status 0x%I64x",
    (__int64)this,
    -1073741822LL,
    0LL,
    0LL,
    0LL);
  return 3221225474LL;
}
