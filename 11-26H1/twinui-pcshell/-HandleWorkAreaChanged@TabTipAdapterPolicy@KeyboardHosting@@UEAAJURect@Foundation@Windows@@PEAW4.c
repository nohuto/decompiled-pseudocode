/*
 * XREFs of ?HandleWorkAreaChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x18024EDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x18016A1FC (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801BD9DC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z @ 0x1801D4400 (-SetMonitor@MonitorInformation@KeyboardHosting@@QEAAXPEAUHMONITOR__@@@Z.c)
 *     ??$HandleWorkAreaChanged@AEAMAEAMAEAMAEAMAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAM000AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180206830 (--$HandleWorkAreaChanged@AEAMAEAMAEAMAEAMAEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Tou.c)
 *     ?GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ @ 0x180476260 (-GetMonitorHandle@MonitorInformation@KeyboardHosting@@QEBAPEAUHMONITOR__@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleWorkAreaChanged(RTL_SRWLOCK *a1, int *a2, char *a3)
{
  int updated; // eax
  unsigned int v7; // esi
  HMONITOR CurrentMonitorWithRect; // rax
  HMONITOR v10; // rsi
  HMONITOR MonitorHandle; // rax
  HMONITOR Ptr; // rax
  float v13[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *(_DWORD *)a3 = 0;
  updated = UpdateScalingInfoCache();
  v7 = updated;
  if ( updated >= 0 )
  {
    *(_OWORD *)v13 = *(_OWORD *)a2;
    CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(v13);
    v10 = CurrentMonitorWithRect;
    if ( CurrentMonitorWithRect )
    {
      KeyboardHosting::MonitorInformation::SetMonitor(a1 + 27, CurrentMonitorWithRect);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
        MonitorHandle = KeyboardHosting::MonitorInformation::GetMonitorHandle((KeyboardHosting::MonitorInformation *)&a1[69]);
      else
        MonitorHandle = (HMONITOR)a1[69].Ptr;
      if ( v10 == MonitorHandle )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&a1[69]);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
        Ptr = KeyboardHosting::MonitorInformation::GetMonitorHandle((KeyboardHosting::MonitorInformation *)&a1[48]);
      else
        Ptr = (HMONITOR)a1[48].Ptr;
      if ( v10 == Ptr )
        KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&a1[48]);
    }
    *(_DWORD *)a3 = 3;
    TouchKeyboardExperienceTelemetryLogger::HandleWorkAreaChanged<float &,float &,float &,float &,enum Windows::Internal::Shell::Text::ShellRequestType &>(
      a2,
      a2 + 1,
      a2 + 2,
      a2 + 3,
      a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4DD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
    return v7;
  }
}
