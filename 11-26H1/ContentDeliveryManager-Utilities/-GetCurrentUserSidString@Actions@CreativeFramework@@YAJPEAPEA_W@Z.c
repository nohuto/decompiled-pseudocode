/*
 * XREFs of ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x1800A3A60
 * Callers:
 *     ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x1800A33F8 (--0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180029DFC (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A530 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800579DC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x180091158 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEB_W_K2PEAPEA_W@Z @ 0x1800A32F8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEB_W_K2PEAPEA_W@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Actions::GetCurrentUserSidString(void **this, wchar_t **a2)
{
  unsigned int ValueW; // eax
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  PHKEY phkResult; // [rsp+20h] [rbp-1D8h]
  DWORD pcbData; // [rsp+40h] [rbp-1B8h] BYREF
  HKEY hkey; // [rsp+48h] [rbp-1B0h] BYREF
  WCHAR SubKey[8]; // [rsp+50h] [rbp-1A8h] BYREF
  unsigned __int16 pvData[192]; // [rsp+60h] [rbp-198h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+0h]

  *this = 0LL;
  hkey = 0LL;
  ValueW = RegOpenKeyExW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\SessionData",
             0,
             9u,
             &hkey);
  if ( ValueW )
  {
    v4 = 40LL;
LABEL_7:
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           v4,
           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
           (const char *)ValueW);
    goto LABEL_13;
  }
  v5 = StringCchPrintfW(SubKey, 8LL, L"%d", NtCurrentPeb()->SessionId);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 42LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_13;
  }
  pcbData = 185;
  ValueW = RegGetValueW(hkey, SubKey, L"LoggedOnUserSID", 2u, 0LL, pvData, &pcbData);
  if ( ValueW )
  {
    v4 = 46LL;
    goto LABEL_7;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( pvData[v10] );
  v5 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, pvData, v10, (__int64)phkResult, this);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 47LL;
    goto LABEL_12;
  }
LABEL_13:
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(&hkey);
  return v6;
}
