/*
 * XREFs of _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180562208
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::Run @ 0x180562800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__-_--Run.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x18005A688 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEA.c)
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x18005BD20 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x18005E174 (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x1800AFAEC (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801B5CB8 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801E2D2C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ @ 0x180562624 (-History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall lambda_88c52b909d46191f2a7b9cf853665f36_::operator()(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  const unsigned __int16 *v4; // rsi
  const WCHAR *v5; // rax
  __int64 v6; // r15
  std::filesystem::path *v7; // rax
  const struct std::filesystem::path *v8; // rdx
  const WCHAR *v9; // rdx
  unsigned int v10; // eax
  __int64 *v11; // [rsp+28h] [rbp-39h] BYREF
  const WCHAR *v12; // [rsp+30h] [rbp-31h] BYREF
  __int64 v13[4]; // [rsp+38h] [rbp-29h] BYREF
  void *Src[4]; // [rsp+58h] [rbp-9h] BYREF
  void *v15[4]; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v2 = (_QWORD *)a1[1];
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    v4 = (const unsigned __int16 *)(i + 2);
    v5 = (const WCHAR *)(i + 2);
    if ( i[5] > 7uLL )
      v5 = *(const WCHAR **)v4;
    v12 = v5 + 12;
    v6 = *a1;
    std::filesystem::path::path((__int64)Src, (_QWORD *)(*a1 + 64LL));
    v7 = (std::filesystem::path *)std::filesystem::path::path(v15, (__int64 *)&v12);
    std::filesystem::path::operator/=((std::filesystem *)Src, v7);
    std::wstring::_Tidy_deallocate(v15);
    if ( !std::filesystem::exists((std::filesystem *)Src, v8) )
    {
      v9 = (const WCHAR *)(i + 2);
      if ( i[5] > 7uLL )
        v9 = *(const WCHAR **)v4;
      v10 = RegDeleteValueW(*(HKEY *)(v6 + 8), v9);
      if ( v10 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          406LL,
          (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v10);
      winrt::Windows::UI::Notifications::ToastNotificationManager::History();
      winrt::param::hstring::hstring((winrt::param::hstring *)v15, L"Windows.SystemToast.StartupApp");
      if ( i[5] > 7uLL )
        v4 = *(const unsigned __int16 **)v4;
      winrt::param::hstring::hstring((winrt::param::hstring *)v13, v4);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
        &v11,
        v13,
        (__int64 *)v15);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    }
    std::wstring::_Tidy_deallocate(Src);
  }
}
