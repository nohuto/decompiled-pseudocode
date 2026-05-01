/*
 * XREFs of ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x180267D60
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x18058C020 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180016460 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800547DC (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x18006CCEC (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800B7220 (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x1800B736C (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ??$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@?$factory_cache_entry@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UIShellGesturesControllerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@Z @ 0x1801D5048 (--$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@-$factory_cache_entry@UShellGesturesCont.c)
 *     ?TouchGesturesEnabled@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1801FB910 (-TouchGesturesEnabled@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGestur.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs_::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs___lambda_c0ce33e06c92a42a96b12c6bd24e1411___ @ 0x18058E520 (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Input--GestureRecognizer_winrt.c)
 *     ?HoldRadius@?$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@M@Z @ 0x180591A4C (-HoldRadius@-$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@w.c)
 *     ?HoldStartDelay@?$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180591B08 (-HoldStartDelay@-$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windo.c)
 *     ?Holding@?$consume_Windows_UI_Input_IGestureRecognizer@UIGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UGestureRecognizer@Input@UI@Windows@winrt@@UHoldingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180591BC8 (-Holding@-$consume_Windows_UI_Input_IGestureRecognizer@UIGestureRecognizer@Input@UI@Windows@winr.c)
 *     ?IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ @ 0x180592050 (-IsC2DAllowedOnDeviceByPolicy@AIXPolicyHelper@@YA_NXZ.c)
 *     ?ShowGestureFeedback@?$consume_Windows_UI_Input_IGestureRecognizer@UIGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180592D88 (-ShowGestureFeedback@-$consume_Windows_UI_Input_IGestureRecognizer@UIGestureRecognizer@Input@UI@.c)
 *     ?TranslationMinContactCount@?$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x1805932E4 (-TranslationMinContactCount@-$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@In.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ @ 0x180593518 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall TouchGestureProcessor::Initialize(TouchGestureProcessor *this)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 **); // rcx
  __int64 *v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 *v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // eax
  __int64 *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  AIXPolicyHelper *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // [rsp+20h] [rbp-49h] BYREF
  __int64 *v33; // [rsp+28h] [rbp-41h] BYREF
  __int64 v34; // [rsp+30h] [rbp-39h] BYREF
  int v35; // [rsp+38h] [rbp-31h] BYREF
  __int128 v36; // [rsp+40h] [rbp-29h]
  __int64 *v37; // [rsp+50h] [rbp-19h] BYREF
  __int64 (__fastcall **v38)(); // [rsp+60h] [rbp-9h] BYREF
  TouchGestureProcessor *v39; // [rsp+68h] [rbp-1h]
  __int64 (__fastcall ***v40)(); // [rsp+98h] [rbp+2Fh]

  v33 = (__int64 *)winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess((__int64)&v34);
  v37 = &qword_1808DBA78;
  _InterlockedIncrement64(&qword_1808DBA78);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics> )
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      &v33,
      (__int64)&v32,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>);
    _InterlockedDecrement64(&qword_1808DBA78);
  }
  else
  {
    _InterlockedDecrement64(&qword_1808DBA78);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>::call<_lambda_f96af84709a62cb4ccbf50bc9965f301_ &>(
      v2,
      &v32,
      &v33);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 3, &v32);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v32);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
  v3 = (__int64 *)operator new(0x18uLL);
  v37 = v3;
  *((_DWORD *)v3 + 2) = 1;
  v3[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v3 = (__int64)off_180757D08;
  v34 = (__int64)v3;
  v33 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v35 = 0;
  v36 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 **))(*(_QWORD *)v4 + 96LL))(v4, v3, &v33);
  winrt::check_hresult(&v32, v5, &v35);
  *((_QWORD *)this + 6) = v33;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  v6 = (__int64 *)operator new(0x18uLL);
  v37 = v6;
  *((_DWORD *)v6 + 2) = 1;
  v6[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v6 = (__int64)off_180757D28;
  v34 = (__int64)v6;
  v33 = 0LL;
  v7 = *((_QWORD *)this + 3);
  v35 = 0;
  v36 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 **))(*(_QWORD *)v7 + 112LL))(v7, v6, &v33);
  winrt::check_hresult(&v32, v8, &v35);
  *((_QWORD *)this + 7) = v33;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  v9 = (__int64 *)operator new(0x18uLL);
  v37 = v9;
  *((_DWORD *)v9 + 2) = 1;
  v9[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v9 = (__int64)off_180757CC8;
  v34 = (__int64)v9;
  v33 = 0LL;
  v10 = *((_QWORD *)this + 3);
  v35 = 0;
  v36 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 **))(*(_QWORD *)v10 + 128LL))(v10, v9, &v33);
  winrt::check_hresult(&v32, v11, &v35);
  *((_QWORD *)this + 8) = v33;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  v12 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 65732LL);
  winrt::check_hresult(&v32, v13, &v35);
  v14 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 176LL))(v14, 3LL);
  winrt::check_hresult(&v32, v15, &v35);
  v16 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 144LL))(v16);
  winrt::check_hresult(&v32, v17, &v35);
  v18 = (__int64 *)operator new(0x18uLL);
  v37 = v18;
  *((_DWORD *)v18 + 2) = 1;
  v18[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v18 = (__int64)off_180757CE8;
  v34 = (__int64)v18;
  v33 = 0LL;
  v19 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 **))(*(_QWORD *)v19 + 248LL))(v19, v18, &v33);
  winrt::check_hresult(&v32, v20, &v35);
  *((_QWORD *)this + 10) = v33;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  v21 = (__int64 *)operator new(0x18uLL);
  v37 = v21;
  *((_DWORD *)v21 + 2) = 1;
  v21[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v21 = (__int64)off_180757CA8;
  v34 = (__int64)v21;
  v33 = 0LL;
  v22 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 **))(*(_QWORD *)v22 + 264LL))(v22, v21, &v33);
  winrt::check_hresult(&v32, v23, &v35);
  *((_QWORD *)this + 11) = v33;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53455430>::GetImpl'::`2'::impl) )
  {
    if ( AIXPolicyHelper::IsC2DAllowedOnDeviceByPolicy(v24) )
    {
      v25 = *((_QWORD *)this + 5);
      v35 = 0;
      v36 = 0LL;
      v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 56LL))(v25, 65733LL);
      winrt::check_hresult(&v32, v26, &v35);
      winrt::impl::consume_Windows_UI_Input_IGestureRecognizer2<winrt::Windows::UI::Input::GestureRecognizer>::TranslationMinContactCount((char *)this + 40);
      winrt::impl::consume_Windows_UI_Input_IGestureRecognizer2<winrt::Windows::UI::Input::GestureRecognizer>::HoldRadius((char *)this + 40);
      winrt::impl::consume_Windows_UI_Input_IGestureRecognizer<winrt::Windows::UI::Input::IGestureRecognizer>::ShowGestureFeedback((char *)this + 40);
      v34 = 3000000LL;
      winrt::impl::consume_Windows_UI_Input_IGestureRecognizer2<winrt::Windows::UI::Input::GestureRecognizer>::HoldStartDelay(
        (char *)this + 40,
        &v34);
      LODWORD(v32) = 30;
      v27 = (__int64 *)winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
                         (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)&v34,
                         (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v32);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 16, v27);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v34);
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs_::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs___lambda_c0ce33e06c92a42a96b12c6bd24e1411___(
        &v32,
        this);
      *((_QWORD *)this + 12) = *(_QWORD *)winrt::impl::consume_Windows_UI_Input_IGestureRecognizer<winrt::Windows::UI::Input::IGestureRecognizer>::Holding(
                                            (char *)this + 40,
                                            &v37,
                                            &v32);
      if ( v32 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v32);
    }
  }
  v38 = off_18072CE08;
  v39 = this;
  v40 = &v38;
  std::function<void (void)>::operator=((__int64)this + 160, (__int64)&v38);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)&v38,
    v28);
  v38 = off_180722168;
  v39 = this;
  v40 = &v38;
  std::function<void (void)>::operator=((__int64)this + 224, (__int64)&v38);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)&v38,
    v29);
  v30 = *((_QWORD *)this + 2);
  v38 = off_18072CE38;
  v39 = this;
  v40 = &v38;
  std::function<void (void)>::operator=(v30 + 40, (__int64)&v38);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)&v38,
    v31);
  winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::TouchGesturesEnabled((__int64 *)this + 3);
}
