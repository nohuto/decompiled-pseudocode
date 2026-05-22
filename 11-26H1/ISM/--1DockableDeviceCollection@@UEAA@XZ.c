/*
 * XREFs of ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800DDB7C
 * Callers:
 *     ??_EDockableDeviceCollection@@UEAAPEAXI@Z @ 0x1800DDD80 (--_EDockableDeviceCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4DeviceEnumerationState@DockableDeviceCollection@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x18008A290 (--1-$_Tree@V-$_Tmap_traits@KW4DeviceEnumerationState@DockableDeviceCollection@@U-$less@K@std@@V-.c)
 */

void __fastcall DockableDeviceCollection::~DockableDeviceCollection(DockableDeviceCollection *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &DockableDeviceCollection::`vftable';
  std::_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>((_QWORD *)this + 346);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 345);
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
