/*
 * XREFs of ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800A9008
 * Callers:
 *     ??0CUIHierarchy@@AEAA@XZ @ 0x1800A7AA4 (--0CUIHierarchy@@AEAA@XZ.c)
 *     ?OnWindowWatcherStopped@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@67@@Z @ 0x1800A8BF0 (-OnWindowWatcherStopped@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Inte.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x180049678 (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180049A74 (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?Added@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18004ADE8 (-Added@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?Removed@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18004AE44 (-Removed@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ??0_lambda_aff27c65643147f110e8d55ec9bad72e_@@QEAA@AEBQEAVMPCSpatialGestureRecognizerHandler@@AEBQ81@EAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z@Z @ 0x1800936D0 (--0_lambda_aff27c65643147f110e8d55ec9bad72e_@@QEAA@AEBQEAVMPCSpatialGestureRecognizerHandler@@AE.c)
 *     ??$?0V_lambda_b258cc9de3522e72b4ea29240fe4ce89_@@@?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@winrt@@QEAA@V_lambda_b258cc9de3522e72b4ea29240fe4ce89_@@@Z @ 0x1800A55B8 (--$-0V_lambda_b258cc9de3522e72b4ea29240fe4ce89_@@@-$TypedEventHandler@UWindowWatcher@WindowManag.c)
 *     ?Start@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800A6714 (-Start@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatch.c)
 *     ?Stopped@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIInspectable@Foundation@56@@Foundation@Windows@3@@Z @ 0x1800A67B0 (-Stopped@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher@UIWindowWat.c)
 *     ??$?0V_lambda_fa0031d3c6b8052c81d53446b7ba3d8a_@@@?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@V_lambda_fa0031d3c6b8052c81d53446b7ba3d8a_@@@Z @ 0x1800A7274 (--$-0V_lambda_fa0031d3c6b8052c81d53446b7ba3d8a_@@@-$TypedEventHandler@UIUniversalAppModelWatcher.c)
 *     ??$?0VCUIHierarchy@@P80@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Z@?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCUIHierarchy@@P84@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@23@UWindowChangedEventArgs@67823@@Z@Z @ 0x1800A72CC (--$-0VCUIHierarchy@@P80@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     ??$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800A7778 (--$as@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@Utype.c)
 *     ?UniversalPropertyChanged@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UUniversalPropertyChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x1800A9250 (-UniversalPropertyChanged@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversa.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CUIHierarchy::StartWindowWatcher(CUIHierarchy *this)
{
  __int64 **v2; // rdi
  __int128 v3; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v4[2]; // [rsp+30h] [rbp-10h] BYREF
  void *v5; // [rsp+60h] [rbp+20h] BYREF
  CUIHierarchy *v6; // [rsp+68h] [rbp+28h] BYREF
  CUIHierarchy *v7; // [rsp+70h] [rbp+30h] BYREF

  v2 = (__int64 **)((char *)this + 72);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>(
    &v5,
    (__int64)this,
    (__int64)CUIHierarchy::OnWindowAdded);
  *((_QWORD *)this + 5) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Added(
                             v2,
                             &v6,
                             (__int64 *)&v5);
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v5);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowChangedEventArgs>(
    &v5,
    (__int64)this,
    (__int64)CUIHierarchy::OnWindowRemoved);
  *((_QWORD *)this + 6) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Removed(
                             v2,
                             &v6,
                             (__int64 *)&v5);
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v5);
  v5 = CUIHierarchy::OnWindowWatcherStopped;
  v6 = this;
  v3 = *(_OWORD *)_lambda_aff27c65643147f110e8d55ec9bad72e_::_lambda_aff27c65643147f110e8d55ec9bad72e_(v4, &v6, &v5);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Foundation::IInspectable>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowWatcher,winrt::Windows::Foundation::IInspectable>(
    &v5,
    &v3);
  *((_QWORD *)this + 7) = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Stopped(
                             v2,
                             &v6,
                             (__int64 *)&v5);
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v5);
  winrt::impl::as<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v6,
    (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*v2);
  v5 = CUIHierarchy::OnUniversalPropertyChanged;
  v7 = this;
  v3 = *(_OWORD *)_lambda_aff27c65643147f110e8d55ec9bad72e_::_lambda_aff27c65643147f110e8d55ec9bad72e_(v4, &v7, &v5);
  winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>::TypedEventHandler<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher,winrt::Windows::Internal::ApplicationModel::WindowManagement::UniversalPropertyChangedEventArgs>(
    &v5,
    &v3);
  *((_QWORD *)this + 8) = *(_QWORD *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IUniversalAppModelWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher>::UniversalPropertyChanged(
                                       &v6,
                                       &v7,
                                       &v5);
  if ( v5 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref((__int64 *)&v5);
  winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindowWatcher<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowWatcher>::Start((__int64 *)v2);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v6);
}
