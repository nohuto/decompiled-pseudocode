/*
 * XREFs of ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180049408
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004AC8C (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800A6480 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Added@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18004ADE8 (-Added@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?Removed@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18004AE44 (-Removed@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ??0_lambda_aff27c65643147f110e8d55ec9bad72e_@@QEAA@AEBQEAVMPCSpatialGestureRecognizerHandler@@AEBQ81@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z@Z @ 0x1800936D0 (--0_lambda_aff27c65643147f110e8d55ec9bad72e_@@QEAA@AEBQEAVMPCSpatialGestureRecognizerHandler@@AE.c)
 *     ??$?0V_lambda_b258cc9de3522e72b4ea29240fe4ce89_@@@?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEAA@V_lambda_b258cc9de3522e72b4ea29240fe4ce89_@@@Z @ 0x1800A55B8 (--$-0V_lambda_b258cc9de3522e72b4ea29240fe4ce89_@@@-$TypedEventHandler@UWindowWatcher@WindowManag.c)
 *     ??$?0V_lambda_dfba8e2e26f4c32edb5a2bc1718bf458_@@@?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_dfba8e2e26f4c32edb5a2bc1718bf458_@@@Z @ 0x1800A5610 (--$-0V_lambda_dfba8e2e26f4c32edb5a2bc1718bf458_@@@-$TypedEventHandler@UWindowWatcher@WindowManag.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A6714 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?Stopped@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z @ 0x1800A67B0 (-Stopped@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHierarchyWithWindowManager::StartWindowWatcher(ViewHierarchyWithWindowManager *this)
{
  __int128 v3; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v4[16]; // [rsp+30h] [rbp-10h] BYREF
  void *v5; // [rsp+50h] [rbp+10h] BYREF
  ViewHierarchyWithWindowManager *v6; // [rsp+58h] [rbp+18h] BYREF

  v5 = &ViewHierarchyWithWindowManager::OnWindowAdded;
  v6 = this;
  v3 = *(_OWORD *)_lambda_aff27c65643147f110e8d55ec9bad72e_::_lambda_aff27c65643147f110e8d55ec9bad72e_(v4, &v6, &v5);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>(
    &v5,
    &v3);
  *((_QWORD *)this + 2) = *(_QWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Added(
                                       this,
                                       &v6,
                                       &v5);
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v5);
  v5 = &ViewHierarchyWithWindowManager::OnWindowRemoved;
  v6 = this;
  v3 = *(_OWORD *)_lambda_aff27c65643147f110e8d55ec9bad72e_::_lambda_aff27c65643147f110e8d55ec9bad72e_(v4, &v6, &v5);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>(
    &v5,
    &v3);
  *((_QWORD *)this + 3) = *(_QWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Removed(
                                       this,
                                       &v6,
                                       &v5);
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v5);
  v5 = &ViewHierarchyWithWindowManager::OnWindowWatcherStopped;
  v6 = this;
  v3 = *(_OWORD *)_lambda_aff27c65643147f110e8d55ec9bad72e_::_lambda_aff27c65643147f110e8d55ec9bad72e_(v4, &v6, &v5);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Foundation::IInspectable>(
    &v5,
    &v3);
  *((_QWORD *)this + 4) = *(_QWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Stopped(
                                       this,
                                       &v6,
                                       &v5);
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v5);
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Start(this);
  return 0LL;
}
