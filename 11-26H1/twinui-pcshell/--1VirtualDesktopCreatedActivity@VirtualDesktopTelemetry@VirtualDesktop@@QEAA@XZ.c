/*
 * XREFs of ??1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1802C4E78
 * Callers:
 *     ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x180552460 (-CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z.c)
 *     _CVirtualDesktopManager::CreateDesktopInternal_::_1_::dtor$0 @ 0x1806F4048 (_CVirtualDesktopManager--CreateDesktopInternal_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18016DD20 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorT.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::~VirtualDesktopCreatedActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
