/*
 * XREFs of ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x180299048
 * Callers:
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x18029C608 (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805EEB1C (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18005A4BC (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800AFAA4 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801E2D2C (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$?0Vpath@filesystem@std@@$0A@@?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@AEBVpath@filesystem@1@HH@Z @ 0x1805EB800 (--$-0Vpath@filesystem@std@@$0A@@-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@AEBVpath@files.c)
 *     ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x1805EE040 (--_D-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::GetLastCompatBackupTime(
        winrt::Windows::Internal::Shell::implementation *this)
{
  _QWORD *v1; // rax
  __int64 v2; // rax
  const struct std::filesystem::path *v3; // rdx
  bool v4; // bl
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[288]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v9[2]; // [rsp+160h] [rbp+60h] BYREF
  void *Src[4]; // [rsp+180h] [rbp+80h] BYREF
  void *v11[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _OWORD v12[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v13[4]; // [rsp+1E0h] [rbp+E0h] BYREF

  v1 = wil::ExpandEnvironmentStringsW<std::wstring,256>(v13, (__int64)L"%LOCALAPPDATA%\\Backup");
  v12[0] = *(_OWORD *)v1;
  v12[1] = *((_OWORD *)v1 + 1);
  v1[2] = 0LL;
  v1[3] = 7LL;
  *(_WORD *)v1 = 0;
  std::wstring::_Tidy_deallocate(v13);
  *(_QWORD *)&v9[0] = L"lastCompatBackupTime.txt";
  v2 = -1LL;
  do
    ++v2;
  while ( aLastcompatback[v2] );
  *((_QWORD *)&v9[0] + 1) = v2;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(v11, v9);
  std::filesystem::operator/(Src, (__int64)v12, (std::filesystem::path *)v11);
  v7 = 0LL;
  std::wstring::wstring((__int64)v9, (__int64)Src);
  v4 = std::filesystem::exists((std::filesystem *)v9, v3);
  std::wstring::_Tidy_deallocate((void **)v9);
  if ( v4 )
  {
    std::fstream::fstream(v8, Src);
    std::istream::operator>>(v8, &v7);
    std::fstream::`vbase destructor'(v8);
  }
  v5 = v7;
  std::wstring::_Tidy_deallocate(Src);
  std::wstring::_Tidy_deallocate(v11);
  std::wstring::_Tidy_deallocate((void **)v12);
  return v5;
}
