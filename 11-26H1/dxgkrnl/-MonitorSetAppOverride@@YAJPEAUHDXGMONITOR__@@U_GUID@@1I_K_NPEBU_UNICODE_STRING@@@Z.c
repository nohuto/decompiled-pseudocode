/*
 * XREFs of ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x140194F34
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x1400354BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14027E0EC (-SetAppOverride@MonitorUsageState@DxgMonitor@@QEAAJU_GUID@@0I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1E48 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403E244C (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x14041BAA8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 *     ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x14041D59C (-RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z.c)
 */

__int64 __fastcall MonitorSetAppOverride(
        struct HDXGMONITOR__ *a1,
        struct _GUID *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int64 a5,
        bool a6,
        const struct _UNICODE_STRING *a7)
{
  int v11; // ebx
  DXGMONITOR *v12; // rdi
  __int64 v13; // rax
  struct _GUID v14; // xmm1
  struct DXGGLOBAL *Global; // rax
  unsigned int v16; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  DXGMONITOR *v19; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[24]; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v21; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID Buf1; // [rsp+80h] [rbp-80h] BYREF
  void **v23; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+98h] [rbp-68h]
  _BYTE v25[96]; // [rsp+A0h] [rbp-60h] BYREF
  int v26; // [rsp+100h] [rbp+0h]

  if ( a1 )
  {
    v24 = 0LL;
    v23 = &MonitorEventDeferral::`vftable';
    memset(v25, 0, sizeof(v25));
    v26 = 0;
    MONITOR_MGR::AcquireMonitorExclusive(&v19, (__int64)a1);
    v12 = v19;
    if ( v19 )
    {
      v13 = *((_QWORD *)v19 + 21);
      v14 = *a2;
      v21 = *a3;
      Buf1 = v14;
      v24 = (v13 + 8) & -(__int64)(v13 != 0);
      v11 = DxgMonitor::MonitorUsageState::SetAppOverride(
              *((DxgMonitor::MonitorUsageState **)v19 + 30),
              &Buf1,
              &v21,
              a4,
              a5,
              a6,
              a7);
      if ( v11 >= 0 )
      {
        if ( !memcmp(a2, &GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED, 0x10uLL) )
        {
          Global = DXGGLOBAL::GetGlobal();
          DXGGLOBAL::RecordFeatureUsage(Global, 12LL, 1LL);
        }
        DXGMONITOR::OnUsageUpdated(v12, (struct DxgMonitor::IMonitorDeferredEventSource *)&v23, 1);
        v16 = *(_DWORD *)(*((_QWORD *)v12 + 30) + 16LL);
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v19);
        LOBYTE(v18[0]) = 0;
        CDisplayScenarioContextScope::ContextScopeConstructor(v18, 0LL, 0x43u, v16);
        MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v23, v18[1]);
        CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v18);
        v11 = 0;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 6409;
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v19);
      }
      MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)&v23);
    }
    else
    {
      v11 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6404;
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v20);
      if ( v19 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v19 + 40));
        KeLeaveCriticalRegion();
      }
      v23 = &MonitorEventDeferral::`vftable';
      if ( v26 && v24 )
        MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v23, 0LL);
    }
  }
  else
  {
    v11 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6396;
  }
  return (unsigned int)v11;
}
