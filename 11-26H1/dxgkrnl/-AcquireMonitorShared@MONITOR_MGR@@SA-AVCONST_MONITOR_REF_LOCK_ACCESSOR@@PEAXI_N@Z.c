/*
 * XREFs of ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140035738
 * Callers:
 *     ?MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z @ 0x14026F244 (-MonitorGetMonitorDescriptorIDs@@YAJPEAXIPEAU_DXGK_GENERIC_DESCRIPTOR@@@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1402AAE98 (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?MonitorGetDeviceObject@@YAJPEAXIPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x14031FC04 (-MonitorGetDeviceObject@@YAJPEAXIPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403451A4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x140345F38 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x140347990 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x140381104 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0298 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z @ 0x1403F1494 (-MonitorGetDpiInfoFromDescriptor@@YAJPEAXIPEAUDISPLAY_PREFERRED_MODE_INFO@@PEAI2PEA_N3@Z.c)
 *     ?MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z @ 0x1403F6F4C (-MonitorIsBoostRefreshRateEnabledByDefault@@YAJPEAXIPEA_N@Z.c)
 *     ?MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z @ 0x140400CA0 (-MonitorGetPreferredScaleFactor@@YAJPEAXIPEAI@Z.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1404085E8 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     ?MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z @ 0x140408D18 (-MonitorGetContainerIDFromDescriptor@@YAJPEAXIPEAU_GUID@@@Z.c)
 *     DpiPdoHandleQueryDeviceText @ 0x1404100F0 (DpiPdoHandleQueryDeviceText.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x1400985E4 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorShared(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  MONITOR_MGR *v8; // r10
  __int64 v9; // rdi
  struct DXGMONITOR *v11; // rdx
  void *v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*(_QWORD *)(a2 + 3160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 782;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a2 + 3160) + 112LL) )
  {
    v12 = retaddr;
    v13 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v12);
    MONITOR_MGR::_GetMonitorInstance(v8, a3, a4, (struct MONITOR_REF_ACCESSOR *)&v12);
    v9 = v13;
    *a1 = v13;
    if ( v9 )
      MonitorResourceLock::AcquireShared((PERESOURCE)(v9 + 40));
    a1[1] = retaddr;
    a1[2] = v9;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)(a1 + 1));
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v12);
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 791;
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)a1, v11);
  }
  return a1;
}
