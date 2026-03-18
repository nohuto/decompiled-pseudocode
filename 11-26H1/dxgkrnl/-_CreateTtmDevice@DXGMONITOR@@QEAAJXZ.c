/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x140191E54
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274CF8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402CDC34 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403E244C (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140055544 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x140346A10 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x14037BDC8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  char *v5; // rbp
  char *v6; // rax
  char *v7; // rbx
  int CCDMonitorID; // esi
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r9
  int TtmDevice; // eax

  if ( *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) )
  {
    v3 = WdLogNewEntry5_WdTrace(this, a2);
    *(_QWORD *)(v3 + 24) = this;
    *(_QWORD *)(v3 + 32) = -1073741637LL;
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 3711;
    return result;
  }
  v5 = (char *)this + 448;
  if ( *((_QWORD *)this + 56) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
    result = 0LL;
    WdLogGlobalForLineNumber = 3717;
    return result;
  }
  v6 = (char *)operator new[](0x208uLL, 0x4D677844u, 256LL);
  v7 = v6;
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 3724;
    return result;
  }
  if ( !MONITOR_MGR::_UsingCCDNameForTTM )
  {
    CCDMonitorID = RtlStringCchCopyUnicodeString(
                     v6,
                     260LL,
                     (const struct _UNICODE_STRING *)(*((_QWORD *)this + 25) + 48LL));
    if ( CCDMonitorID < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3734;
      goto LABEL_15;
    }
LABEL_12:
    Global = DXGGLOBAL::GetGlobal();
    v10 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL);
    TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                  *((_QWORD *)Global + 123),
                  (*((unsigned __int8 *)this + 176) >> 1) & 1 | (*((_DWORD *)this + 70) != 1 ? 2 : 0),
                  *(_QWORD *)(v10 + 216),
                  v10,
                  *((_DWORD *)this + 45),
                  (*((unsigned __int8 *)this + 176) >> 1) & 1 | (*((_DWORD *)this + 70) != 1 ? 2 : 0),
                  v7,
                  v5);
    CCDMonitorID = TtmDevice;
    if ( TtmDevice >= 0 )
    {
      CCDMonitorID = 0;
    }
    else
    {
      WdLogSingleEntry3(2LL, this, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL), TtmDevice);
      WdLogGlobalForLineNumber = 3757;
    }
    goto LABEL_15;
  }
  CCDMonitorID = DXGMONITOR::GetCCDMonitorID((DXGMONITOR *)((char *)this + 16), 1, 0x104u, (unsigned __int16 *)v6);
  if ( CCDMonitorID >= 0 )
    goto LABEL_12;
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 3729;
LABEL_15:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
  return (unsigned int)CCDMonitorID;
}
