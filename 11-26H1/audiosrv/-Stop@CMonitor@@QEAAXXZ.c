/*
 * XREFs of ?Stop@CMonitor@@QEAAXXZ @ 0x18012253C
 * Callers:
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x180060E94 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x18011D81C (-HandleDefaultDeviceChanges@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?Pause@CMonitorManager@@QEAAXXZ @ 0x18011F648 (-Pause@CMonitorManager@@QEAAXXZ.c)
 *     ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z @ 0x18011FB6C (-RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@_N@Z.c)
 *     ?StopIfRunning@CMonitor@@QEAAXXZ @ 0x180120210 (-StopIfRunning@CMonitor@@QEAAXXZ.c)
 *     ?HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z @ 0x18012119C (-HandleSessionDisconnected@CMonitor@@AEAAXW4AudioSessionDisconnectReason@@@Z.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180121240 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x180121988 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x180121A78 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x180121BFC (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801221D8 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180060CEC (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006110C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::Stop(CMonitor *this)
{
  _UNKNOWN **v2; // rcx
  __int64 v3; // rcx
  LPCRITICAL_SECTION v4[3]; // [rsp+20h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v4, (struct _RTL_CRITICAL_SECTION *)((char *)this + 32));
  v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x30u,
      (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids,
      this);
    v2 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 18) == 3 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 88LL))(*((_QWORD *)this + 13));
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 88LL))(*((_QWORD *)this + 20));
    *((_DWORD *)this + 18) = 4;
    v3 = *((_QWORD *)this + 23);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  }
  else if ( v2 != &WPP_GLOBAL_Control && (*((_DWORD *)v2 + 7) & 0x800000) != 0 && *((_BYTE *)v2 + 25) >= 4u )
  {
    WPP_SF_q((__int64)v2[2], 0x31u, (__int64)&WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids, this);
  }
  ATL::CCritSecLock::~CCritSecLock(v4);
}
