/*
 * XREFs of ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801F41A0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x18005A178 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18005A3E4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18005B5D0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x18029A81C (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x1802A44B8 (--0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1803372F4 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18035260C (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded(HKEY *this, char a2)
{
  bool v4; // zf
  DWORD i; // edi
  BYTE *v6; // rax
  WCHAR *v7; // r8
  LPWSTR *v8; // rdx
  unsigned __int64 v9; // r8
  const WCHAR *v10; // rdx
  const WCHAR *v11; // rdx
  unsigned int v12; // eax
  const WCHAR *v13; // rdx
  unsigned int v14; // eax
  const WCHAR *v15; // rdx
  __int64 v16; // rax
  int updated; // eax
  const WCHAR *v18; // rdx
  unsigned int v19; // eax
  unsigned int lpcSubKeys; // [rsp+28h] [rbp-E0h]
  unsigned int lpcSubKeysa; // [rsp+28h] [rbp-E0h]
  int lpcSubKeysb; // [rsp+28h] [rbp-E0h]
  unsigned int lpcSubKeysc; // [rsp+28h] [rbp-E0h]
  DWORD cbMaxValueNameLen; // [rsp+68h] [rbp-A0h] BYREF
  DWORD cbMaxValueLen; // [rsp+6Ch] [rbp-9Ch] BYREF
  DWORD Type; // [rsp+70h] [rbp-98h] BYREF
  DWORD cchValueName; // [rsp+74h] [rbp-94h] BYREF
  DWORD cbData; // [rsp+78h] [rbp-90h] BYREF
  BYTE Data[4]; // [rsp+7Ch] [rbp-8Ch] BYREF
  BYTE v30[8]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v31[192]; // [rsp+88h] [rbp-80h] BYREF
  HKEY v32; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v33[32]; // [rsp+150h] [rbp+48h] BYREF
  __int128 v34; // [rsp+170h] [rbp+68h]
  __int128 v35; // [rsp+180h] [rbp+78h]
  __int128 v36; // [rsp+190h] [rbp+88h]
  __int128 v37; // [rsp+1A0h] [rbp+98h]
  __int128 v38; // [rsp+1B0h] [rbp+A8h]
  __int128 v39; // [rsp+1C0h] [rbp+B8h]
  int v40; // [rsp+1D0h] [rbp+C8h]
  int v41; // [rsp+1D4h] [rbp+CCh]
  __int64 v42; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v43[40]; // [rsp+1E0h] [rbp+D8h] BYREF
  LPWSTR lpValueName[2]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v45; // [rsp+218h] [rbp+110h]
  unsigned __int64 v46; // [rsp+220h] [rbp+118h]
  LPCWSTR Src[2]; // [rsp+228h] [rbp+120h] BYREF
  __int128 v48; // [rsp+238h] [rbp+130h]
  LPBYTE lpData[2]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v50; // [rsp+258h] [rbp+150h]
  unsigned __int64 v51; // [rsp+260h] [rbp+158h]
  __int128 v52; // [rsp+268h] [rbp+160h] BYREF
  __int128 v53; // [rsp+278h] [rbp+170h]
  __int128 v54; // [rsp+288h] [rbp+180h] BYREF
  __int128 v55; // [rsp+298h] [rbp+190h]
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  cbMaxValueNameLen = 0;
  cbMaxValueLen = 0;
  if ( RegQueryInfoKeyW(this[8], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, &cbMaxValueLen, 0LL, 0LL) >= 0 )
  {
    v4 = cbMaxValueNameLen++ == -1;
    cchValueName = cbMaxValueNameLen;
    *(_OWORD *)lpValueName = 0LL;
    v45 = 0LL;
    v46 = 7LL;
    LOWORD(lpValueName[0]) = 0;
    if ( v4 )
    {
      v45 = cbMaxValueNameLen;
      *((_WORD *)lpValueName + cbMaxValueNameLen) = 0;
    }
    else
    {
      std::wstring::append((wchar_t *)lpValueName, cbMaxValueNameLen, 0);
    }
    cbData = cbMaxValueLen;
    *(_OWORD *)lpData = 0LL;
    v50 = 0LL;
    v51 = 7LL;
    LOWORD(lpData[0]) = 0;
    if ( (unsigned __int64)cbMaxValueLen >> 1 )
    {
      std::wstring::append((wchar_t *)lpData, (unsigned __int64)cbMaxValueLen >> 1, 0);
    }
    else
    {
      v50 = 0LL;
      LOWORD(lpData[0]) = 0;
    }
    Type = 0;
    for ( i = 0; ; ++i )
    {
      v6 = (BYTE *)lpData;
      if ( v51 > 7 )
        v6 = lpData[0];
      v7 = (WCHAR *)lpValueName;
      if ( v46 > 7 )
        v7 = lpValueName[0];
      if ( RegEnumValueW(this[8], i, v7, &cchValueName, 0LL, &Type, v6, &cbData) )
        break;
      if ( Type - 1 <= 1 )
      {
        std::wstring::wstring((char **)Src, L"StartupTNoti");
        v8 = lpValueName;
        if ( v46 > 7 )
          v8 = (LPWSTR *)lpValueName[0];
        v9 = -1LL;
        do
          ++v9;
        while ( *((_WORD *)v8 + v9) );
        std::wstring::append(Src, v8, v9);
        v10 = (const WCHAR *)lpValueName;
        if ( v46 > 7 )
          v10 = lpValueName[0];
        if ( !RegQueryValueExW(this[1], v10, 0LL, 0LL, 0LL, 0LL) )
        {
          v11 = (const WCHAR *)lpValueName;
          if ( v46 > 7 )
            v11 = lpValueName[0];
          v12 = RegDeleteValueW(this[1], v11);
          if ( v12 )
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              (void *)0xB5,
              (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
              (const char *)v12,
              lpcSubKeys);
          *(_DWORD *)Data = *((_DWORD *)this + 14);
          v13 = (const WCHAR *)Src;
          if ( *((_QWORD *)&v48 + 1) > 7uLL )
            v13 = Src[0];
          v14 = RegSetValueExW(this[1], v13, 0, 4u, Data, 4u);
          if ( v14 )
            wil::details::in1diag3::_Throw_Win32(
              retaddr,
              (void *)0xB8,
              (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
              (const char *)v14,
              lpcSubKeysa);
        }
        v15 = (const WCHAR *)Src;
        if ( *((_QWORD *)&v48 + 1) > 7uLL )
          v15 = Src[0];
        if ( RegQueryValueExW(this[1], v15, 0LL, 0LL, 0LL, 0LL) == 2 )
        {
          if ( a2 )
          {
            std::wstring::wstring((__int64)&v54, (__int64)lpValueName);
            std::wstring::wstring((__int64)&v52, (__int64)lpData);
            v32 = this[9];
            std::wstring::wstring((__int64)v33, (__int64)(this + 10));
            v34 = v54;
            v35 = v55;
            *(_QWORD *)&v55 = 0LL;
            *((_QWORD *)&v55 + 1) = 7LL;
            LOWORD(v54) = 0;
            v36 = *(_OWORD *)Src;
            v37 = v48;
            *(_QWORD *)&v48 = 0LL;
            *((_QWORD *)&v48 + 1) = 7LL;
            LOWORD(Src[0]) = 0;
            v38 = v52;
            v39 = v53;
            *(_QWORD *)&v53 = 0LL;
            *((_QWORD *)&v53 + 1) = 7LL;
            LOWORD(v52) = 0;
            v40 = *((_DWORD *)this + 14);
            v41 = 0;
            std::chrono::steady_clock::now(&v42);
            std::wstring::wstring((__int64)v43, (__int64)(this + 3));
            v16 = STARTUPAPPINFO::STARTUPAPPINFO(v31, &v32);
            updated = StartupAppMonitor::UpdateNotificationMap(v16);
            if ( updated < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xC4,
                (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
                (const char *)(unsigned int)updated,
                lpcSubKeysb);
            STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v32);
            std::wstring::_Tidy_deallocate((void **)&v52);
            std::wstring::_Tidy_deallocate((void **)&v54);
          }
          else
          {
            *(_DWORD *)v30 = *((_DWORD *)this + 14);
            v18 = (const WCHAR *)Src;
            if ( *((_QWORD *)&v48 + 1) > 7uLL )
              v18 = Src[0];
            v19 = RegSetValueExW(this[1], v18, 0, 4u, v30, 4u);
            if ( v19 )
              wil::details::in1diag3::_Throw_Win32(
                retaddr,
                (void *)0xCC,
                (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
                (const char *)v19,
                lpcSubKeysc);
          }
        }
        std::wstring::_Tidy_deallocate((void **)Src);
      }
      cchValueName = cbMaxValueNameLen;
      cbData = cbMaxValueLen;
    }
    std::wstring::_Tidy_deallocate((void **)lpData);
    std::wstring::_Tidy_deallocate((void **)lpValueName);
  }
}
