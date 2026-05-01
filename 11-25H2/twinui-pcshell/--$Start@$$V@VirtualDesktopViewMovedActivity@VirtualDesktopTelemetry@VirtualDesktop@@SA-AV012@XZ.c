/*
 * XREFs of ??$Start@$$V@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@SA?AV012@XZ @ 0x18052CE78
 * Callers:
 *     ?MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x1805302E0 (-MoveViewToDesktopFromApiInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtua.c)
 *     ?MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180530390 (-MoveViewToDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDeskto.c)
 * Callees:
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180296D24 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     ?StartActivity@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x18053170C (-StartActivity@VirtualDesktopViewMovedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 */

VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *__fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::Start<>(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity *this)
{
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"VirtualDesktopViewMovedActivity");
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopViewMovedActivity::StartActivity(this);
  return this;
}
