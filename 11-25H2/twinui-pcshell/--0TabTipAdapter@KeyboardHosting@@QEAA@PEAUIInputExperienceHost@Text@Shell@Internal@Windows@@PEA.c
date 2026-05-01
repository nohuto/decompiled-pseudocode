/*
 * XREFs of ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@PEAUIInputInjectionValidityHelper@1456@@Z @ 0x18029884C
 * Callers:
 *     ??0?$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@4567@PEAUIDesktopKeyboardHostingPolicy@KeyboardHosting@567@PEAUIInputInjectionValidityHelper@KeyboardHosting@567@@Z @ 0x18029880C (--0-$heap_implements@UTabTipAdapter@KeyboardHosting@@@impl@winrt@@QEAA@PEAUIInputExperienceHost@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Alloc_proxy@V?$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV?$allocator@U_Container_proxy@std@@@1@@Z @ 0x180150CDC (--$_Alloc_proxy@V-$allocator@U_Container_proxy@std@@@std@@@_Container_base12@std@@QEAAX$$QEAV-$a.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x18021205C (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029752C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z @ 0x180298DC4 (--$-0$0DD@@StringReference@Internal@Windows@@QEAA@AEAY0DD@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=24
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
  const unsigned __int16 *v23; // rdx
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, char *); // rdi
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v32; // [rsp+20h] [rbp-50h] BYREF
  __int64 v33; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Internal::Shell::Text::IInputExperienceHost *v34; // [rsp+30h] [rbp-40h]
  KeyboardHosting::TabTipAdapter *v35; // [rsp+38h] [rbp-38h]
  char *v36; // [rsp+40h] [rbp-30h]
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v34 = a2;
  v35 = this;
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
  v36 = (char *)this + 512;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  std::_Container_base12::_Alloc_proxy<std::allocator<std::_Container_proxy>>((_QWORD *)this + 64);
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_DWORD *)this + 144) = 0;
  if ( !v34 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x173,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v11);
  if ( !a3 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x174,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v11);
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x175,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v10);
  v12 = CoreUICreate(v10);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x177,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v12,
      v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  v13 = CoreUIFactoryCreate(v9);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x178,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v13,
      v32);
  v14 = SharedMessagePortRefPtr::Initialize((KeyboardHosting::TabTipAdapter *)((char *)this + 144));
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x179,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v14,
      v32);
  v33 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.UI.Internal.Text.Core.CoreKeyboardManager",
         0x31u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v15 = string;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  ActivationFactory = RoGetActivationFactory(v15, &GUID_4781e102_173f_40ee_b985_685f98a866aa, &v33);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x17F,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ActivationFactory,
      v32);
  v17 = v33;
  v18 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v7);
  v19 = v18(v17, v7);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x180,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v19,
      v32);
  v20 = *v7;
  v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v7 + 696LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v8);
  v22 = v21(v20, v8);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x181,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v22,
      v32);
  v32 = 0LL;
  v24 = *(_QWORD *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[51])v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v25 = RoGetActivationFactory(v24, &GUID_6fa49ca9_046b_4d5c_b942_7dbc066f6579, &v32);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x187,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v25,
      v32);
  v26 = v32;
  v27 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v32 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v28 = v27(v26, (char *)this + 48);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x188,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v28,
      v32);
  v29 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  v30 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return this;
}
