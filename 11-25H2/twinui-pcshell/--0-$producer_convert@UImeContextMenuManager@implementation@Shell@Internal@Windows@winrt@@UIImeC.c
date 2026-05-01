/*
 * XREFs of ??0?$producer_convert@UImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UIImeContextMenuExperienceManager@@X@impl@winrt@@QEAA@XZ @ 0x1802CA204
 * Callers:
 *     ??0?$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V?$tuple@UIPenMenuSystemTrayManager@@@std@@@impl@winrt@@QEAA@XZ @ 0x18007AAF0 (--0-$producers_base@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@V-$tu.c)
 * Callees:
 *     ??0?$ChainInterfaces@UIBackOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@QEAA@XZ @ 0x18029D9A0 (--0-$ChainInterfaces@UIBackOperation@@UIAppLayoutOperationBuilder@@VNil@Details@WRL@Microsoft@@V.c)
 */

_QWORD *__fastcall winrt::impl::producer_convert<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,IImeContextMenuExperienceManager,void>::producer_convert<winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager,IImeContextMenuExperienceManager,void>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ChainInterfaces<IBackOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::ChainInterfaces<IBackOperation,IAppLayoutOperationBuilder,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>(a1);
  result = v1;
  *v1 = &winrt::impl::producers_base<GamingPosturePositioner,std::tuple<IGamingPosturePositioner,IBasicPositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IPositionerApplicationClosePolicy,IApplicationViewChangeListener,IInternalFullScreenHandler,IWindowManagementShowMoveSizeEvents>>::`vftable'{for `winrt::impl::producer_convert<GamingPosturePositioner,IInternalFullScreenHandler,void>'};
  return result;
}
