/*
 * XREFs of ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x140409F04
 * Callers:
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1400613C0 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@U?$default_delete@$$BY0A@V?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@@2@@wistd@@QEAAX$$T@Z @ 0x14003B024 (-reset@-$unique_ptr@$$BY0A@V-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWm.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x140409F64 (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::~EdidMonitorDescriptor(DxgMonitor::EdidMonitorDescriptor *this)
{
  *(_QWORD *)this = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
  *((_QWORD *)this + 1) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
  DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(this);
  wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset((__int64 *)this + 3);
  *((_DWORD *)this + 4) = 0;
  wistd::unique_ptr<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0],wistd::default_delete<wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>> [0]>>::reset((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &DxgMonitor::IMonitorDescriptorEnumerator::`vftable';
}
