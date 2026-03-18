/*
 * XREFs of ??0DXGMONITOR@@QEAA@PEAVMONITOR_MGR@@@Z @ 0x140275E0C
 * Callers:
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFFAC (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 * Callees:
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

DXGMONITOR *__fastcall DXGMONITOR::DXGMONITOR(DXGMONITOR *this, struct MONITOR_MGR *a2)
{
  char *v4; // rcx
  int v5; // r8d
  struct DXGMONITOR *v6; // rdx
  int v7; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int64 v12; // rax
  DXGMONITOR *result; // rax
  __int128 v14; // [rsp+20h] [rbp-18h]

  *(_QWORD *)this = &rc_buffer<DispBroker::AlpcRequest<7>>::`vftable';
  *((_DWORD *)this + 2) = 1;
  v4 = (char *)this + 40;
  *((_DWORD *)v4 + 26) = 25;
  ExInitializeResourceLite((PERESOURCE)v4);
  *(_QWORD *)this = &DXGMONITOR::`vftable'{for `ReferenceCounted'};
  *((_QWORD *)this + 2) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorComponentParent'};
  *((_QWORD *)this + 3) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorRegistryRoot'};
  *((_QWORD *)this + 4) = &DXGMONITOR::`vftable'{for `DxgMonitor::IMonitorDxgiGammaSource'};
  *(_OWORD *)((char *)this + 152) = 0LL;
  *((_QWORD *)this + 21) = a2;
  *((_DWORD *)this + 45) = -1;
  *((_DWORD *)this + 46) = -2;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((DXGMONITOR *)((char *)this + 288), 0LL);
  *((_DWORD *)this + 76) = v5;
  *((_DWORD *)this + 77) = v5;
  *((_DWORD *)this + 78) = v5;
  *(_QWORD *)((char *)this + 316) = 0LL;
  *(_QWORD *)((char *)this + 324) = 1LL;
  *(_QWORD *)((char *)this + 332) = 0LL;
  *((_DWORD *)this + 85) = 0;
  *((_BYTE *)this + 344) = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_BYTE *)this + 360) = 0;
  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((DXGMONITOR *)((char *)this + 368), v6);
  *((_BYTE *)this + 384) = 0;
  *(_OWORD *)((char *)this + 392) = 0LL;
  *(_OWORD *)((char *)this + 408) = 0LL;
  *(_OWORD *)((char *)this + 424) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  memset((char *)this + 480, v7, 0x13CuLL);
  DWORD2(v14) = 0;
  *((_QWORD *)this + 100) = L"MonitorOrientation";
  *(_QWORD *)&v14 = DXGMONITOR::_ValidateMonitorOrientation;
  v10 = v14;
  *((_QWORD *)this + 104) = L"DockedOrientation";
  *(_QWORD *)&v14 = DXGMONITOR::_ValidateDockingOrientation;
  *((_OWORD *)this + 51) = v10;
  *((_DWORD *)this + 202) = 308;
  *((_DWORD *)this + 203) = 312;
  *((_DWORD *)this + 210) = 316;
  *((_DWORD *)this + 211) = 320;
  DWORD2(v14) = 0;
  *((_QWORD *)this + 108) = L"EnableBoostRefreshRateByDefault";
  *((_DWORD *)this + 218) = 328;
  *((_DWORD *)this + 219) = 328;
  v11 = v14;
  *(_QWORD *)&v14 = DXGMONITOR::_ValidateBoolean;
  DWORD2(v14) = 0;
  *((_OWORD *)this + 53) = v11;
  *((_OWORD *)this + 55) = v14;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 232) = 0;
  *((_DWORD *)this + 233) = -1;
  *((_DWORD *)this + 234) = 1;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 70;
  }
  v12 = WdLogNewEntry5_WdTrace(v9, v8);
  *(_QWORD *)(v12 + 24) = this;
  *(_QWORD *)(v12 + 32) = a2;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 20) = (char *)this + 152;
  *((_QWORD *)this + 19) = (char *)this + 152;
  WdLogGlobalForLineNumber = 72;
  *((_QWORD *)this + 44) = MEMORY[0xFFFFF78000000014];
  result = this;
  *((_BYTE *)this + 344) = 0;
  return result;
}
