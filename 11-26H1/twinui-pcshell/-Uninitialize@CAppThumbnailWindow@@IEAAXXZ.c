/*
 * XREFs of ?Uninitialize@CAppThumbnailWindow@@IEAAXXZ @ 0x1804A9DE8
 * Callers:
 *     wil::details::ScopeExitFn__lambda_cd90d5504872a379a3f69e209278eb0d___::_ScopeExitFn__lambda_cd90d5504872a379a3f69e209278eb0d___ @ 0x1804A2D6C (wil--details--ScopeExitFn__lambda_cd90d5504872a379a3f69e209278eb0d___--_ScopeExitFn__lambda_cd90.c)
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1804A3000 (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_41269503dd0ad4387f409c0b0bf30f63___::Invoke @ 0x1804A6920 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_1804A6920.c)
 *     DCompThumbnailHelpers::CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f88614e___lambda_44eacdbaa31ce0b6b52d99c4136aa723___::OnStoryboardStatusChanged @ 0x1804A6AB0 (DCompThumbnailHelpers--CAnimationCallbackHandler__lambda_7900d5c1cfc51d603dc477285f_ea_1804A6AB0.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18029FCBC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ @ 0x1802E7978 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_52580392@@@details@wil@@QEAA_NXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x18039F144 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180420334 (-clear@-$vector@V-$com_ptr_t@UIDCompThumbnail@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ?TriggerFired@?$consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner@UICompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUevent_token@3@@Z @ 0x1804A9748 (-TriggerFired@-$consume_Windows_UI_Composition_Internal_ICompositionAnimationTrigge_ea_1804A9748.c)
 */

void __fastcall CAppThumbnailWindow::Uninitialize(CAppThumbnailWindow *this)
{
  __int64 v2; // r8
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+10h] BYREF

  *((_BYTE *)this + 168) = 0;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 5);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 6);
  std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::clear((__int64 **)this + 9);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 7);
  std::vector<wil::com_ptr_t<IDCompThumbnail,wil::err_returncode_policy>>::clear((__int64 **)this + 12);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 8);
  *((_BYTE *)this + 169) = 0;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_52580392>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_52580392>::GetImpl'::`2'::impl) )
  {
    *((_BYTE *)this + 170) = 0;
    *((_BYTE *)this + 185) = 0;
  }
  *((_BYTE *)this + 184) = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>>::operator=((HWND *)this + 20);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
    1u,
    v2);
  v3 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 53, (__int64 *)&v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 52);
  v3 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 57, (__int64 *)&v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 56);
  v3 = 0LL;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 55, (__int64 *)&v3);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v3);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 54);
  v3 = 0LL;
  if ( winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 62, &v3) )
    winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
      (_QWORD *)this + 62,
      (_QWORD *)this + 61);
  v3 = 0LL;
  if ( winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 65, &v3) )
    winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
      (_QWORD *)this + 65,
      (_QWORD *)this + 64);
  v3 = 0LL;
  if ( winrt::Windows::Foundation::operator!=((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 60, &v3) )
    winrt::impl::consume_Windows_UI_Composition_Internal_ICompositionAnimationTriggerPartner<winrt::Windows::UI::Composition::Internal::ICompositionAnimationTriggerPartner>::TriggerFired(
      (_QWORD *)this + 60,
      (_QWORD *)this + 59);
}
