/*
 * XREFs of ??1VirtualDesktopPinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180563EF0
 * Callers:
 *     ?PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x180564490 (-PinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _VirtualPinnedAppsHandler::PinView_::_1_::dtor$1 @ 0x1806F4731 (_VirtualPinnedAppsHandler--PinView_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1805529B4 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflector.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::~VirtualDesktopPinWindowActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinWindowActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
