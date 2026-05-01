/*
 * XREFs of ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575800
 * Callers:
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x18057557C (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$DebugInfo@AEAY0BI@$$CBG@AppUsageTelemetry@@SAXAEAY0BI@$$CBG@Z @ 0x1805737C0 (--$DebugInfo@AEAY0BI@$$CBG@AppUsageTelemetry@@SAXAEAY0BI@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x1805738E0 (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     ??$QueueTask@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_42dce70c870a3964e7319458b8bf7bca_@@@Z @ 0x180573D64 (--$QueueTask@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32ProcessInfo::TerminateApp(const WCHAR *j, char a2, _QWORD *a3)
{
  const WCHAR *v4; // rbx
  int v5; // ebx
  __int64 v6; // rcx
  int v7; // ebx
  const WCHAR *v8; // rbx
  __int64 i; // rax
  int v10; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[4]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = j;
  if ( a2 )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[36]>(L"Attempting to terminate app process");
    v5 = *((_DWORD *)v4 + 4);
    std::wstring::wstring((__int64)v12, a3);
    v10 = v5;
    std::wstring::wstring((__int64)v11, v12);
    v7 = Windows::Internal::ComTaskPool::QueueTask<_lambda_42dce70c870a3964e7319458b8bf7bca_>(v6, &v10);
    std::wstring::_Tidy_deallocate(v11);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCA,
        (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
        (const char *)(unsigned int)v7);
    std::wstring::_Tidy_deallocate(v12);
  }
  else
  {
    v8 = **(const WCHAR ***)j;
    while ( !*((_BYTE *)v8 + 25) )
    {
      if ( **((_DWORD **)v8 + 5) != 1 )
      {
        AppUsageTelemetry::DebugInfo<unsigned short const (&)[24]>(j);
        PostMessageW(*((HWND *)v8 + 4), 0x112u, 0xF060uLL, 0LL);
      }
      j = (const WCHAR *)*((_QWORD *)v8 + 2);
      if ( *((_BYTE *)j + 25) )
      {
        for ( i = *((_QWORD *)v8 + 1); !*(_BYTE *)(i + 25) && v8 == *(const WCHAR **)(i + 16); i = *(_QWORD *)(i + 8) )
          v8 = (const WCHAR *)i;
        v8 = (const WCHAR *)i;
      }
      else
      {
        v8 = (const WCHAR *)*((_QWORD *)v8 + 2);
        for ( j = *(const WCHAR **)j; !*((_BYTE *)j + 25); j = *(const WCHAR **)j )
          v8 = j;
      }
    }
  }
}
