/*
 * XREFs of ?GetDolbyVisionCaps@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_DVLL_CAPS@@@Z @ 0x140099350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetDolbyVisionCaps(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_DVLL_CAPS *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_DVLL_CAPS *))(**((_QWORD **)this + 1) + 168LL))(
           *((_QWORD *)this + 1),
           a2);
}
