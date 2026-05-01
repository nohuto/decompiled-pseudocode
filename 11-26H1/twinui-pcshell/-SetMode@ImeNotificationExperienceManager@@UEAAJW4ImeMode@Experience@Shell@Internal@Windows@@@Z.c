/*
 * XREFs of ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x1801711D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002050C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800712B0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_1800712B0.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180089CE8 (_tlgKeywordOn.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18017290C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180681E50 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1806832E0 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall ImeNotificationExperienceManager::SetMode(__int64 a1, int a2)
{
  CSingleViewShellExperience *v3; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v7; // ebx
  HWND ForegroundWindow; // rax
  HMONITOR v9; // rax
  int v10; // r14d
  HMONITOR v11; // r8
  int v12; // ecx
  int v13; // r14d
  int v14; // edx
  unsigned int v15; // r8d
  WCHAR *v16; // rdi
  unsigned __int64 v17; // rbx
  unsigned int v18; // eax
  UINT32 v19; // edx
  HRESULT v20; // eax
  int v21; // edx
  unsigned int v22; // r8d
  int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  PCWSTR sourceString[3]; // [rsp+40h] [rbp-39h] BYREF
  struct tagMONITORINFO mi; // [rsp+58h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp+7h] BYREF
  HSTRING string; // [rsp+98h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v3 = (CSingleViewShellExperience *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 88) == 2 )
  {
    v4 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(a1 + 48));
    if ( (v4 & 0x80000000) != 0 )
    {
      v5 = 188LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
        (const char *)v4);
      return v4;
    }
  }
  v7 = 0;
  if ( a2 == 1 || a2 == 2 )
    v7 = 1041;
  ForegroundWindow = GetForegroundWindow();
  v9 = MonitorFromWindow(ForegroundWindow, 2u);
  v10 = (int)v9;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v9, &mi) )
  {
    v4 = -2147467259;
    v5 = 206LL;
    goto LABEL_4;
  }
  v12 = mi.rcMonitor.right - mi.rcMonitor.left;
  if ( mi.rcMonitor.right - mi.rcMonitor.left >= mi.rcMonitor.bottom - mi.rcMonitor.top )
    v12 = mi.rcMonitor.bottom - mi.rcMonitor.top;
  v13 = ExperienceManagerUtils::UnscaleByPerMonitorDPI(
          (ExperienceManagerUtils *)(unsigned int)(int)((double)v12 * 0.15),
          v10,
          v11);
  if ( (double)v13 / 18.0 < 1.0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x68,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
  memset(sourceString, 0, sizeof(sourceString));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
    (wchar_t **)sourceString,
    L"%s %ld %ld %ld %ld",
    L"Windows.Internal.ShellExperience.ImeStatusNotification",
    18LL,
    v13,
    v7,
    a2);
  string = 0LL;
  v16 = (WCHAR *)sourceString[0];
  v17 = -1LL;
  do
    ++v17;
  while ( sourceString[0][v17] );
  if ( v17 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v14, v15);
    JUMPOUT(0x180171487LL);
  }
  v18 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v17, v14, v15);
  v19 = v18 - 1;
  if ( (unsigned int)v17 < v18 )
    v19 = v17;
  v20 = WindowsCreateStringReference(v16, v19, &hstringHeader, &string);
  if ( v20 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20, v21, v22);
    __debugbreak();
  }
  v23 = CSingleViewShellExperience::SetArgs(v3, string);
  v4 = v23;
  if ( v23 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v23);
    if ( v16 )
      CoTaskMemFree(v16);
    return v4;
  }
  v24 = CSingleViewShellExperience::Show(
          (__int64)v3,
          (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
  v4 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\imestatusnotificationexperiencemanager.cpp",
      (const char *)(unsigned int)v24);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)sourceString);
    return v4;
  }
  if ( (unsigned int)dword_1808D4E58 > 5 && tlgKeywordOn((__int64)&dword_1808D4E58, 0x400000000000LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v25,
      byte_1807F1F19,
      0LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)sourceString);
  return 0LL;
}
