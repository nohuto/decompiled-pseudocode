/*
 * XREFs of ?OpenMonitorDataStore@MonitorDataStore@DxgMonitor@@UEBAJ_NPEAPEAX@Z @ 0x14027F3A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::OpenMonitorDataStore(
        DxgMonitor::MonitorDataStore *this,
        __int64 a2,
        void **a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, void **))(**((_QWORD **)this + 2) + 8LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
