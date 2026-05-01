/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1803E92E4
 * Callers:
 *     ??$MakeAndInitialize@VPWSLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutItem@@@Z @ 0x1803E9210 (--$MakeAndInitialize@VPWSLayoutItem@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutItem@@@Z.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIViewEventArgsForShowAsViewModeDesktop@ViewManagerInterop@Shell@Internal@Windows@@UIWindowingEnironmentSettingsArgsForImplicitEvent@5678@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18014C9D0 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIViewEventArgsForShowAsViewMod.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>(
        _QWORD *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewModeDesktop,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewModeDesktop,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>(a1);
  result = v1;
  *(_DWORD *)(v1 + 12) = 1;
  return result;
}
