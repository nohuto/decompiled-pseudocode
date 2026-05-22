/*
 * XREFs of ??1GazeHidDevice@@UEAA@XZ @ 0x1800E0650
 * Callers:
 *     ??_EGazeHidDevice@@UEAAPEAXI@Z @ 0x1800DC290 (--_EGazeHidDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18008A290 (--1-$_Tree@V-$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U-$less@K@std@@V-.c)
 *     ??3@YAXPEAX@Z @ 0x18009B2C4 (--3@YAXPEAX@Z.c)
 *     ??1?$unique_ptr@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@U?$default_delete@U?$VariableSizedPayloadStorage@UGazeInputInfo@@@@@std@@@std@@QEAA@XZ @ 0x1800DC1D0 (--1-$unique_ptr@U-$VariableSizedPayloadStorage@UGazeInputInfo@@@@U-$default_delete@U-$VariableSi.c)
 */

void __fastcall GazeHidDevice::~GazeHidDevice(GazeHidDevice *this)
{
  void *v2; // rcx
  const struct std::nothrow_t *v3; // rdx

  *(_QWORD *)this = &GazeHidDevice::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  std::unique_ptr<VariableSizedPayloadStorage<GazeInputInfo>>::~unique_ptr<VariableSizedPayloadStorage<GazeInputInfo>>((_QWORD *)this + 28);
  std::_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>((_QWORD *)this + 25);
  HIDDevice::~HIDDevice(this, v3);
}
