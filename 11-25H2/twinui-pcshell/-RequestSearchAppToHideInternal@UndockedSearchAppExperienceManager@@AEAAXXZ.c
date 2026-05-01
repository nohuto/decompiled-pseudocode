/*
 * XREFs of ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180196A94
 * Callers:
 *     _lambda_3912f03278ab74ecf9c74eeb0a9c8b08_::operator() @ 0x1803A5884 (_lambda_3912f03278ab74ecf9c74eeb0a9c8b08_--operator().c)
 * Callees:
 *     ??1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ @ 0x180032A5C (--1ThreadFailureCallbackHolder@details@wil@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A4EAC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x1800A852C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?RequestHideView@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ShellView@Shell@UI@WindowsUdk@3@AEBW4HideViewBehaviorOptions@5673@@Z @ 0x180196C64 (-RequestHideView@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Windo.c)
 *     ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801972DC (-Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@2@XZ @ 0x180289E64 (-watch_errors@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028A790 (--1-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A7B8 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@tip2@@@tip2@@QEBA_NXZ @ 0x18029419C (--B-$tip_test@V-$merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@U12@@details@.c)
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802947FC (--$tip_make_shared_nothrow@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@ti.c)
 *     ??4?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802A8C00 (--4-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@$$QEA.c)
 *     ?UndockedSearchAppExperienceManager_RequestSearchAppToHide@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1802CF174 (-UndockedSearchAppExperienceManager_RequestSearchAppToHide@SearchAppExperienceManagerTelemetry@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UndockedSearchAppExperienceManager::RequestSearchAppToHideInternal(RTL_SRWLOCK *this)
{
  __int64 v2; // rax
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rbx
  RTL_SRWLOCK *v4; // rdi
  __int64 *v5; // r14
  void (__fastcall ****v6)(_QWORD, __int64 *, __int64 *); // rsi
  void (__fastcall ***v7)(_QWORD, __int64 *, __int64 *); // [rsp+20h] [rbp-39h] BYREF
  void **v8; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-29h] BYREF
  int v10; // [rsp+48h] [rbp-11h]
  __int64 v11; // [rsp+50h] [rbp-9h]
  _BYTE v12[8]; // [rsp+58h] [rbp-1h] BYREF
  _BYTE v13[64]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v14; // [rsp+C0h] [rbp+67h] BYREF
  int v15; // [rsp+C8h] [rbp+6Fh] BYREF

  v8 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
  v9[0] = 0LL;
  v9[1] = &v8;
  v9[2] = 0LL;
  v10 = 0;
  v11 = 0LL;
  tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,>(v12);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<KeyboardHostingTipTests::_tip_InputAppActivationTest,KeyboardHostingTipTests::_tip_InputAppActivationTest>>::operator bool(&this[109]) )
  {
    v2 = tip2::tip_test<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::watch_errors(
           &this[109],
           v13);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::operator=(&v8, v2);
    tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::~test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>(v13);
  }
  v3 = 0LL;
  v7 = 0LL;
  v4 = this + 37;
  AcquireSRWLockShared(this + 37);
  v5 = (__int64 *)&this[38];
  if ( &v7 != (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v5 )
  {
    v3 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v5;
    v7 = (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))*v5;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v7);
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  v14 = 0LL;
  if ( winrt::Windows::Foundation::operator==(&v7, &v14) )
  {
    v6 = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current();
    if ( &v7 != v6 )
    {
      if ( v3 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
      v3 = *v6;
      *v6 = 0LL;
      v7 = v3;
    }
    if ( v14 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    AcquireSRWLockExclusive(v4);
    v14 = 0LL;
    if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))v5, &v14) )
      winrt::Windows::Foundation::IUnknown::operator=(v5, (__int64 *)&v7);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_RequestSearchAppToHide();
  LODWORD(v14) = 0;
  v15 = 1;
  winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::RequestHideView(
    &v7,
    &v15,
    &v14);
  if ( v3 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,wil::err_returncode_policy>(v12);
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)v9);
}
