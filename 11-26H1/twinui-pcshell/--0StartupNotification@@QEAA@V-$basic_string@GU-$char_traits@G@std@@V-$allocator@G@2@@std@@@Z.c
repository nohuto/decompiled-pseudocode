/*
 * XREFs of ??0StartupNotification@@QEAA@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18013D220
 * Callers:
 *     ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x18013D094 (--0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180585FC0 (--0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V-$basic_string@GU-.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x1800F84CC (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180336D74 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall StartupNotification::StartupNotification(__int64 a1, _QWORD *a2)
{
  void *v4; // rcx
  HKEY *phkResult; // rax
  unsigned int Key; // eax
  DWORD dwOptions; // [rsp+20h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  *(_QWORD *)a1 = &StartupNotification::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 300000;
  std::wstring::wstring(a1 + 24);
  std::wstring::operator=(v4);
  phkResult = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::put((HKEY *)(a1 + 8));
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\RunNotification",
          0,
          0LL,
          0,
          0x2011Fu,
          0LL,
          phkResult,
          0LL);
  if ( Key )
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x23,
      (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)Key,
      dwOptions);
  std::wstring::_Tidy_deallocate(a2);
  return a1;
}
