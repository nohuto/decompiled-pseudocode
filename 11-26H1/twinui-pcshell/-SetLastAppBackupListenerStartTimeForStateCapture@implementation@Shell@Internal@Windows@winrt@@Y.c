/*
 * XREFs of ?SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18020D6C0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x180614CF0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 * Callees:
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180336D74 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::SetLastAppBackupListenerStartTimeForStateCapture(
        winrt::Windows::Internal::Shell::implementation *this)
{
  HKEY *phkResult; // rax
  unsigned int Key; // eax
  const char *v3; // r9
  unsigned int dwOptions; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  __int64 Data; // [rsp+68h] [rbp+10h] BYREF

  hKey = 0LL;
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put(&hKey);
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\AppListBackup",
          0,
          0LL,
          0,
          0x20006u,
          0LL,
          phkResult,
          0LL);
  try
  {
    if ( Key )
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        (void *)0xA7,
        (unsigned int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
        (const char *)Key,
        dwOptions);
    Data = _Xtime_get_ticks() / 10000;
    RegSetKeyValueW(
      HKEY_CURRENT_USER,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\AppListBackup",
      L"LastAppBackupListenerStartTime",
      0xBu,
      &Data,
      8u);
    if ( hKey )
      RegCloseKey(hKey);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB7,
      (unsigned int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
      v3);
  }
}
