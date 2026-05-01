/*
 * XREFs of ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x18013D094
 * Callers:
 *     ??$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAW4StartupAppLocation@@AEAV34@@std@@YA?AV?$shared_ptr@VStartupRegKeyNotification@@@0@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAW4StartupAppLocation@@1@Z @ 0x18013D444 (--$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV-$basic_string@GU-$char_traits@G@s.c)
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??$_Traits_find@U?$char_traits@G@std@@@std@@YA_KQEBG_K101@Z @ 0x180030644 (--$_Traits_find@U-$char_traits@G@std@@@std@@YA_KQEBG_K101@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18013D220 (--0StartupNotification@@QEAA@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180336D74 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall StartupRegKeyNotification::StartupRegKeyNotification(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        _QWORD *a5)
{
  __int64 v9; // rax
  const WCHAR *v10; // rsi
  void *v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rbx
  HKEY *phkResult; // rax
  unsigned int Key; // eax
  unsigned int dwOptions; // [rsp+20h] [rbp-A8h]
  _QWORD v20[6]; // [rsp+60h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v20[4] = a3;
  v20[5] = a5;
  v9 = std::wstring::wstring((__int64)v20, a5);
  StartupNotification::StartupNotification(a1, v9);
  *(_QWORD *)a1 = &StartupRegKeyNotification::`vftable';
  *(_QWORD *)(a1 + 64) = 0LL;
  v10 = (const WCHAR *)(a1 + 80);
  std::wstring::wstring(a1 + 80);
  *(_QWORD *)(a1 + 72) = a2;
  std::wstring::operator=(v11);
  *(_DWORD *)(a1 + 56) = a4;
  v12 = std::_WChar_traits<wchar_t>::length((__int64)L"Software\\Wow6432Node\\Microsoft\\Windows\\CurrentVersion\\Run");
  v14 = a1 + 80;
  if ( *(_QWORD *)(a1 + 104) > 7uLL )
    v14 = *(_QWORD *)v10;
  v15 = std::_Traits_find<std::char_traits<unsigned short>>(v14, *(_QWORD *)(a1 + 96), 0LL, v13, v12);
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put((HKEY *)(a1 + 64));
  if ( *(_QWORD *)(a1 + 104) > 7uLL )
    v10 = *(const WCHAR **)v10;
  Key = RegCreateKeyExW(*(HKEY *)(a1 + 72), v10, 0, 0LL, 0, v15 != 0 ? 281 : 537, 0LL, phkResult, 0LL);
  if ( Key )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x8B,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)Key,
      dwOptions);
  std::wstring::_Tidy_deallocate(a3);
  std::wstring::_Tidy_deallocate(a5);
  return a1;
}
