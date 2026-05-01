/*
 * XREFs of ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801285B8
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180128064 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 * Callees:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180036D58 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x180128690 (-LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors(KeyboardHosting::TabTipAdapterPolicy *this)
{
  HMONITOR v2; // rbx
  HMONITOR PinnedMonitor; // rax
  KeyboardHosting::MonitorInformation *v4; // rcx
  double v6; // xmm1_8
  __int64 v7; // rax
  double v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = MonitorFromWindow(0LL, 1u);
  *((_QWORD *)this + 29) = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232));
  *((_QWORD *)this + 49) = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 392));
  PinnedMonitor = KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor(this);
  v4 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 312);
  if ( PinnedMonitor )
    v2 = PinnedMonitor;
  *(_QWORD *)v4 = v2;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v4);
  *((_BYTE *)this + 636) = 0;
  v8 = 0.0;
  if ( (unsigned int)GetMonitorSizeOverride(&v8) )
  {
    v6 = v8;
    if ( v8 >= 5.0 && v8 <= 100.0 )
    {
      v7 = *((_QWORD *)this + 27);
      *((_BYTE *)this + 636) = 1;
      *(double *)(v7 + 312) = v6;
      *(_BYTE *)(v7 + 304) = 1;
    }
  }
  return 0LL;
}
