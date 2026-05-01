/*
 * XREFs of ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180551604
 * Callers:
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x18055138C (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801362A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$DebugInfo@AEAY0BI@$$CBG@AppUsageTelemetry@@SAXAEAY0BI@$$CBG@Z @ 0x18054F4D4 (--$DebugInfo@AEAY0BI@$$CBG@AppUsageTelemetry@@SAXAEAY0BI@$$CBG@Z.c)
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x18054F5F4 (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     ??$Make@V?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@@12@$$QEAV_lambda_42dce70c870a3964e7319458b8bf7bca_@@@Z @ 0x18054FA24 (--$Make@V-$CTaskWrapper@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32ProcessInfo::TerminateApp(const WCHAR *a1, char a2, __int64 a3)
{
  const WCHAR *v4; // rbx
  int v5; // ebx
  volatile signed __int32 **v6; // rax
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rcx
  DWORD CurrentThreadId; // eax
  int v10; // edi
  const WCHAR *v11; // rbx
  _BYTE *v12; // rax
  __int64 i; // rax
  volatile signed __int32 *v14; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+38h] [rbp-60h] BYREF
  void *v16[4]; // [rsp+40h] [rbp-58h] BYREF
  void *v17[4]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = a1;
  if ( a2 )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[36]>(L"Attempting to terminate app process");
    v5 = *((_DWORD *)v4 + 4);
    std::wstring::wstring((__int64)v17, a3);
    v15 = v5;
    std::wstring::wstring((__int64)v16, (__int64)v17);
    v6 = Microsoft::WRL::Details::Make<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_42dce70c870a3964e7319458b8bf7bca_>,_lambda_42dce70c870a3964e7319458b8bf7bca_>(
           &v14,
           (__int64)&v15);
    v7 = *v6;
    *v6 = 0LL;
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v8);
    }
    CurrentThreadId = GetCurrentThreadId();
    v10 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId);
    if ( v7 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
    std::wstring::_Tidy_deallocate(v16);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCA,
        (int)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
        (const char *)(unsigned int)v10);
    std::wstring::_Tidy_deallocate(v17);
  }
  else
  {
    v11 = **(const WCHAR ***)a1;
    while ( !*((_BYTE *)v11 + 25) )
    {
      if ( **((_DWORD **)v11 + 5) != 1 )
      {
        AppUsageTelemetry::DebugInfo<unsigned short const (&)[24]>(a1);
        PostMessageW(*((HWND *)v11 + 4), 0x112u, 0xF060uLL, 0LL);
      }
      v12 = (_BYTE *)*((_QWORD *)v11 + 2);
      if ( v12[25] )
      {
        for ( i = *((_QWORD *)v11 + 1); !*(_BYTE *)(i + 25) && v11 == *(const WCHAR **)(i + 16); i = *(_QWORD *)(i + 8) )
          v11 = (const WCHAR *)i;
        v11 = (const WCHAR *)i;
      }
      else
      {
        v11 = (const WCHAR *)*((_QWORD *)v11 + 2);
        a1 = *(const WCHAR **)v12;
        if ( !*(_BYTE *)(*(_QWORD *)v12 + 25LL) )
        {
          do
          {
            v11 = a1;
            a1 = *(const WCHAR **)a1;
          }
          while ( !*((_BYTE *)a1 + 25) );
        }
      }
    }
  }
}
