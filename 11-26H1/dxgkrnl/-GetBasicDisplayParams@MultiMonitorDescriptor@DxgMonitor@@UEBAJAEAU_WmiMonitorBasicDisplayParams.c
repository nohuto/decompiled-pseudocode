/*
 * XREFs of ?GetBasicDisplayParams@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorBasicDisplayParams@@@Z @ 0x140099250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetBasicDisplayParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _WmiMonitorBasicDisplayParams *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _WmiMonitorBasicDisplayParams *))(**((_QWORD **)this + 2) + 136LL))(
           *((_QWORD *)this + 2),
           a2);
}
