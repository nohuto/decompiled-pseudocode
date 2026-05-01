/*
 * XREFs of ??1VirtualDesktopUnpinWindowActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180540134
 * Callers:
 *     ?UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z @ 0x1805428C0 (-UnpinView@VirtualPinnedAppsHandler@@UEAAJPEAUIApplicationView@@@Z.c)
 *     _VirtualPinnedAppsHandler::UnpinView_::_1_::dtor$1 @ 0x1806CC22C (_VirtualPinnedAppsHandler--UnpinView_--_1_--dtor$1.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18052F5EC (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflector.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::~VirtualDesktopUnpinWindowActivity(
        volatile signed __int32 **this)
{
  *this = (volatile signed __int32 *)&VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinWindowActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
