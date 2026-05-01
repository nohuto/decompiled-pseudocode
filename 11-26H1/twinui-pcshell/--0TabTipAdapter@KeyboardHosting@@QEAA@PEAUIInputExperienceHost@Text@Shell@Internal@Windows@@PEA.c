/*
 * XREFs of ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@PEAUIInputInjectionValidityHelper@1456@@Z @ 0x1802937DC
 * Callers:
 *     ??0?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@4567@PEAUIDesktopKeyboardHostingPolicy@KeyboardHosting@567@PEAUIInputInjectionValidityHelper@KeyboardHosting@567@@Z @ 0x18029379C (--0-$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@QEAA@PEAUIInputExperienceHost@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180188DFC (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1802045D4 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ??$?0$0DC@@StringReference@Internal@Windows@@QEAA@AEAY0DC@$$CBG@Z @ 0x180206D28 (--$-0$0DC@@StringReference@Internal@Windows@@QEAA@AEAY0DC@$$CBG@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x180476608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@details@wil@@QEAA_NXZ @ 0x1804806D8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler@@@detai.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=23
KeyboardHosting::TabTipAdapter *__fastcall KeyboardHosting::TabTipAdapter::TabTipAdapter(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::Internal::Shell::Text::IInputExperienceHost *a2,
        struct Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy *a3,
        struct Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy *a4)
{
  __int64 *v7; // r14
  __int64 *v8; // r13
  __int64 *v9; // r15
  __int64 *v10; // r12
  const char *v11; // r9
  int v12; // eax
  int v13; // eax
  int v14; // eax
  HSTRING v15; // rbx
  int ActivationFactory; // eax
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64 *); // rbx
  int v22; // eax
  HSTRING v23; // rbx
  int v24; // eax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, char *); // rdi
  int v27; // eax
  __int64 v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-50h] BYREF
  __int64 v31; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Internal::Shell::Text::IInputExperienceHost *v32; // [rsp+30h] [rbp-40h]
  KeyboardHosting::TabTipAdapter *v33; // [rsp+38h] [rbp-38h]
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v32 = a2;
  v33 = this;
  *(_QWORD *)this = &Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::`vftable';
  *((_QWORD *)this + 1) = &TwinUI::Cortana::ISearchAppDesktopNotifications::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *((_QWORD *)this + 3) = 1LL;
  *(_QWORD *)this = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IMessageProxyReconnectAdapterOwner,void>'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapter::`vftable'{for `winrt::impl::producer_convert<KeyboardHosting::TabTipAdapter,IRemoteTabTipAdapter,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<KeyboardHosting::TabTipAdapter>::`vftable';
  v7 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v8 = (__int64 *)((char *)this + 40);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = a2;
  v9 = (__int64 *)((char *)this + 80);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v10 = (__int64 *)((char *)this + 96);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 16) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy *))(*(_QWORD *)a4 + 8LL))(a4);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_DWORD *)this + 100) = 11;
  *(_QWORD *)((char *)this + 404) = 0LL;
  *((_DWORD *)this + 103) = 11;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_WORD *)this + 226) = 0;
  *(_OWORD *)((char *)this + 456) = 0LL;
  *(_OWORD *)((char *)this + 472) = 0LL;
  *((_BYTE *)this + 492) = 0;
  *((_DWORD *)this + 124) = 0;
  *((_WORD *)this + 250) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 64);
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  if ( !v32 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17E,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v11);
  if ( !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v11);
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x180,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
  v12 = CoreUICreate(v10);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x182,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v12,
      v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  v13 = CoreUIFactoryCreate(v9);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x183,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v13,
      v30);
  v14 = SharedMessagePortRefPtr::Initialize((KeyboardHosting::TabTipAdapter *)((char *)this + 144));
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x184,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v14,
      v30);
  v31 = 0LL;
  v15 = *Windows::Internal::StringReference::StringReference(
           &string,
           L"Windows.UI.Internal.Text.Core.CoreKeyboardManager");
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  ActivationFactory = RoGetActivationFactory(v15, &GUID_4781e102_173f_40ee_b985_685f98a866aa, &v31);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v30);
  v17 = v31;
  v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
  v19 = v18(v17, v7);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18B,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v19,
      v30);
  v20 = *v7;
  v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v7 + 696LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
  v22 = v21(v20, v8);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v22,
      v30);
  v30 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.UI.Internal.Text.Core.CoreInputViewManager",
         0x32u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v23 = string;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  v24 = RoGetActivationFactory(v23, &GUID_6fa49ca9_046b_4d5c_b942_7dbc066f6579, &v30);
  if ( v24 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x192,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v24,
      v30);
  v25 = v30;
  v26 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v27 = v26(v25, (char *)this + 48);
  if ( v27 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x193,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v27,
      v30);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl)
    || (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_HangOnCoreKeyboardHandler>::GetImpl'::`2'::impl) )
  {
    *((_DWORD *)this + 144) = SHTaskPoolGetUniqueContext(v28);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v30);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v31);
  return this;
}
