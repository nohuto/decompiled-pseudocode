/*
 * XREFs of ??1VirtualDesktopSwitchedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1802CD8BC
 * Callers:
 *     ?SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z @ 0x180533884 (-SwitchDesktopInternalPrivate@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktop.c)
 *     _CVirtualDesktopManager::SwitchDesktopInternalPrivate_::_1_::dtor$1 @ 0x1806CBCF1 (_CVirtualDesktopManager--SwitchDesktopInternalPrivate_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180158820 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::~VirtualDesktopSwitchedActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopSwitchedActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
