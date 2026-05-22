/*
 * XREFs of ??1?$map@KIU?$less@K@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAA@XZ @ 0x180109874
 * Callers:
 *     _ControllerProcessor::SetVirtualKeyState_::_1_::dtor$13 @ 0x1801D7030 (_ControllerProcessor--SetVirtualKeyState_--_1_--dtor$13.c)
 *     _GamepadInterceptionHelper::GamepadInterceptionHelper_::_1_::dtor$4 @ 0x1801DADBA (_GamepadInterceptionHelper--GamepadInterceptionHelper_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::map<unsigned long,unsigned int>::~map<unsigned long,unsigned int>(_QWORD *a1)
{
  return std::_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,enum DockableDeviceCollection::DeviceEnumerationState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum DockableDeviceCollection::DeviceEnumerationState>>,0>>(a1);
}
