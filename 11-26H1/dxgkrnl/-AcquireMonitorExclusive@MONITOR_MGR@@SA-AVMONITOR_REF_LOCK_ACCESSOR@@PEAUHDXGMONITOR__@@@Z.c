/*
 * XREFs of ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x1400354BC
 * Callers:
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140194F34 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026E63C (-MonitorEnableDisableHdr@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026EAA0 (-MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z @ 0x14026FB48 (-MonitorSetHdrBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@@Z.c)
 *     ?MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14026FC0C (-MonitorSetHdrFlavor@@YAJPEAUHDXGMONITOR__@@W4_DISPLAYCONFIG_HDR_FLAVOR@@@Z.c)
 *     ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x14026FE6C (-MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z.c)
 *     ?MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z @ 0x140361CE4 (-MonitorSetDefaultAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x140361E40 (-MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFEREN.c)
 *     ?LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8B70 (-LogMonitorHandleOnOffState@@YAXQEAUHDXGMONITOR__@@AEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIG.c)
 *     ?MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z @ 0x140411FB0 (-MonitorSetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@_N1@Z.c)
 *     ?MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z @ 0x1404150BC (-MonitorSetAdvancedColorParams@@YAJPEAUHDXGMONITOR__@@PEAI111KKK@Z.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14006D4BC (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorExclusive(_QWORD *a1, __int64 a2)
{
  struct DXGMONITOR *v4; // rdx
  void *v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = retaddr;
  v7 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v6);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v6);
  if ( a2 )
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v6);
    v7 = a2;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v6);
    *a1 = a2;
    MonitorResourceLock::AcquireExclusive((PERESOURCE)(a2 + 40));
    a1[1] = retaddr;
    a1[2] = a2;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)(a1 + 1));
  }
  else
  {
    MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)a1, v4);
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v6);
  return a1;
}
