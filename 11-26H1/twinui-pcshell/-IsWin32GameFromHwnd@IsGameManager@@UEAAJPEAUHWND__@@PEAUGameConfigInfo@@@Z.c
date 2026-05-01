/*
 * XREFs of ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x18004D490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVString@Internal@Windows@@@Z @ 0x18004CD10 (-GetStringFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@W4GameProperty_t@ExecutionModel@@PEAVS.c)
 *     ?Release@String@Internal@Windows@@QEAAXXZ @ 0x18004D95C (-Release@String@Internal@Windows@@QEAAXXZ.c)
 *     ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x18004EA94 (-IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x18010F8D8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1801C9238 (-GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z.c)
 *     ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x18021E9E8 (-UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x180316218 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803169E8 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 *     ?UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z @ 0x180316BE0 (-UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::IsWin32GameFromHwnd(RTL_SRWLOCK *this, HWND hWnd, struct GameConfigInfo *a3)
{
  int v5; // eax
  unsigned int v6; // r14d
  unsigned int v7; // ebx
  int v8; // r14d
  DWORD v9; // ebx
  struct _GUID v10; // xmm6
  DWORD v11; // r14d
  PVOID Ptr; // rcx
  int IsGameEnabled; // eax
  IsGameManager *v14; // rcx
  HSTRING v15; // rcx
  PCWSTR StringRawBuffer; // rax
  int v18; // eax
  PVOID v19; // rcx
  int v20; // eax
  int StringFromGameConfigStore; // eax
  PVOID v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  int updated; // eax
  int v26; // eax
  int v27; // eax
  bool v28; // [rsp+48h] [rbp-39h] BYREF
  HSTRING string; // [rsp+50h] [rbp-31h] BYREF
  DWORD dwProcessId[4]; // [rsp+58h] [rbp-29h] BYREF
  struct _GUID Buf1; // [rsp+68h] [rbp-19h] BYREF
  struct _GUID v32; // [rsp+78h] [rbp-9h] BYREF
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
    goto LABEL_29;
  v7 = -2147024809;
  if ( v5 == -2147024809 )
    goto LABEL_29;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x811,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v5);
    v7 = v6;
LABEL_29:
    Windows::Internal::String::~String((Windows::Internal::String *)&string);
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
  v32 = (struct _GUID)xmmword_18077AA50;
  LODWORD(string) = 0;
  *(_BYTE *)a3 = 0;
  *((_BYTE *)a3 + 4) = 0;
  v10 = (struct _GUID)xmmword_18077AA50;
  Windows::Internal::String::Release((struct GameConfigInfo *)((char *)a3 + 32));
  if ( (*(int (__fastcall **)(PVOID, _QWORD, struct _GUID *))(*(_QWORD *)this[2].Ptr + 32LL))(this[2].Ptr, v9, &v32) < 0
    || (Buf1 = v32,
        (int)IsGameManager::IsEnabledInGameConfigStore(
               (IsGameManager *)this,
               &Buf1,
               (bool *)a3,
               (bool *)a3 + 4,
               (unsigned int *)&string) < 0) )
  {
    v32 = (struct _GUID)xmmword_18077AA50;
    Buf1 = (struct _GUID)xmmword_18077AA50;
    v11 = dwProcessId[0];
    AcquireSRWLockShared(this + 4);
    string = 0LL;
    v28 = 0;
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
          IsGameEnabled = IsGameManager::IsGameEnabled(v14, (struct KnownGameList::IGameEntry *)string, &v28);
          if ( IsGameEnabled >= 0 )
          {
            if ( !memcmp_0(&Buf1, &xmmword_18077AA50, 0x10uLL) )
            {
              Buf1 = (struct _GUID)xmmword_18077AA50;
              updated = IsGameManager::UpdateGameConfigStoreFromKGL(
                          (IsGameManager *)this,
                          (struct KnownGameList::IGameEntry *)string,
                          &Buf1,
                          0,
                          0,
                          (struct GameConfigInfo *)((char *)a3 + 32),
                          &v32);
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
            *(_BYTE *)a3 = v28;
            if ( memcmp_0(&v32, &xmmword_18077AA50, 0x10uLL) )
              v10 = v32;
            goto LABEL_42;
          }
          v24 = 1178LL;
        }
        else
        {
          v24 = 1176LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
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
    Buf1 = v32;
    v20 = (*(__int64 (__fastcall **)(PVOID, struct _GUID *, _QWORD, HSTRING *, int))(*(_QWORD *)v19 + 72LL))(
            v19,
            &Buf1,
            0LL,
            &string,
            4);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x478,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v20);
  }
  Buf1 = v32;
  StringFromGameConfigStore = IsGameManager::GetStringFromGameConfigStore(
                                (__int64)this,
                                (__int128 *)&Buf1,
                                0xFu,
                                (struct GameConfigInfo *)((char *)a3 + 32));
  if ( StringFromGameConfigStore < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x47D,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)StringFromGameConfigStore);
  v10 = v32;
  LODWORD(string) = 0;
  v22 = this[2].Ptr;
  Buf1 = v32;
  v23 = (*(__int64 (__fastcall **)(PVOID, struct _GUID *, __int64, HSTRING *, int))(*(_QWORD *)v22 + 72LL))(
          v22,
          &Buf1,
          14LL,
          &string,
          4);
  v7 = v23;
  if ( v23 >= 0 )
  {
LABEL_42:
    if ( *(_BYTE *)a3 )
    {
      Buf1 = v10;
      IsGameManager::GetAutoGameModeFromGameConfigStore((IsGameManager *)this, &Buf1, a3);
      Buf1 = v10;
      v26 = IsGameManager::UpdateGameFullPathInGameConfigStore((IsGameManager *)this, dwProcessId[0], &Buf1);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15B,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v26);
      Buf1 = v10;
      v27 = IsGameManager::UpdateGameLastRunTime((IsGameManager *)this, &Buf1);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15E,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v27);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x138,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v23);
  return v7;
}
