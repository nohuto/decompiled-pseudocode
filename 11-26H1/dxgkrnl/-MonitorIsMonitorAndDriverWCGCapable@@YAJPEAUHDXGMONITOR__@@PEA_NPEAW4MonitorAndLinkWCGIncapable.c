/*
 * XREFs of ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362930
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362A3C (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLI_ea_140362A3C.c)
 */

__int64 __fastcall MonitorIsMonitorAndDriverWCGCapable(
        struct HDXGMONITOR__ *a1,
        bool *a2,
        enum MonitorAndLinkWCGIncapableReason *a3)
{
  __int64 v6; // rax
  int v7; // eax
  DxgMonitor::MonitorColorState *v8; // rcx
  void *v10; // [rsp+20h] [rbp-30h] BYREF
  struct HDXGMONITOR__ *v11; // [rsp+28h] [rbp-28h]
  struct HDXGMONITOR__ *v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+8h]

  if ( !a1 )
    return 3221225485LL;
  *a2 = 0;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  v11 = 0LL;
  v10 = retaddr;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v10);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  v11 = a1;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v10);
  v12 = a1;
  MonitorResourceLock::AcquireShared((PERESOURCE)((char *)a1 + 40));
  v13[0] = retaddr;
  v6 = 2LL;
  do
  {
    v13[1] = a1;
    --v6;
  }
  while ( v6 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v13);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  if ( (*((_BYTE *)a1 + 177) & 2) != 0 )
  {
    v7 = *((_DWORD *)a1 + 85);
    v8 = (DxgMonitor::MonitorColorState *)*((_QWORD *)a1 + 28);
    v10 = *(void **)((char *)a1 + 332);
    LODWORD(v11) = v7;
    DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(v8, (const struct _DXGK_MONITORLINKINFO *)&v10, a2, a3);
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v12);
  return 0LL;
}
