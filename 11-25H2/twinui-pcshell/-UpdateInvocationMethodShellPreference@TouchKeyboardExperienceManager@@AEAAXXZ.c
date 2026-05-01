/*
 * XREFs of ?UpdateInvocationMethodShellPreference@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x180467DFC
 * Callers:
 *     _lambda_6609ff0ab640c01183d8a2076431907a_::operator() @ 0x18045DA70 (_lambda_6609ff0ab640c01183d8a2076431907a_--operator().c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800AD0B4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C0E94 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ?IsManagedByOrganization@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801EE130 (-IsManagedByOrganization@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting@UITapI.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?InvokeIsPrimaryViewInvokedBySystemButton@TabTipAdapter@KeyboardHosting@@QEAA_NXZ @ 0x18046C6F8 (-InvokeIsPrimaryViewInvokedBySystemButton@TabTipAdapter@KeyboardHosting@@QEAA_NXZ.c)
 *     ?RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@_NW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@0@Z @ 0x180472C0C (-RememberInputAppRequestedShow@InvocationMethodTracker@KeyboardHosting@@QEAA-AV-$basic_string_vi.c)
 */

void __fastcall TouchKeyboardExperienceManager::UpdateInvocationMethodShellPreference(
        TouchKeyboardExperienceManager *this)
{
  __int64 v2; // rsi
  __int64 *v3; // rbx
  char IsManagedByOrganization; // di
  int v5; // r8d
  KeyboardHosting::TabTipAdapter *v6; // rbx
  int v7; // eax
  HSTRING v8; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *((_QWORD *)this + 276);
  v3 = (__int64 *)((char *)this + 2184);
  IsManagedByOrganization = winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeSetting<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeSetting>::IsManagedByOrganization((__int64 *)this + 273);
  LODWORD(v3) = winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(v3);
  LOBYTE(v5) = KeyboardHosting::TabTipAdapter::InvokeIsPrimaryViewInvokedBySystemButton(*((KeyboardHosting::TabTipAdapter **)this
                                                                                        + 73));
  KeyboardHosting::InvocationMethodTracker::RememberInputAppRequestedShow(
    v2,
    (unsigned int)&hstringHeader,
    v5,
    (_DWORD)v3,
    IsManagedByOrganization);
  if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] )
  {
    winrt::hstring::hstring((struct winrt::impl::shared_hstring_header **)&v8, (__int64)&hstringHeader);
    v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
    v10 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"InvocationMethod", 0x11u, 0x10u);
    v7 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v10, v8);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1923,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v8);
  }
}
