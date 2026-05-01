/*
 * XREFs of ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x1800B6D78
 * Callers:
 *     ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1800B6920 (-HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJ_KPEAW4ShellRequestType@Text@.c)
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x180128064 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataPro.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800B70D4 (-GetProcessAppIdWithAppResolverFallback@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800B718C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B71B0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z @ 0x1800B7210 (-make_cotaskmem_string_nothrow@wil@@YA@PEBG_K@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800B733C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800B7B7C (-GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?close_reset@?$close_invoke_helper@$00P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEAG@Z @ 0x1802EDB7C (-close_reset@-$close_invoke_helper@$00P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZPEAG@details@wil@@SAXPEA.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
HWND __fastcall TouchKeyboardExperienceManager::GetAppIdFromWindow(HWND a1, CallerIdentity *this)
{
  char *v4; // rdi
  HWND v5; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  const char *v9; // r9
  wil::details *v10; // rcx
  char *v11; // rbx
  int LastError; // r15d
  unsigned __int16 **v13; // r8
  WCHAR *v14; // rcx
  const unsigned __int16 *FileNameW; // rax
  HWND cotaskmem_string_nothrow; // rax
  _QWORD *v17; // rbx
  __int64 v18; // r15
  unsigned __int16 **v19; // r8
  const char *v20; // r9
  int WeakWindowAppId; // eax
  _QWORD v22[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LPVOID pv; // [rsp+70h] [rbp+8h] BYREF
  DWORD dwProcessId; // [rsp+78h] [rbp+10h] BYREF
  WCHAR *v26; // [rsp+80h] [rbp+18h] BYREF
  LPVOID v27; // [rsp+88h] [rbp+20h] BYREF

  pv = a1;
  *(_QWORD *)a1 = 0LL;
  if ( !this )
    goto LABEL_5;
  dwProcessId = 0;
  GetWindowThreadProcessId((HWND)this, &dwProcessId);
  v4 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
  v22[1] = v4;
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( *(_QWORD *)a1 )
      wil::details::close_invoke_helper<1,void (*)(void *),&void CoTaskMemFree(void *),unsigned short *>::close_reset(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
    LODWORD(v26) = 0;
    if ( GetWindowThreadProcessId((HWND)this, (LPDWORD)&v26) )
    {
      v11 = (char *)OpenProcess(0x1000u, 0, (DWORD)v26);
      v22[0] = v11;
      if ( ((unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        v27 = 0LL;
        if ( (unsigned int)GetProcessUIContextInformation(v11, &v27) )
        {
          if ( (_DWORD)v27 == 2
            && (WeakWindowAppId = CallerIdentity::GetWeakWindowAppId(this, a1, v19), WeakWindowAppId < 0) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x79,
              (int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
              (const char *)(unsigned int)WeakWindowAppId);
            wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v22);
          }
          else
          {
            if ( *(_QWORD *)a1 || (int)CallerIdentity::GetProcessAppId(v11, a1, v19) >= 0 )
            {
              if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                CloseHandle(v11);
              goto LABEL_3;
            }
            if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              CloseHandle(v11);
          }
          goto LABEL_19;
        }
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0x72,
                      (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                      v20);
        CloseHandle(v11);
      }
      else
      {
        LastError = wil::details::GetLastErrorFailHr(v10);
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v22);
      }
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x6C,
                    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
                    v9);
    }
    if ( LastError >= 0 )
      goto LABEL_3;
LABEL_19:
    v26 = 0LL;
    if ( (int)CallerIdentity::GetProcessAppIdWithAppResolverFallback(v4, &v26, v13) >= 0 )
    {
      v14 = v26;
      if ( !v26 )
        goto LABEL_29;
      FileNameW = PathFindFileNameW(v26);
      if ( FileNameW )
      {
        cotaskmem_string_nothrow = (HWND)wil::make_cotaskmem_string_nothrow(
                                           (wil *)&v27,
                                           FileNameW,
                                           0xFFFFFFFFFFFFFFFFuLL);
        v17 = cotaskmem_string_nothrow;
        if ( a1 != cotaskmem_string_nothrow )
        {
          v18 = *(_QWORD *)cotaskmem_string_nothrow;
          if ( *(_QWORD *)a1 )
            wil::details::close_invoke_helper<1,void (*)(void *),&void CoTaskMemFree(void *),unsigned short *>::close_reset(*(LPVOID *)a1);
          *(_QWORD *)a1 = v18;
          *v17 = 0LL;
        }
        if ( v27 )
          CoTaskMemFree(v27);
      }
    }
    v14 = v26;
LABEL_29:
    if ( v14 )
      CoTaskMemFree(v14);
  }
LABEL_3:
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
LABEL_5:
  if ( !*(_QWORD *)a1 )
  {
    v5 = (HWND)wil::make_cotaskmem_string_nothrow((wil *)&pv, &LocaleName, 0xFFFFFFFFFFFFFFFFuLL);
    v6 = v5;
    if ( a1 != v5 )
    {
      v7 = *(_QWORD *)v5;
      if ( *(_QWORD *)a1 )
        wil::details::close_invoke_helper<1,void (*)(void *),&void CoTaskMemFree(void *),unsigned short *>::close_reset(*(LPVOID *)a1);
      *(_QWORD *)a1 = v7;
      *v6 = 0LL;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  return a1;
}
