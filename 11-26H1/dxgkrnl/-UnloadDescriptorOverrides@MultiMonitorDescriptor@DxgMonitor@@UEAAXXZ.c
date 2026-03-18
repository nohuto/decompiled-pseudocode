/*
 * XREFs of ?UnloadDescriptorOverrides@MultiMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x140099670
 * Callers:
 *     <none>
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DxgMonitor::MultiMonitorDescriptor::UnloadDescriptorOverrides(DxgMonitor::MultiMonitorDescriptor *this)
{
  bool v2; // zf
  void (*v3)(void); // rax

  v2 = (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() == 0;
  v3 = *(void (**)(void))(**((_QWORD **)this + 1) + 40LL);
  if ( !v2 )
  {
    v3();
    v3 = *(void (**)(void))(**((_QWORD **)this + 2) + 40LL);
  }
  v3();
}
