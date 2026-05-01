/*
 * XREFs of ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAA?AV?$ComPtr@UIApplicationFrameWrapper@@@WRL@Microsoft@@XZ @ 0x1801E79F8
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180191ADC (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180289270 (-GetCurrentInputAppId@TouchKeyboardExperienceManager@@AEAA-AV-$basic_string@GU-$char_traits@G@st.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180291BAC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$CreateAppFrameWrapperFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x18046485C (--$CreateAppFrameWrapperFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
HWND __fastcall TouchKeyboardExperienceManager::CreateAppFrameWrapper(__int64 a1, HWND a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  int v9; // eax
  LONG WindowLongW; // eax
  _QWORD *v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  int v17; // [rsp+28h] [rbp-48h]
  int v18; // [rsp+2Ch] [rbp-44h] BYREF
  HWND hWnd[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  hWnd[1] = a2;
  *(_QWORD *)a2 = 0LL;
  v17 = 1;
  v4 = *(_QWORD *)(a1 + 456);
  if ( !v4 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13E6,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x80270257LL,
      v16);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  v18 = v5;
  if ( v5 < 0 )
  {
    TouchKeyboardExperienceTelemetryLogger::CreateAppFrameWrapperFailed<long &>(&v18);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13ED,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v16);
  }
  v16 = 0LL;
  v6 = *(_QWORD *)a2;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)a2 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v8 = v7(v6, &v16);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13F1,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8,
      v16);
  hWnd[0] = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, hWnd);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x13F4,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v9,
      v16);
  WindowLongW = GetWindowLongW(hWnd[0], -20);
  SetWindowLongW(hWnd[0], -20, WindowLongW | 0x8000000);
  TouchKeyboardExperienceManager::GetCurrentInputAppId(a1, v20);
  if ( v20[2] )
  {
    v11 = v20;
    if ( v20[3] > 7uLL )
      v11 = (_QWORD *)v20[0];
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v16 + 72LL))(v16, v11, 0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x13FF,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, 1LL);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1404,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v13,
      v16);
  std::wstring::_Tidy_deallocate(v20);
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return a2;
}
