/*
 * XREFs of ??$PersistData@UVirtualDesktopPersistedData@CApplicationViewBase@@@CPersistence@ApplicationViewManagement@@QEAAJPEBGAEBUVirtualDesktopPersistedData@CApplicationViewBase@@@Z @ 0x180190794
 * Callers:
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_d38650e98aaa1c01633db47e65347927___ @ 0x180190720 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_d38650e98aaa1c01633db.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9FD8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationViewManagement::CPersistence::PersistData<CApplicationViewBase::VirtualDesktopPersistedData>(
        HKEY *a1,
        const WCHAR *a2,
        __int128 *a3)
{
  __int128 v3; // xmm0
  HKEY v4; // rcx
  unsigned int v5; // eax
  HKEY v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rdx
  unsigned int v10; // eax
  HKEY v11; // rcx
  unsigned int dwOptions; // [rsp+20h] [rbp-60h]
  HKEY hKey; // [rsp+50h] [rbp-30h] BYREF
  BYTE Data[4]; // [rsp+58h] [rbp-28h] BYREF
  int v15; // [rsp+5Ch] [rbp-24h]
  __int128 v16; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v3 = *a3;
  v4 = *a1;
  *(_DWORD *)Data = 16;
  v15 = 1447309360;
  v16 = v3;
  if ( !v4 )
  {
    v7 = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)0x80270257LL);
    return v7;
  }
  hKey = 0LL;
  v5 = RegCreateKeyExW(v4, a2, 0, 0LL, 1u, 0x20006u, 0LL, &hKey, 0LL);
  if ( v5 )
  {
    v9 = 96LL;
  }
  else
  {
    v5 = RegSetValueExW(hKey, L"VirtualDesktop", 0, 3u, Data, 0x18u);
    if ( !v5 )
    {
      v6 = hKey;
      hKey = 0LL;
      if ( v6 )
        RegCloseKey(v6);
      return 0;
    }
    v9 = 104LL;
  }
  v10 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)v9,
          (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
          (const char *)v5,
          dwOptions);
  v11 = hKey;
  v7 = v10;
  hKey = 0LL;
  if ( v11 )
    RegCloseKey(v11);
  return v7;
}
