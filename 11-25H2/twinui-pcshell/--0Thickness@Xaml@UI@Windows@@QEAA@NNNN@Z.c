/*
 * XREFs of ??0Thickness@Xaml@UI@Windows@@QEAA@NNNN@Z @ 0x1806842B4
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180685C54 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ @ 0x18069558C (-CreateTaskViewTimelineControl@TaskViewFrame@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

Windows::UI::Xaml::Thickness *__fastcall Windows::UI::Xaml::Thickness::Thickness(
        Windows::UI::Xaml::Thickness *this,
        double a2,
        double a3,
        double a4,
        double a5)
{
  Windows::UI::Xaml::Thickness *result; // rax

  result = this;
  *((double *)this + 3) = a5;
  *(double *)this = a2;
  *((double *)this + 1) = a3;
  *((double *)this + 2) = a4;
  return result;
}
