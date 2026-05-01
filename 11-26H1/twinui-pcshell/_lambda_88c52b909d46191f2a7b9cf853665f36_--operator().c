/*
 * XREFs of _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180586378
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::Run @ 0x1805869A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__-_--Run.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180139B68 (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x1801D2A00 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEA.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801D7210 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x1801F3B78 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ @ 0x1805867AC (-History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_88c52b909d46191f2a7b9cf853665f36_::operator()(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  const unsigned __int16 *v4; // rsi
  const WCHAR *v5; // rax
  std::filesystem::path *v6; // rax
  const struct std::filesystem::path *v7; // rdx
  __int64 v8; // r8
  const WCHAR *v9; // rdx
  unsigned int v10; // eax
  __int64 *v11; // [rsp+20h] [rbp-39h] BYREF
  const WCHAR *v12; // [rsp+28h] [rbp-31h] BYREF
  __int64 v13[4]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v14[4]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v15[4]; // [rsp+70h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = (_QWORD *)a1[1];
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    v4 = (const unsigned __int16 *)(i + 2);
    v5 = (const WCHAR *)(i + 2);
    if ( i[5] > 7uLL )
      v5 = *(const WCHAR **)v4;
    v12 = v5 + 12;
    std::filesystem::path::path((__int64)v14, (_QWORD *)(*a1 + 64LL));
    v6 = (std::filesystem::path *)std::filesystem::path::path((__int64)v15, (__int64 *)&v12);
    std::filesystem::path::operator/=((std::filesystem *)v14, v6);
    std::wstring::_Tidy_deallocate(v15);
    if ( !std::filesystem::exists((std::filesystem *)v14, v7, v8) )
    {
      v9 = (const WCHAR *)(i + 2);
      if ( i[5] > 7uLL )
        v9 = *(const WCHAR **)v4;
      v10 = RegDeleteValueW(*(HKEY *)(*a1 + 8LL), v9);
      if ( v10 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          406LL,
          (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v10);
      winrt::Windows::UI::Notifications::ToastNotificationManager::History();
      winrt::param::hstring::hstring((winrt::param::hstring *)v15, L"Windows.SystemToast.StartupApp");
      if ( i[5] > 7uLL )
        v4 = (const unsigned __int16 *)i[2];
      winrt::param::hstring::hstring((winrt::param::hstring *)v13, v4);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
        &v11,
        v13,
        v15);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    }
    std::wstring::_Tidy_deallocate(v14);
  }
}
