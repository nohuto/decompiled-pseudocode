/*
 * XREFs of ?IsEotf2084Supported@MultiMonitorDescriptor@DxgMonitor@@UEBA_NXZ @ 0x1400995B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::IsEotf2084Supported(DxgMonitor::MultiMonitorDescriptor *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 176LL))(*((_QWORD *)this + 2));
}
