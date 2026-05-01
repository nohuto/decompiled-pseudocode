/*
 * XREFs of _anonymous_namespace_::IsCurrentProcessExplorer @ 0x1803ACC94
 * Callers:
 *     ?RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewCoordinator@Shell@UI@WindowsUdk@winrt@@V?$unique_ptr@VIUndockedSearchAppExperienceManagerConfig@@U?$default_delete@VIUndockedSearchAppExperienceManagerConfig@@@wistd@@@wistd@@V?$unique_ptr@VISearchAppPositioner@@U?$default_delete@VISearchAppPositioner@@@wistd@@@9@3V?$unique_ptr@VISearchAppActivator@@U?$default_delete@VISearchAppActivator@@@wistd@@@9@@Z @ 0x1803AFDC0 (-RuntimeClassInitialize@UndockedSearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@AEBUViewC.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Equal@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_NQEBG@Z @ 0x180190FA4 (-_Equal@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_NQEBG@Z.c)
 *     ??$transform@V?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@std@@YA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@G@std@@@std@@@0@V10@0V10@P6AGG@Z@Z @ 0x18029D114 (--$transform@V-$_String_iterator@V-$_String_val@U-$_Simple_types@G@std@@@std@@@std@@V12@P6AGG@Z@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _anonymous_namespace_::GetCurrentProcessName @ 0x1803ABAD4 (_anonymous_namespace_--GetCurrentProcessName.c)
 */

// Hidden C++ exception states: #wind=1
char anonymous_namespace_::IsCurrentProcessExplorer()
{
  void **v0; // r9
  void **v1; // rcx
  unsigned __int16 *v2; // rdx
  char v3; // bl
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  void *v6[3]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v7; // [rsp+50h] [rbp-18h]

  anonymous_namespace_::GetCurrentProcessName(v6);
  v0 = v6;
  if ( v7 > 7 )
    v0 = (void **)v6[0];
  v1 = v6;
  if ( v7 > 7 )
    v1 = (void **)v6[0];
  v2 = (unsigned __int16 *)v6;
  if ( v7 > 7 )
    v2 = (unsigned __int16 *)v6[0];
  std::transform<std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short>>>,unsigned short (*)(unsigned short)>(
    &v5,
    v2,
    (unsigned __int16 *)v1 + (__int64)v6[2],
    v0,
    _o_towlower);
  v3 = std::wstring::_Equal((char *)v6, (char *)L"explorer.exe");
  std::wstring::_Tidy_deallocate(v6);
  return v3;
}
