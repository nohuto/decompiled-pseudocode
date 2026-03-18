/*
 * XREFs of ?GetColorDataRaw@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x140099280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetColorDataRaw(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_COLOR_DATA_RAW *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_COLOR_DATA_RAW *))(**((_QWORD **)this + 2) + 120LL))(
           *((_QWORD *)this + 2),
           a2);
}
