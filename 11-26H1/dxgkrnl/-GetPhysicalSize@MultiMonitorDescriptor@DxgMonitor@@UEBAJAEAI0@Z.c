/*
 * XREFs of ?GetPhysicalSize@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAI0@Z @ 0x140099460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetPhysicalSize(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 2) + 208LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
