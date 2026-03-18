/*
 * XREFs of ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFFAC
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14003555C (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateMonitorDriverInterface@DxgMonitor@@YA?AV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@PEAUHDXGMONITOR__@@PEAVADAPTER_DISPLAY@@IPEAU_DEVICE_OBJECT@@@Z @ 0x14019146C (-CreateMonitorDriverInterface@DxgMonitor@@YA-AV-$unique_ptr@VIMonitorDriverInterface@DxgMonitor@.c)
 *     ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x140275E0C (--0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14031CED4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x140320470 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1403E0438 (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1E48 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x14041BAA8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateSimulatedMonitor(
        __int64 a1,
        unsigned int a2,
        int a3,
        struct MONITOR_REF_ACCESSOR *a4,
        MONITOR_REF_ACCESSOR *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v8; // r14
  DXGMONITOR *v9; // rdi
  __int64 v10; // rcx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v11; // ebx
  DXGMONITOR *v12; // rax
  __int64 v14; // rbx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+28h] [rbp-D8h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v18; // [rsp+40h] [rbp-C0h] BYREF
  void *v19; // [rsp+48h] [rbp-B8h] BYREF
  DXGMONITOR *v20; // [rsp+50h] [rbp-B0h]
  __int64 (__fastcall ***v21)(_QWORD, __int64); // [rsp+58h] [rbp-A8h] BYREF
  struct MONITOR_REF_ACCESSOR *v22; // [rsp+60h] [rbp-A0h]
  DXGMONITOR *v23[3]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v24[14]; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+F0h] [rbp-10h]
  void *retaddr; // [rsp+158h] [rbp+58h]

  v22 = a4;
  v8 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1948;
  }
  if ( a3 == 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1949;
  }
  MONITOR_REF_ACCESSOR::Release(a5);
  v9 = 0LL;
  if ( a3 == 5 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    v18 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(v10 + 16), v8, &v18, 0LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1961;
    }
    v11 = v18;
    if ( v18 == D3DKMDT_VOT_UNINITIALIZED )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1962;
    }
    if ( (unsigned int)v11 >= D3DKMDT_VOT_DVI
      && v11 != D3DKMDT_VOT_SDTVDONGLE
      && *(_BYTE *)(a1 + 19)
      && (!IsInternalVideoOutput(v11) || *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 3044LL) >= 1200) )
    {
      MONITOR_MGR::_EnableDisableMonitor(a1, 0xFFFFFFFFLL, 0LL, 8LL, 1uLL, (__int64)a6, 0LL);
    }
  }
  v19 = retaddr;
  v20 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v19);
  v12 = (DXGMONITOR *)operator new(0x3B0uLL, 0x4D677844u, 64LL);
  if ( v12 )
    v9 = DXGMONITOR::DXGMONITOR(v12, (struct MONITOR_MGR *)a1);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v19);
  v20 = v9;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v19);
  if ( v9 )
  {
    DxgMonitor::CreateMonitorDriverInterface((__int64 *)&v21, (__int64)v9, *(_QWORD *)(a1 + 24), v8, 0LL);
    if ( v21 )
    {
      LOBYTE(v17) = 0;
      LOBYTE(v16) = 0;
      v15 = DXGMONITOR::_InitializeMonitorNoDriver(v9, &v21, (unsigned int)v8, 0LL, v16, v17, a3, 0LL);
      LODWORD(v14) = v15;
      if ( v15 >= 0 )
      {
        v24[0] = &MonitorEventDeferral::`vftable';
        memset(&v24[2], 0, 0x60uLL);
        v25 = 0;
        v24[1] = a1 + 8;
        MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
          (MONITOR_REF_LOCK_ACCESSOR *)v23,
          (const struct MONITOR_REF_ACCESSOR *)&v19);
        v14 = (int)DXGMONITOR::_InitializeMonitorWithDriver(
                     v23[0],
                     v22,
                     (struct DxgMonitor::IMonitorDeferredEventSource *)v24,
                     a6);
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v23);
        MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v24, a6);
        if ( (int)v14 >= 0 )
        {
          MONITOR_REF_ACCESSOR::Release(a5);
          *(_QWORD *)a5 = v19;
          *((_QWORD *)a5 + 1) = v9;
          v20 = 0LL;
        }
        else
        {
          WdLogSingleEntry2(2LL, v8, v14);
          WdLogGlobalForLineNumber = 2064;
        }
        MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v24);
      }
      else
      {
        WdLogSingleEntry2(2LL, v8, v15);
        WdLogGlobalForLineNumber = 2040;
      }
    }
    else
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 2026;
      LODWORD(v14) = -1073741801;
    }
    wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(&v21, 0LL);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v19);
    return (unsigned int)v14;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2011;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v19);
    return 3221225495LL;
  }
}
