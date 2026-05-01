/*
 * XREFs of ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x180111910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1800EE7B8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x180111630 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x180111E00 (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x180112CE8 (-IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z.c)
 *     ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1801D2F10 (-GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z.c)
 *     ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x18022DDB0 (-UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x180319D78 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x18031A538 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 *     ?UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z @ 0x18031A730 (-UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::IsWin32GameFromHwnd(RTL_SRWLOCK *this, HWND hWnd, struct GameConfigInfo *a3)
{
  int v5; // eax
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  int v8; // r14d
  DWORD v9; // ebx
  __int128 v10; // xmm6
  DWORD v11; // r14d
  PVOID Ptr; // rcx
  int IsGameEnabled; // eax
  IsGameManager *v14; // rcx
  HSTRING v15; // rcx
  PCWSTR StringRawBuffer; // rax
  int v18; // eax
  PVOID v19; // r10
  __int64 (__fastcall *v20)(PVOID, struct _GUID *, _QWORD, HSTRING *, int); // rax
  int v21; // eax
  int StringFromGameConfigStore; // eax
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  int updated; // eax
  __int64 v28; // rax
  int v29; // eax
  int v30; // eax
  bool v31; // [rsp+48h] [rbp-39h] BYREF
  HSTRING string; // [rsp+50h] [rbp-31h] BYREF
  DWORD dwProcessId[4]; // [rsp+58h] [rbp-29h] BYREF
  struct _GUID v34; // [rsp+68h] [rbp-19h] BYREF
  struct _GUID v35; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  dwProcessId[0] = 0;
  *(_WORD *)a3 = 0;
  *((_BYTE *)a3 + 2) = 0;
  GetWindowThreadProcessId(hWnd, dwProcessId);
  string = 0LL;
  *((_BYTE *)a3 + 2) = 0;
  v5 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, _QWORD, HSTRING *))this->Ptr + 13))(this, dwProcessId[0], &string);
  v6 = v5;
  v7 = -2147024891;
  if ( v5 == -2147024891 )
    goto LABEL_30;
  v7 = -2147024809;
  if ( v5 == -2147024809 )
    goto LABEL_30;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x811,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v5);
    v7 = v6;
LABEL_30:
    Windows::Internal::String::~String(&string);
    return v7;
  }
  v8 = 0;
  if ( !*((_BYTE *)a3 + 2) )
  {
    do
    {
      if ( v8 )
        break;
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      v18 = _o__wcsicmp(StringRawBuffer, g_rgExplorerApps);
      *((_BYTE *)a3 + 2) = v18 == 0;
      v8 = 1;
    }
    while ( v18 );
  }
  if ( string )
    WindowsDeleteString(string);
  if ( *((_BYTE *)a3 + 2) )
    return 0LL;
  v9 = dwProcessId[0];
  v35 = (struct _GUID)xmmword_180758018;
  LODWORD(string) = 0;
  *(_BYTE *)a3 = 0;
  *((_BYTE *)a3 + 4) = 0;
  v10 = xmmword_180758018;
  Windows::Internal::String::Release((struct GameConfigInfo *)((char *)a3 + 32));
  if ( (*(int (__fastcall **)(PVOID, _QWORD, struct _GUID *))(*(_QWORD *)this[2].Ptr + 32LL))(this[2].Ptr, v9, &v35) < 0
    || (v34 = v35,
        (int)IsGameManager::IsEnabledInGameConfigStore(
               (IsGameManager *)this,
               &v34,
               (bool *)a3,
               (bool *)a3 + 4,
               (unsigned int *)&string) < 0) )
  {
    v35 = (struct _GUID)xmmword_180758018;
    v11 = dwProcessId[0];
    AcquireSRWLockShared(this + 4);
    string = 0LL;
    v31 = 0;
    Ptr = this[3].Ptr;
    if ( Ptr )
    {
      IsGameEnabled = (*(__int64 (__fastcall **)(PVOID, _QWORD, HSTRING *))(*(_QWORD *)Ptr + 48LL))(Ptr, v11, &string);
      if ( IsGameEnabled == -2147023728 || IsGameEnabled == -2147024894 )
      {
        v15 = string;
        if ( string )
        {
          string = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v15 + 16LL))(v15);
        }
      }
      else
      {
        if ( IsGameEnabled >= 0 )
        {
          IsGameEnabled = IsGameManager::IsGameEnabled(v14, (struct KnownGameList::IGameEntry *)string, &v31);
          if ( IsGameEnabled >= 0 )
          {
            if ( !_mm_srli_si128((__m128i)xmmword_180758018, 8).m128i_u64[0] )
            {
              v34 = (struct _GUID)xmmword_180758018;
              updated = IsGameManager::UpdateGameConfigStoreFromKGL(
                          (IsGameManager *)this,
                          (struct KnownGameList::IGameEntry *)string,
                          &v34,
                          0,
                          0,
                          (struct GameConfigInfo *)((char *)a3 + 32),
                          &v35);
              if ( updated < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x4A3,
                  (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                  (const char *)(unsigned int)updated);
              IsGameManager::SendAddGameToConfigStoreTelemetry((IsGameManager *)this, v11);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&string);
            ReleaseSRWLockShared(this + 4);
            *(_BYTE *)a3 = v31;
            v28 = *(_QWORD *)&v35.Data1;
            if ( !*(_QWORD *)&v35.Data1 )
              v28 = *(_QWORD *)v35.Data4;
            if ( v28 )
              v10 = (__int128)v35;
            goto LABEL_45;
          }
          v26 = 1178LL;
        }
        else
        {
          v26 = 1176LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)IsGameEnabled);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&string);
      }
    }
    ReleaseSRWLockShared(this + 4);
    *(_BYTE *)a3 = 0;
    return 0LL;
  }
  if ( !(_DWORD)string )
  {
    LODWORD(string) = 1;
    v19 = this[2].Ptr;
    v20 = *(__int64 (__fastcall **)(PVOID, struct _GUID *, _QWORD, HSTRING *, int))(*(_QWORD *)v19 + 72LL);
    v34 = v35;
    v21 = v20(v19, &v34, 0LL, &string, 4);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x478,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v21);
  }
  v34 = v35;
  StringFromGameConfigStore = IsGameManager::GetStringFromGameConfigStore(
                                (__int64)this,
                                &v34,
                                0xFu,
                                (struct GameConfigInfo *)((char *)a3 + 32));
  if ( StringFromGameConfigStore < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x47D,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)StringFromGameConfigStore);
  v10 = (__int128)v35;
  LODWORD(string) = 0;
  v23 = (__int64 *)this[2].Ptr;
  v24 = *v23;
  v34 = v35;
  v25 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, HSTRING *, int))(v24 + 72))(
          v23,
          &v34,
          14LL,
          &string,
          4);
  v7 = v25;
  if ( v25 >= 0 )
  {
LABEL_45:
    if ( *(_BYTE *)a3 )
    {
      v34 = (struct _GUID)v10;
      IsGameManager::GetAutoGameModeFromGameConfigStore((IsGameManager *)this, &v34, a3);
      v34 = (struct _GUID)v10;
      v29 = IsGameManager::UpdateGameFullPathInGameConfigStore((IsGameManager *)this, dwProcessId[0], &v34);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15B,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v29);
      v34 = (struct _GUID)v10;
      v30 = IsGameManager::UpdateGameLastRunTime((IsGameManager *)this, &v34);
      if ( v30 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15E,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v30);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x138,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v25);
  return v7;
}
