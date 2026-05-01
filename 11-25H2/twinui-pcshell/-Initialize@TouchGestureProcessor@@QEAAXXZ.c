/*
 * XREFs of ?Initialize@TouchGestureProcessor@@QEAAXXZ @ 0x18026FD5C
 * Callers:
 *     ?perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ @ 0x180568280 (-perform_delayed_initialization@TouchGestureComponent@@UEAAXXZ.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@Web@Windows@winrt@@@Z @ 0x18005D510 (--R_lambda_89d5cc9e848954b376ddd65d03be1168_@@QEBA@AEBUIHttpFormUrlEncodedContentFactory@Http@We.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x180071F24 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z @ 0x1800A6600 (--0ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAA@AEBW4ShellView@1234@@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FAC08 (--4-$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ @ 0x1800FB86C (-GetForCurrentProcess@InputSite@Input@Internal@UI@Windows@winrt@@SA@XZ.c)
 *     ??$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@?$factory_cache_entry@UShellGesturesController@Input@Internal@UI@Windows@winrt@@UIShellGesturesControllerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@Z @ 0x1801E1CE4 (--$call@AEAV_lambda_f96af84709a62cb4ccbf50bc9965f301_@@@-$factory_cache_entry@UShellGesturesCont.c)
 *     ?TouchGesturesEnabled@?$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGesturesController@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x180270300 (-TouchGesturesEnabled@-$consume_Windows_UI_Internal_Input_IShellGesturesController@UIShellGestur.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs_::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs___lambda_c0ce33e06c92a42a96b12c6bd24e1411___ @ 0x18056A81C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--UI--Input--GestureRecognizer_winrt.c)
 *     ?HoldRadius@?$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@M@Z @ 0x18056E058 (-HoldRadius@-$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@w.c)
 *     ?HoldStartDelay@?$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x18056E10C (-HoldStartDelay@-$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windo.c)
 *     ?Holding@?$consume_Windows_UI_Input_IGestureRecognizer@UIGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UGestureRecognizer@Input@UI@Windows@winrt@@UHoldingEventArgs@2345@@Foundation@Windows@3@@Z @ 0x18056E1B4 (-Holding@-$consume_Windows_UI_Input_IGestureRecognizer@UIGestureRecognizer@Input@UI@Windows@winr.c)
 *     ?IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ @ 0x18056E738 (-IsC2DAvailableOnDevice@AIXPolicyHelper@@YA_NXZ.c)
 *     ?TranslationMinContactCount@?$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18056F9FC (-TranslationMinContactCount@-$consume_Windows_UI_Input_IGestureRecognizer2@UGestureRecognizer@In.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ @ 0x18056FC28 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53455430@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall TouchGestureProcessor::Initialize(TouchGestureProcessor *this)
{
  __int64 *v2; // rcx
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
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // [rsp+20h] [rbp-E0h] BYREF
  int v35; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v36; // [rsp+30h] [rbp-D0h]
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v38; // [rsp+48h] [rbp-B8h]
  __int64 *v39; // [rsp+50h] [rbp-B0h] BYREF
  char v40[4]; // [rsp+58h] [rbp-A8h] BYREF
  char v41[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  char v42[4]; // [rsp+60h] [rbp-A0h] BYREF
  char v43[4]; // [rsp+64h] [rbp-9Ch] BYREF
  char v44[4]; // [rsp+68h] [rbp-98h] BYREF
  char v45[4]; // [rsp+6Ch] [rbp-94h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h] BYREF
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+88h] [rbp-78h] BYREF
  __int64 v50; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h] BYREF
  char v53[4]; // [rsp+A8h] [rbp-58h] BYREF
  char v54[4]; // [rsp+ACh] [rbp-54h] BYREF
  char v55[4]; // [rsp+B0h] [rbp-50h] BYREF
  char v56[4]; // [rsp+B4h] [rbp-4Ch] BYREF
  char v57[8]; // [rsp+B8h] [rbp-48h] BYREF
  char v58[8]; // [rsp+C0h] [rbp-40h] BYREF
  char v59[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 (__fastcall **v60)(); // [rsp+D0h] [rbp-30h] BYREF
  TouchGestureProcessor *v61; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall ***v62)(); // [rsp+108h] [rbp+8h]

  v39 = (__int64 *)winrt::Windows::UI::Internal::Input::InputSite::GetForCurrentProcess((__int64)v57);
  v38 = &qword_18089B2F8;
  _InterlockedIncrement64(&qword_18089B2F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics> )
  {
    _lambda_89d5cc9e848954b376ddd65d03be1168_::operator()(
      &v39,
      &v46,
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>);
    _InterlockedDecrement64(&qword_18089B2F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18089B2F8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::ShellGesturesController,winrt::Windows::UI::Internal::Input::IShellGesturesControllerStatics>::call<_lambda_f96af84709a62cb4ccbf50bc9965f301_ &>(
      v2,
      &v46,
      &v39);
  }
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 3, &v46);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v46);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v57);
  v3 = (__int64 *)operator new(0x18uLL);
  v38 = v3;
  *((_DWORD *)v3 + 2) = 1;
  v3[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v3 = (__int64)off_18072DCF0;
  v34 = (__int64)v3;
  v48 = 0LL;
  v4 = *((_QWORD *)this + 3);
  v35 = 0;
  v36 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v4 + 96LL))(v4, v3, &v48);
  winrt::check_hresult(v40, v5, &v35);
  *((_QWORD *)this + 6) = v48;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  v6 = (__int64 *)operator new(0x18uLL);
  v38 = v6;
  *((_DWORD *)v6 + 2) = 1;
  v6[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v6 = (__int64)off_18072DCD0;
  v34 = (__int64)v6;
  v49 = 0LL;
  v7 = *((_QWORD *)this + 3);
  v35 = 0;
  v36 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v7 + 112LL))(v7, v6, &v49);
  winrt::check_hresult(v41, v8, &v35);
  *((_QWORD *)this + 7) = v49;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  v9 = (__int64 *)operator new(0x18uLL);
  v38 = v9;
  *((_DWORD *)v9 + 2) = 1;
  v9[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v9 = (__int64)off_18072DCB0;
  v34 = (__int64)v9;
  v50 = 0LL;
  v10 = *((_QWORD *)this + 3);
  v35 = 0;
  v36 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v10 + 128LL))(v10, v9, &v50);
  winrt::check_hresult(v42, v11, &v35);
  *((_QWORD *)this + 8) = v50;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  v12 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 64LL))(v12, 65732LL);
  winrt::check_hresult(v43, v13, &v35);
  v14 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 176LL))(v14, 3LL);
  winrt::check_hresult(v44, v15, &v35);
  v16 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 144LL))(v16);
  winrt::check_hresult(v45, v17, &v35);
  v18 = (__int64 *)operator new(0x18uLL);
  v38 = v18;
  *((_DWORD *)v18 + 2) = 1;
  v18[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v18 = (__int64)off_18072DC90;
  v34 = (__int64)v18;
  v51 = 0LL;
  v19 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v19 + 248LL))(v19, v18, &v51);
  winrt::check_hresult(v53, v20, &v35);
  *((_QWORD *)this + 10) = v51;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  v21 = (__int64 *)operator new(0x18uLL);
  v38 = v21;
  *((_DWORD *)v21 + 2) = 1;
  v21[2] = (__int64)this;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *v21 = (__int64)off_18072DC70;
  v34 = (__int64)v21;
  v52 = 0LL;
  v22 = *((_QWORD *)this + 4);
  v35 = 0;
  v36 = 0LL;
  v23 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v22 + 264LL))(v22, v21, &v52);
  winrt::check_hresult(v54, v23, &v35);
  *((_QWORD *)this + 11) = v52;
  winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v34);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53455430>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53455430>::GetImpl'::`2'::impl) )
  {
    if ( AIXPolicyHelper::IsC2DAvailableOnDevice(v24) )
    {
      v25 = *((_QWORD *)this + 5);
      v35 = 0;
      v36 = 0LL;
      v26 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 56LL))(v25, 65733LL);
      winrt::check_hresult(v55, v26, &v35);
      winrt::impl::consume_Windows_UI_Input_IGestureRecognizer2<winrt::Windows::UI::Input::GestureRecognizer>::TranslationMinContactCount((char *)this + 40);
      winrt::impl::consume_Windows_UI_Input_IGestureRecognizer2<winrt::Windows::UI::Input::GestureRecognizer>::HoldRadius((char *)this + 40);
      v27 = *((_QWORD *)this + 5);
      v35 = 0;
      v36 = 0LL;
      v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 88LL))(v27, 0LL);
      winrt::check_hresult(v56, v28, &v35);
      v34 = 3000000LL;
      winrt::impl::consume_Windows_UI_Input_IGestureRecognizer2<winrt::Windows::UI::Input::GestureRecognizer>::HoldStartDelay(
        (char *)this + 40,
        &v34);
      v37 = 30;
      v29 = (__int64 *)winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::ShellViewCoordinator(
                         (winrt::WindowsUdk::UI::Shell::ShellViewCoordinator *)v58,
                         (const enum winrt::WindowsUdk::UI::Shell::ShellView *)&v37);
      winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 16, v29);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v58);
      winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs_::TypedEventHandler_winrt::Windows::UI::Input::GestureRecognizer_winrt::Windows::UI::Input::HoldingEventArgs___lambda_c0ce33e06c92a42a96b12c6bd24e1411___(
        &v47,
        this);
      *((_QWORD *)this + 12) = *(_QWORD *)winrt::impl::consume_Windows_UI_Input_IGestureRecognizer<winrt::Windows::UI::Input::IGestureRecognizer>::Holding(
                                            (char *)this + 40,
                                            v59,
                                            &v47);
      if ( v47 )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v47);
    }
  }
  v60 = off_1807043D0;
  v61 = this;
  v62 = &v60;
  std::function<void (void)>::operator=((__int64)this + 160, (__int64)&v60);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)&v60,
    v30);
  v60 = off_1806F9A98;
  v61 = this;
  v62 = &v60;
  std::function<void (void)>::operator=((__int64)this + 224, (__int64)&v60);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)&v60,
    v31);
  v32 = *((_QWORD *)this + 2);
  v60 = off_180704400;
  v61 = this;
  v62 = &v60;
  std::function<void (void)>::operator=(v32 + 40, (__int64)&v60);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)&v60,
    v33);
  winrt::impl::consume_Windows_UI_Internal_Input_IShellGesturesController<winrt::Windows::UI::Internal::Input::IShellGesturesController>::TouchGesturesEnabled((char *)this + 24);
}
