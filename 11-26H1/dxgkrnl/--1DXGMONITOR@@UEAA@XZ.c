/*
 * XREFs of ??1DXGMONITOR@@UEAA@XZ @ 0x1404238D0
 * Callers:
 *     ??_GDXGMONITOR@@UEAAPEAXI@Z @ 0x140098930 (--_GDXGMONITOR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCFlipManagerSignal@@U?$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@QEAAXPEAVCFlipManagerSignal@@@Z @ 0x140018A24 (-reset@-$unique_ptr@VCFlipManagerSignal@@U-$default_delete@VCFlipManagerSignal@@@wistd@@@wistd@@.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x140039D50 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?reset@?$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U?$default_delete@VMonitorDescriptorState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorDescriptorState@DxgMonitor@@@Z @ 0x140063FB0 (-reset@-$unique_ptr@VMonitorDescriptorState@DxgMonitor@@U-$default_delete@VMonitorDescriptorStat.c)
 *     ?_IsMonitorInMonitorPendingList@MONITOR_MGR@@QEAA_NPEAVDXGMONITOR@@@Z @ 0x14006A340 (-_IsMonitorInMonitorPendingList@MONITOR_MGR@@QEAA_NPEAVDXGMONITOR@@@Z.c)
 *     ?reset@?$unique_ptr@VMonitorUsb4State@DxgMonitor@@U?$default_delete@VMonitorUsb4State@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorUsb4State@DxgMonitor@@@Z @ 0x14006CA84 (-reset@-$unique_ptr@VMonitorUsb4State@DxgMonitor@@U-$default_delete@VMonitorUsb4State@DxgMonitor.c)
 *     ?reset@?$unique_ptr@VMonitorPnpState@DxgMonitor@@U?$default_delete@VMonitorPnpState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorPnpState@DxgMonitor@@@Z @ 0x14006CAB4 (-reset@-$unique_ptr@VMonitorPnpState@DxgMonitor@@U-$default_delete@VMonitorPnpState@DxgMonitor@@.c)
 *     ?reset@?$unique_ptr@VMonitorMipiDsiState@DxgMonitor@@U?$default_delete@VMonitorMipiDsiState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorMipiDsiState@DxgMonitor@@@Z @ 0x14006CAE4 (-reset@-$unique_ptr@VMonitorMipiDsiState@DxgMonitor@@U-$default_delete@VMonitorMipiDsiState@DxgM.c)
 *     ?reset@?$unique_ptr@VMonitorGammaState@DxgMonitor@@U?$default_delete@VMonitorGammaState@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorGammaState@DxgMonitor@@@Z @ 0x14006CB14 (-reset@-$unique_ptr@VMonitorGammaState@DxgMonitor@@U-$default_delete@VMonitorGammaState@DxgMonit.c)
 *     ?reset@?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorModes@DxgMonitor@@@Z @ 0x14006CB44 (-reset@-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_delete@VMonitorModes@DxgMonitor@@@wistd.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z @ 0x140098970 (--_GMonitorDataStore@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::~DXGMONITOR(DXGMONITOR *this)
{
  DXGMONITOR **v2; // rdx
  DXGMONITOR **v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  DxgMonitor::MonitorDataStore *v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &DXGMONITOR::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 2) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorComponentParent'};
  *((_QWORD *)this + 3) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorRegistryRoot'};
  *((_QWORD *)this + 4) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorDxgiGammaSource'};
  if ( !MONITOR_MGR::_IsMonitorInMonitorPendingList(*((MONITOR_MGR **)this + 21), this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 105;
  }
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v8, (struct DXGFASTMUTEX *)(*((_QWORD *)this + 21) + 104LL));
  v2 = (DXGMONITOR **)*((_QWORD *)this + 19);
  if ( v2[1] != (DXGMONITOR *)((char *)this + 152)
    || (v3 = (DXGMONITOR **)*((_QWORD *)this + 20), *v3 != (DXGMONITOR *)((char *)this + 152)) )
  {
    __fastfail(3u);
  }
  *v3 = (DXGMONITOR *)v2;
  v2[1] = (DXGMONITOR *)v3;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v8);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGMONITOR *)((char *)this + 896));
  MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)this + 368));
  MONITOR_REF_ACCESSOR::Release((DXGMONITOR *)((char *)this + 288));
  v4 = (void *)*((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = 0LL;
  if ( v4 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v4);
  wistd::unique_ptr<DxgMonitor::MonitorUsb4State,wistd::default_delete<DxgMonitor::MonitorUsb4State>>::reset(
    (DxgMonitor::MonitorUsb4State **)this + 33,
    0LL);
  wistd::unique_ptr<DxgMonitor::MonitorMipiDsiState,wistd::default_delete<DxgMonitor::MonitorMipiDsiState>>::reset(
    (__int64 *)this + 32,
    0LL);
  wistd::unique_ptr<DxgMonitor::MonitorGammaState,wistd::default_delete<DxgMonitor::MonitorGammaState>>::reset(
    (DxgMonitor::MonitorGammaState **)this + 31,
    0LL);
  v5 = (void *)*((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = 0LL;
  if ( v5 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
  wistd::unique_ptr<DxgMonitor::MonitorModes,wistd::default_delete<DxgMonitor::MonitorModes>>::reset(
    (DxgMonitor::MonitorModes **)this + 29,
    0LL);
  v6 = (void *)*((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = 0LL;
  if ( v6 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  wistd::unique_ptr<DxgMonitor::MonitorDescriptorState,wistd::default_delete<DxgMonitor::MonitorDescriptorState>>::reset(
    (struct _ERESOURCE **)this + 27,
    0LL);
  v7 = (DxgMonitor::MonitorDataStore *)*((_QWORD *)this + 26);
  *((_QWORD *)this + 26) = 0LL;
  if ( v7 )
    DxgMonitor::MonitorDataStore::`scalar deleting destructor'(v7, 1);
  wistd::unique_ptr<DxgMonitor::MonitorPnpState,wistd::default_delete<DxgMonitor::MonitorPnpState>>::reset(
    (DxgMonitor::MonitorPnpState **)this + 25,
    0LL);
  wistd::unique_ptr<CFlipManagerSignal,wistd::default_delete<CFlipManagerSignal>>::reset(
    (__int64 (__fastcall ****)(_QWORD, __int64))this + 24,
    0LL);
  ExDeleteResourceLite((PERESOURCE)((char *)this + 40));
  ReferenceCounted::~ReferenceCounted(this);
}
