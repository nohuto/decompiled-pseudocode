/*
 * XREFs of ??0Size@Foundation@Windows@@QEAA@MM@Z @ 0x18009E0DC
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18009B7CC (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 *     ?CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x18009D65C (-CreateAltTabControl@XamlAltTabViewHost@@AEAAPE$AAVAltTab@Switcher@Experiences@ComposableShell@W.c)
 *     ?CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x180213660 (-CreateListViewModel@TaskViewFrame@@AEAAPE$AAVSwitchItemListViewModel@Switcher@Experiences@Compo.c)
 *     ?CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experiences@ComposableShell@WindowsInternal@@XZ @ 0x1806A106C (-CreateGamingTaskViewControl@XamlGamingTaskViewHost@@AEAAPE$AAVGamingTaskView@Switcher@Experienc.c)
 *     ?Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x1806A2870 (-Show@XamlGamingTaskViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x1806BCC9C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

Windows::Foundation::Size *__fastcall Windows::Foundation::Size::Size(
        Windows::Foundation::Size *this,
        float a2,
        float a3)
{
  Windows::Foundation::Size *result; // rax

  if ( a2 < 0.0 || a3 < 0.0 )
  {
    __abi_WinRTraiseInvalidArgumentException();
    __debugbreak();
    JUMPOUT(0x18009E10CLL);
  }
  *(float *)this = a2;
  result = this;
  *((float *)this + 1) = a3;
  return result;
}
