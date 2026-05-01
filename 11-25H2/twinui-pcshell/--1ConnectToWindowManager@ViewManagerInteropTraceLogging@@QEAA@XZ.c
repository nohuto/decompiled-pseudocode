/*
 * XREFs of ??1ConnectToWindowManager@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1802CD49C
 * Callers:
 *     ?WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ @ 0x18009A750 (-WaitForWindowManagerConnection@UwpWindowManagerBridge@@UEAAJXZ.c)
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x180420800 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 *     _UwpWindowManagerBridge::WaitForWindowManagerConnection_::_1_::dtor$0 @ 0x1806A9339 (_UwpWindowManagerBridge--WaitForWindowManagerConnection_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006F698 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall ViewManagerInteropTraceLogging::ConnectToWindowManager::~ConnectToWindowManager(
        ViewManagerInteropTraceLogging::ConnectToWindowManager *this)
{
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::ConnectToWindowManager::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
