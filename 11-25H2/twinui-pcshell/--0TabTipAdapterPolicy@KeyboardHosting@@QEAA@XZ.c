/*
 * XREFs of ??0TabTipAdapterPolicy@KeyboardHosting@@QEAA@XZ @ 0x180128184
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180127F8C (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvid.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180063850 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180063850.c)
 *     ??0?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA@XZ @ 0x180128414 (--0-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUSize@Foundation@Wi.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIShellKeyboardHostingPolicy@Text@Shell@Internal@Windows@@UIDesktopKeyboardHostingPolicy@KeyboardHosting@678@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180128454 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIShellKeyboardHostingPolicy@Text@Shel.c)
 *     ??0?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x1801284CC (--0-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUR.c)
 *     ??0?$map@IV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1802C7090 (--0-$map@IV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$less@I@2@V-$allocator.c)
 */

// Hidden C++ exception states: #wind=9
KeyboardHosting::TabTipAdapterPolicy *__fastcall KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy'};
  *((_QWORD *)this + 1) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &KeyboardHosting::TabTipAdapterPolicy::`vftable'{for `Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Text::IShellKeyboardHostingPolicy,Windows::Internal::Shell::KeyboardHosting::IDesktopKeyboardHostingPolicy,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  std::map<unsigned int,std::wstring>::map<unsigned int,std::wstring>((char *)this + 72);
  std::map<unsigned int,std::wstring>::map<unsigned int,std::wstring>((char *)this + 88);
  *((_DWORD *)this + 26) = 1000;
  *((_DWORD *)this + 27) = 100000;
  *((_QWORD *)this + 14) = L"LastTipXPositionOnScreen";
  *((_QWORD *)this + 15) = L"LastTipYPositionOnScreen";
  *((_QWORD *)this + 16) = L"LastTipXPositionIsPositive";
  *((_QWORD *)this + 17) = L"LastTipYPositionIsPositive";
  *((_OWORD *)this + 9) = 0LL;
  *((_OWORD *)this + 10) = 0LL;
  *((_OWORD *)this + 11) = 0LL;
  *((_OWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_OWORD *)this + 15) = 0LL;
  *((_OWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 68) = 100;
  *(_OWORD *)((char *)this + 276) = 0LL;
  *(_OWORD *)((char *)this + 292) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_OWORD *)this + 20) = 0LL;
  *((_OWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 88) = 100;
  *(_OWORD *)((char *)this + 356) = 0LL;
  *(_OWORD *)((char *)this + 372) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_OWORD *)this + 25) = 0LL;
  *((_OWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 108) = 100;
  *(_OWORD *)((char *)this + 436) = 0LL;
  *(_OWORD *)((char *)this + 452) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *v2 = v2;
  v2[1] = v2;
  *((_QWORD *)this + 60) = v2;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 7LL;
  *((_QWORD *)this + 66) = 8LL;
  *((_DWORD *)this + 118) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>>::_Assign_grow(
    (__int64)this + 496,
    0x10uLL,
    *((_QWORD *)this + 60));
  *((_QWORD *)this + 67) = 0LL;
  *((_BYTE *)this + 544) = 0;
  *(_QWORD *)((char *)this + 548) = 0LL;
  *((_BYTE *)this + 556) = 0;
  std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>((char *)this + 560);
  std::map<unsigned int,Windows::Foundation::Size>::map<unsigned int,Windows::Foundation::Size>((char *)this + 576);
  *((_DWORD *)this + 148) = -1;
  *(_QWORD *)((char *)this + 596) = 0LL;
  *((_DWORD *)this + 151) = 0;
  *((_WORD *)this + 304) = 1;
  *((_DWORD *)this + 153) = 1;
  *((_QWORD *)this + 77) = 0LL;
  *((_WORD *)this + 312) = 0;
  *(_QWORD *)((char *)this + 628) = 0LL;
  *((_BYTE *)this + 636) = 0;
  *((_OWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_WORD *)this + 330) = 256;
  *(_OWORD *)((char *)this + 664) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 7LL;
  *((_WORD *)this + 332) = 0;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  return this;
}
