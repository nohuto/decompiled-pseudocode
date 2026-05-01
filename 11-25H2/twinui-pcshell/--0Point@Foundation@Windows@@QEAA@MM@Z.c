/*
 * XREFs of ??0Point@Foundation@Windows@@QEAA@MM@Z @ 0x1802D009C
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180109A90 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 *     TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1 @ 0x180285B50 (TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1.c)
 *     _lambda_5b1893e84c025059ea9350e935de1321_::operator()_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_const_&_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoChangedEventArgs_const_&_ @ 0x180694460 (_lambda_5b1893e84c025059ea9350e935de1321_--operator()_winrt--WindowsUdk--UI--Shell--DisplayMonit.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

Windows::Foundation::Point *__fastcall Windows::Foundation::Point::Point(
        Windows::Foundation::Point *this,
        float a2,
        float a3)
{
  Windows::Foundation::Point *result; // rax

  *(float *)this = a2;
  result = this;
  *((float *)this + 1) = a3;
  return result;
}
