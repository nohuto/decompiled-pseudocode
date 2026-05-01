/*
 * XREFs of _lambda_7936b82dc4b721215efe4b8ef74a7a70_::operator() @ 0x180586248
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7936b82dc4b721215efe4b8ef74a7a70__&_::Run @ 0x180586990 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7936b82dc4b721215efe4b8ef74a7a70__-_--Run.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?RemoveGroup@?$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHistory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180139B68 (-RemoveGroup@-$consume_Windows_UI_Notifications_IToastNotificationHistory@UIToastNotificationHis.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ @ 0x1805867AC (-History@ToastNotificationManager@Notifications@UI@Windows@winrt@@SA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_7936b82dc4b721215efe4b8ef74a7a70_::operator()(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx
  const unsigned __int16 *v4; // rsi
  const WCHAR *v5; // rdx
  const WCHAR *v6; // rdx
  unsigned int v7; // eax
  __int64 v8[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9[4]; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 *v11; // [rsp+80h] [rbp+8h] BYREF

  v2 = (_QWORD *)a1[1];
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    v4 = (const unsigned __int16 *)(i + 2);
    v5 = (const WCHAR *)(i + 2);
    if ( i[5] > 7uLL )
      v5 = *(const WCHAR **)v4;
    if ( RegQueryValueExW(*(HKEY *)(*a1 + 64LL), v5 + 12, 0LL, 0LL, 0LL, 0LL) == 2 )
    {
      v6 = (const WCHAR *)(i + 2);
      if ( i[5] > 7uLL )
        v6 = *(const WCHAR **)v4;
      v7 = RegDeleteValueW(*(HKEY *)(*a1 + 8LL), v6);
      if ( v7 )
        wil::details::in1diag3::_Log_Win32(
          retaddr,
          259LL,
          (__int64)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
          (const char *)v7);
      winrt::Windows::UI::Notifications::ToastNotificationManager::History();
      winrt::param::hstring::hstring((winrt::param::hstring *)v8, L"Windows.SystemToast.StartupApp");
      if ( i[5] > 7uLL )
        v4 = (const unsigned __int16 *)i[2];
      winrt::param::hstring::hstring((winrt::param::hstring *)v9, v4);
      winrt::impl::consume_Windows_UI_Notifications_IToastNotificationHistory<winrt::Windows::UI::Notifications::IToastNotificationHistory>::RemoveGroup(
        &v11,
        v9,
        v8);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
    }
  }
}
