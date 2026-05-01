/*
 * XREFs of ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801E95A0
 * Callers:
 *     <none>
 * Callees:
 *     ?length@?$_WChar_traits@_W@std@@SA_KPEB_W@Z @ 0x18003062C (-length@-$_WChar_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ??1STARTUPAPPINFO@@QEAA@XZ @ 0x180030E00 (--1STARTUPAPPINFO@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800334F0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180033DCC (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1800E363C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1802917C8 (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     ??0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z @ 0x1802B4EF4 (--0STARTUPAPPINFO@@QEAA@$$QEAU0@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180336D74 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180358560 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall StartupRegKeyNotification::CheckForNewStartupAppAdded(HKEY *this, char a2)
{
  LPWSTR *v4; // rax
  unsigned __int64 v5; // rdx
  LPBYTE *v6; // rax
  DWORD i; // edi
  BYTE *v8; // rax
  WCHAR *v9; // r8
  unsigned __int64 v10; // rax
  LPWSTR *v11; // rcx
  unsigned __int64 v12; // rax
  void *v13; // rcx
  const WCHAR *v14; // rdx
  const WCHAR *v15; // rdx
  unsigned int v16; // eax
  const WCHAR *v17; // rdx
  unsigned int v18; // eax
  const WCHAR *v19; // rdx
  __int64 v20; // rax
  int updated; // eax
  const WCHAR *v22; // rdx
  unsigned int v23; // eax
  unsigned int lpcSubKeys; // [rsp+20h] [rbp-E0h]
  unsigned int lpcSubKeysa; // [rsp+20h] [rbp-E0h]
  int lpcSubKeysb; // [rsp+20h] [rbp-E0h]
  unsigned int lpcSubKeysc; // [rsp+20h] [rbp-E0h]
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-A0h] BYREF
  DWORD cchValueName; // [rsp+64h] [rbp-9Ch] BYREF
  DWORD cbMaxValueLen; // [rsp+68h] [rbp-98h] BYREF
  DWORD cbData; // [rsp+6Ch] [rbp-94h] BYREF
  DWORD Type; // [rsp+70h] [rbp-90h] BYREF
  BYTE Data[4]; // [rsp+74h] [rbp-8Ch] BYREF
  BYTE v34[8]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v35[192]; // [rsp+80h] [rbp-80h] BYREF
  HKEY v36; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v37[32]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v38[32]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v39[32]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v40[32]; // [rsp+1A8h] [rbp+A8h] BYREF
  int v41; // [rsp+1C8h] [rbp+C8h]
  int v42; // [rsp+1CCh] [rbp+CCh]
  __int64 v43; // [rsp+1D0h] [rbp+D0h] BYREF
  _BYTE v44[40]; // [rsp+1D8h] [rbp+D8h] BYREF
  LPWSTR lpValueName[2]; // [rsp+200h] [rbp+100h] BYREF
  unsigned __int64 v46; // [rsp+210h] [rbp+110h]
  unsigned __int64 v47; // [rsp+218h] [rbp+118h]
  LPCWSTR Src[2]; // [rsp+220h] [rbp+120h] BYREF
  __int128 v49; // [rsp+230h] [rbp+130h]
  LPBYTE lpData[2]; // [rsp+240h] [rbp+140h] BYREF
  unsigned __int64 v51; // [rsp+250h] [rbp+150h]
  unsigned __int64 v52; // [rsp+258h] [rbp+158h]
  _QWORD v53[4]; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v54[4]; // [rsp+280h] [rbp+180h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  cbMaxValueNameLen = 0;
  cbMaxValueLen = 0;
  if ( RegQueryInfoKeyW(this[8], 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cbMaxValueNameLen, &cbMaxValueLen, 0LL, 0LL) >= 0 )
  {
    cchValueName = ++cbMaxValueNameLen;
    std::wstring::wstring((__int64)lpValueName);
    if ( cchValueName > v46 )
    {
      std::wstring::append((__int64 *)lpValueName, cchValueName - v46, 0);
    }
    else
    {
      v46 = cchValueName;
      v4 = lpValueName;
      if ( v47 > 7 )
        v4 = (LPWSTR *)lpValueName[0];
      *((_WORD *)v4 + cchValueName) = 0;
    }
    cbData = cbMaxValueLen;
    std::wstring::wstring((__int64)lpData);
    v5 = (unsigned __int64)cbData >> 1;
    if ( v5 > v51 )
    {
      std::wstring::append((__int64 *)lpData, v5 - v51, 0);
    }
    else
    {
      v51 = (unsigned __int64)cbData >> 1;
      v6 = lpData;
      if ( v52 > 7 )
        v6 = (LPBYTE *)lpData[0];
      *((_WORD *)v6 + v5) = 0;
    }
    Type = 0;
    for ( i = 0; ; ++i )
    {
      v8 = (BYTE *)lpData;
      if ( v52 > 7 )
        v8 = lpData[0];
      v9 = (WCHAR *)lpValueName;
      if ( v47 > 7 )
        v9 = lpValueName[0];
      if ( RegEnumValueW(this[8], i, v9, &cchValueName, 0LL, &Type, v8, &cbData) )
        break;
      if ( Type - 1 <= 1 )
      {
        *(_OWORD *)Src = 0LL;
        v49 = 0LL;
        v10 = std::_WChar_traits<wchar_t>::length((__int64)L"StartupTNoti");
        std::wstring::_Construct<1,unsigned short const *>((char **)Src, L"StartupTNoti", v10);
        v11 = lpValueName;
        if ( v47 > 7 )
          v11 = (LPWSTR *)lpValueName[0];
        v12 = std::_WChar_traits<wchar_t>::length((__int64)v11);
        std::wstring::append(Src, v13, v12);
        v14 = (const WCHAR *)lpValueName;
        if ( v47 > 7 )
          v14 = lpValueName[0];
        if ( !RegQueryValueExW(this[1], v14, 0LL, 0LL, 0LL, 0LL) )
        {
          v15 = (const WCHAR *)lpValueName;
          if ( v47 > 7 )
            v15 = lpValueName[0];
          v16 = RegDeleteValueW(this[1], v15);
          if ( v16 )
            wil::details::in1diag3::_Log_Win32(
              retaddr,
              (void *)0xB5,
              (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
              (const char *)v16,
              lpcSubKeys);
          *(_DWORD *)Data = *((_DWORD *)this + 14);
          v17 = (const WCHAR *)Src;
          if ( *((_QWORD *)&v49 + 1) > 7uLL )
            v17 = Src[0];
          v18 = RegSetValueExW(this[1], v17, 0, 4u, Data, 4u);
          if ( v18 )
            wil::details::in1diag3::_Throw_Win32(
              retaddr,
              (void *)0xB8,
              (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
              (const char *)v18,
              lpcSubKeysa);
        }
        v19 = (const WCHAR *)Src;
        if ( *((_QWORD *)&v49 + 1) > 7uLL )
          v19 = Src[0];
        if ( RegQueryValueExW(this[1], v19, 0LL, 0LL, 0LL, 0LL) == 2 )
        {
          if ( a2 )
          {
            std::wstring::wstring((__int64)v54, lpValueName);
            std::wstring::wstring((__int64)v53, lpData);
            v36 = this[9];
            std::wstring::wstring((__int64)v37, this + 10);
            std::wstring::wstring((__int64)v38, (__int64)v54);
            std::wstring::wstring((__int64)v39, (__int64)Src);
            std::wstring::wstring((__int64)v40, (__int64)v53);
            v41 = *((_DWORD *)this + 14);
            v42 = 0;
            std::chrono::steady_clock::now(&v43);
            std::wstring::wstring((__int64)v44, this + 3);
            v20 = STARTUPAPPINFO::STARTUPAPPINFO(v35, &v36);
            updated = StartupAppMonitor::UpdateNotificationMap(v20);
            if ( updated < 0 )
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xC4,
                (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
                (const char *)(unsigned int)updated,
                lpcSubKeysb);
            STARTUPAPPINFO::~STARTUPAPPINFO((STARTUPAPPINFO *)&v36);
            std::wstring::_Tidy_deallocate(v53);
            std::wstring::_Tidy_deallocate(v54);
          }
          else
          {
            *(_DWORD *)v34 = *((_DWORD *)this + 14);
            v22 = (const WCHAR *)Src;
            if ( *((_QWORD *)&v49 + 1) > 7uLL )
              v22 = Src[0];
            v23 = RegSetValueExW(this[1], v22, 0, 4u, v34, 4u);
            if ( v23 )
              wil::details::in1diag3::_Throw_Win32(
                retaddr,
                (void *)0xCC,
                (unsigned int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
                (const char *)v23,
                lpcSubKeysc);
          }
        }
        std::wstring::_Tidy_deallocate(Src);
      }
      cchValueName = cbMaxValueNameLen;
      cbData = cbMaxValueLen;
    }
    std::wstring::_Tidy_deallocate(lpData);
    std::wstring::_Tidy_deallocate(lpValueName);
  }
}
