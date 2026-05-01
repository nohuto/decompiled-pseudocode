/*
 * XREFs of ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FEAFC
 * Callers:
 *     ??$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1801FEAD4 (--$get_runtime_activation_factory@UIActivationFactory@Foundation@Windows@winrt@@@impl@winrt@@YA-.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x180033DA8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x180177520 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1801CC6C4 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     WINRT_IMPL_GetProcAddress @ 0x1802CA43F (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryExW_0 @ 0x1802CA53C (LoadLibraryExW_0.c)
 *     RoGetActivationFactory_0 @ 0x1802CA771 (RoGetActivationFactory_0.c)
 *     WINRT_IMPL_FreeLibrary @ 0x1802CAFE2 (WINRT_IMPL_FreeLibrary.c)
 *     __std_find_last_trivial_2 @ 0x1802CD210 (__std_find_last_trivial_2.c)
 *     SetErrorInfo_0 @ 0x1802D4169 (SetErrorInfo_0.c)
 *     GetErrorInfo_0 @ 0x1802D4187 (GetErrorInfo_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall winrt::impl::get_runtime_activation_factory_impl<1>(
        _DWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v8; // rcx
  int ActivationFactory_0; // ebx
  HMODULE Library; // rax
  FARPROC ProcAddress; // rax
  LPCWSTR *v12; // r14
  char *v13; // rdi
  __int64 last_trivial_2; // rax
  unsigned __int64 v15; // rax
  const WCHAR *v16; // rcx
  HMODULE v17; // rdi
  FARPROC v18; // rax
  __int64 v19; // rax
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  IErrorInfo *pperrinfo; // [rsp+28h] [rbp-38h] BYREF
  LPCWSTR lpLibFileName[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h]
  unsigned __int64 v25; // [rsp+48h] [rbp-18h]

  v8 = *a2;
  if ( winrt_activation_handler )
  {
    *a1 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))winrt_activation_handler)(v8, a3, a4);
  }
  else
  {
    ActivationFactory_0 = RoGetActivationFactory_0(v8, a3, a4);
    if ( ActivationFactory_0 == -2147221008 )
    {
      Library = LoadLibraryExW_0(L"combase.dll", 0LL, 0x1000u);
      ProcAddress = WINRT_IMPL_GetProcAddress(Library, "CoIncrementMTAUsage");
      if ( !ProcAddress )
      {
        *a1 = -2147221008;
        return a1;
      }
      v21 = 0LL;
      ((void (__fastcall *)(__int64 *))ProcAddress)(&v21);
      ActivationFactory_0 = RoGetActivationFactory_0(*a2, a3, a4);
    }
    if ( ActivationFactory_0 )
    {
      pperrinfo = 0LL;
      GetErrorInfo_0(0, &pperrinfo);
      std::wstring::wstring((__int64)lpLibFileName, a2);
      while ( 1 )
      {
        v12 = lpLibFileName;
        if ( v25 > 7 )
          v12 = (LPCWSTR *)lpLibFileName[0];
        if ( !v24 )
          break;
        v13 = (char *)v12 + 2 * v24;
        last_trivial_2 = _std_find_last_trivial_2(v12, v13, 46LL);
        if ( (char *)last_trivial_2 == v13 )
          break;
        v15 = (last_trivial_2 - (__int64)v12) >> 1;
        if ( v15 == -1LL )
          break;
        std::wstring::resize((__int64 *)lpLibFileName, v15);
        std::wstring::append((__int64)lpLibFileName, (__int64)L".dll");
        v16 = (const WCHAR *)lpLibFileName;
        if ( v25 > 7 )
          v16 = lpLibFileName[0];
        v17 = LoadLibraryExW_0(v16, 0LL, 0x1000u);
        std::wstring::resize((__int64 *)lpLibFileName, v24 - 4);
        if ( v17 )
        {
          v18 = WINRT_IMPL_GetProcAddress(v17, "DllGetActivationFactory");
          if ( v18 )
          {
            v21 = 0LL;
            if ( !((unsigned int (__fastcall *)(__int64, __int64 *))v18)(*a2, &v21) )
            {
              v19 = v21;
              v21 = 0LL;
              *a4 = v19;
              *a1 = 0;
              goto LABEL_25;
            }
            if ( v21 )
              winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v21);
          }
          WINRT_IMPL_FreeLibrary(v17);
        }
      }
      SetErrorInfo_0(0, pperrinfo);
      *a1 = ActivationFactory_0;
LABEL_25:
      std::wstring::_Tidy_deallocate(lpLibFileName);
      if ( pperrinfo )
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&pperrinfo);
    }
    else
    {
      *a1 = 0;
    }
  }
  return a1;
}
