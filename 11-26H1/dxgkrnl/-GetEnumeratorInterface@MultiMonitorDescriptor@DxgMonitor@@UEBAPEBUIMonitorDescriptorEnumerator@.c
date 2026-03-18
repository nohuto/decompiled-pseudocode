/*
 * XREFs of ?GetEnumeratorInterface@MultiMonitorDescriptor@DxgMonitor@@UEBAPEBUIMonitorDescriptorEnumerator@2@XZ @ 0x140099380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

const struct DxgMonitor::IMonitorDescriptorEnumerator *__fastcall DxgMonitor::MultiMonitorDescriptor::GetEnumeratorInterface(
        DxgMonitor::MultiMonitorDescriptor *this)
{
  return (const struct DxgMonitor::IMonitorDescriptorEnumerator *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1));
}
