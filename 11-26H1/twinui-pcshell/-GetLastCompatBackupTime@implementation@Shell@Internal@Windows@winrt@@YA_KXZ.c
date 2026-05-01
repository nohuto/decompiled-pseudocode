/*
 * XREFs of ?GetLastCompatBackupTime@implementation@Shell@Internal@Windows@winrt@@YA_KXZ @ 0x1802915EC
 * Callers:
 *     ?TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX_N@Z @ 0x1802948CC (-TriggerCompatBackupIfUserJsonImpacted@AppBackupListener@implementation@Shell@Internal@Windows@w.c)
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180613670 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180032474 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180033F88 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800C58A8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1801D7210 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$?0Vpath@filesystem@std@@$0A@@?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@AEBVpath@filesystem@1@HH@Z @ 0x180610468 (--$-0Vpath@filesystem@std@@$0A@@-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@AEBVpath@files.c)
 *     ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x180612BA8 (--_D-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::GetLastCompatBackupTime(
        winrt::Windows::Internal::Shell::implementation *this)
{
  _QWORD *v1; // rax
  const struct std::filesystem::path *v2; // rdx
  __int64 v3; // r8
  bool v4; // bl
  __int64 v5; // rbx
  __int64 v7; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v8[288]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v9[4]; // [rsp+160h] [rbp+60h] BYREF
  _OWORD v10[2]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v11[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v12[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v13[4]; // [rsp+1E0h] [rbp+E0h] BYREF

  v1 = wil::ExpandEnvironmentStringsW<std::wstring,256>(v13);
  std::wstring::wstring((__int64)v12, (__int64)v1);
  std::wstring::_Tidy_deallocate(v13);
  v9[0] = L"lastCompatBackupTime.txt";
  v9[1] = std::_WChar_traits<wchar_t>::length((__int64)L"lastCompatBackupTime.txt");
  std::wstring::wstring((__int64)v11, (__int64)v9);
  std::filesystem::operator/(v10, v12, (std::filesystem *)v11);
  v7 = 0LL;
  std::wstring::wstring((__int64)v9, v10);
  v4 = std::filesystem::exists((std::filesystem *)v9, v2, v3);
  std::wstring::_Tidy_deallocate(v9);
  if ( v4 )
  {
    std::fstream::fstream(v8, v10);
    std::istream::operator>>(v8, &v7);
    std::fstream::`vbase destructor'(v8);
  }
  v5 = v7;
  std::wstring::_Tidy_deallocate(v10);
  std::wstring::_Tidy_deallocate(v11);
  std::wstring::_Tidy_deallocate(v12);
  return v5;
}
