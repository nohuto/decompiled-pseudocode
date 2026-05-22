/*
 * XREFs of ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180093584
 * Callers:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x18004AC8C (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ?OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800A6480 (-OnWindowWatcherStopped@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@App.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?Added@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18004ADE8 (-Added@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?Removed@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18004AE44 (-Removed@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ??$?0V_lambda_1c7c596e6dbeb6e60f71d7a89cc6a131_@@@?$TypedEventHandler@UAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UAppViewChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_1c7c596e6dbeb6e60f71d7a89cc6a131_@@@Z @ 0x180093678 (--$-0V_lambda_1c7c596e6dbeb6e60f71d7a89cc6a131_@@@-$TypedEventHandler@UAppViewWatcher@WindowMana.c)
 *     ??0_lambda_aff27c65643147f110e8d55ec9bad72e_@@QEAA@AEBQEAVMPCSpatialGestureRecognizerHandler@@AEBQ81@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z@Z @ 0x1800936D0 (--0_lambda_aff27c65643147f110e8d55ec9bad72e_@@QEAA@AEBQEAVMPCSpatialGestureRecognizerHandler@@AE.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewWatcher@UIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800936E8 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewWatcher@UIAppViewWat.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHierarchyWithWindowManager::StartAppViewWatcher(ViewHierarchyWithWindowManager *this)
{
  __int64 **v2; // rbx
  __int128 v4; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v5[16]; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall *v6)(__int64, winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *, winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *); // [rsp+50h] [rbp+10h] BYREF
  ViewHierarchyWithWindowManager *v7; // [rsp+58h] [rbp+18h] BYREF

  v2 = (__int64 **)((char *)this + 8);
  v6 = ViewHierarchyWithWindowManager::OnAppViewAdded;
  v7 = this;
  v4 = *(_OWORD *)_lambda_aff27c65643147f110e8d55ec9bad72e_::_lambda_aff27c65643147f110e8d55ec9bad72e_(v5, &v7, &v6);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>(
    &v6,
    &v4);
  *((_QWORD *)this + 5) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Added(
                             v2,
                             &v7,
                             (__int64 *)&v6);
  if ( v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v6);
  v6 = ViewHierarchyWithWindowManager::OnAppViewRemoved;
  v7 = this;
  v4 = *(_OWORD *)_lambda_aff27c65643147f110e8d55ec9bad72e_::_lambda_aff27c65643147f110e8d55ec9bad72e_(v5, &v7, &v6);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewChangedEventArgs>(
    &v6,
    &v4);
  *((_QWORD *)this + 6) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Removed(
                             v2,
                             &v7,
                             (__int64 *)&v6);
  if ( v6 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v6);
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppViewWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher>::Start(v2);
  return 0LL;
}
