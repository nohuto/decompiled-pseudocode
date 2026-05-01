/*
 * XREFs of ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1801D4328
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1801364A0 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 * Callees:
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801D4400 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ?LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ @ 0x1801D4464 (-LoadPinnedMonitor@TabTipAdapterPolicy@KeyboardHosting@@AEAAPEAUHMONITOR__@@XZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors(KeyboardHosting::TabTipAdapterPolicy *this)
{
  HMONITOR v2; // rbx
  HMONITOR PinnedMonitor; // rax
  double v5; // xmm1_8
  __int64 v6; // rax
  double v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = MonitorFromWindow(0LL, 1u);
  KeyboardHosting::MonitorInformation::SetMonitor((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 232), v2);
  KeyboardHosting::MonitorInformation::SetMonitor((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 568), v2);
  PinnedMonitor = KeyboardHosting::TabTipAdapterPolicy::LoadPinnedMonitor(this);
  if ( PinnedMonitor )
    v2 = PinnedMonitor;
  KeyboardHosting::MonitorInformation::SetMonitor((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 400), v2);
  *((_BYTE *)this + 900) = 0;
  v7 = 0.0;
  if ( (unsigned int)GetMonitorSizeOverride(&v7) )
  {
    v5 = v7;
    if ( v7 >= 5.0 && v7 <= 100.0 )
    {
      v6 = *((_QWORD *)this + 27);
      *((_BYTE *)this + 900) = 1;
      *(double *)(v6 + 576) = v5;
      *(_BYTE *)(v6 + 568) = 1;
    }
  }
  return 0LL;
}
