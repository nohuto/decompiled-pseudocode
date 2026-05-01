/*
 * XREFs of ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x180126170
 * Callers:
 *     ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x180126050 (-ReloadKnownGameList@IsGameManager@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x18012675C (-GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1801274CC (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x180127A30 (-RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z.c)
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x180127CC8 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1802B5C6C (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall IsGameManager::UpdateGameDVRKGLCopy(IsGameManager *this, unsigned int a2, bool *a3)
{
  DWORD LastError; // esi
  unsigned int v4; // r13d
  unsigned int v5; // r12d
  wchar_t **v6; // r14
  __int64 v7; // rbx
  int KGLLocationForApp; // r15d
  BOOL IsStringEmpty; // eax
  HSTRING v10; // rdi
  PCWSTR StringRawBuffer; // r13
  PCWSTR v12; // rax
  signed __int64 v13; // r13
  int v14; // ecx
  int v15; // edx
  struct KnownGameList::IQueryKnownGameList **v16; // rax
  const unsigned __int16 *v17; // r8
  int QueryKnownGameListInstance; // r15d
  __int64 v19; // rdi
  const WCHAR *v20; // rax
  int v21; // ebx
  const WCHAR *v22; // rax
  const WCHAR *v23; // rax
  const WCHAR *v24; // rdi
  const WCHAR *v25; // rax
  BOOL v26; // eax
  const WCHAR *v27; // rdi
  const WCHAR *v28; // rax
  int v29; // edi
  bool v30; // [rsp+20h] [rbp-38h]
  unsigned int v31; // [rsp+24h] [rbp-34h]
  unsigned int v32; // [rsp+28h] [rbp-30h]
  int v33; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v34; // [rsp+30h] [rbp-28h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF
  __int64 v36[3]; // [rsp+40h] [rbp-18h] BYREF
  HSTRING v40; // [rsp+B8h] [rbp+60h] BYREF

  LastError = 0;
  v31 = 0;
  v4 = -1;
  v32 = -1;
  *a3 = 0;
  v5 = 0;
  v6 = off_1808D6398;
  do
  {
    v7 = 0LL;
    v36[0] = 0LL;
    v34 = 0;
    LOBYTE(v40) = 0;
    v30 = 0;
    v33 = 0;
    KGLLocationForApp = 0;
    if ( *((_DWORD *)v6 - 2) )
    {
      if ( *((_DWORD *)v6 - 2) == 1 )
      {
        string = 0LL;
        KGLLocationForApp = IsGameManager::GetKGLLocationForApp(
                              (IsGameManager *)1,
                              *v6,
                              v6[1],
                              (struct Windows::Internal::String *)&string);
        if ( KGLLocationForApp < 0 )
        {
          v10 = string;
        }
        else
        {
          IsStringEmpty = WindowsIsStringEmpty((HSTRING)v6[5]);
          v10 = string;
          if ( IsStringEmpty )
            goto LABEL_10;
          StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v6[5], 0LL);
          v12 = WindowsGetStringRawBuffer(v10, 0LL);
          v13 = (char *)StringRawBuffer - (char *)v12;
          do
          {
            v14 = *(PCWSTR)((char *)v12 + v13);
            v15 = *v12 - v14;
            if ( v15 )
              break;
            ++v12;
          }
          while ( v14 );
          if ( v15 )
          {
LABEL_10:
            WindowsDeleteString((HSTRING)v6[5]);
            v6[5] = (wchar_t *)v10;
            v10 = 0LL;
            string = 0LL;
            KGLLocationForApp = IsGameManager::GetKGLLocationForApp(
                                  (IsGameManager *)(9LL * v5 + 7),
                                  *v6,
                                  0LL,
                                  (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + 72 * v5 + 56));
            v30 = KGLLocationForApp >= 0;
          }
          else
          {
            LOBYTE(v40) = 1;
          }
        }
        if ( v10 )
          WindowsDeleteString(v10);
        v4 = v32;
LABEL_14:
        if ( KGLLocationForApp < 0 )
          goto LABEL_15;
        goto LABEL_20;
      }
      if ( *((_DWORD *)v6 - 2) == 2 )
      {
        if ( WindowsIsStringEmpty((HSTRING)v6[6]) )
        {
          KGLLocationForApp = GetKnownFolderSubFolder(
                                &FOLDERID_Windows,
                                *v6,
                                0LL,
                                (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations
                                                                   + 64 * v5
                                                                   + 8 * v5
                                                                   + 56));
          if ( KGLLocationForApp < 0 )
            goto LABEL_25;
        }
        if ( WindowsIsStringEmpty((HSTRING)v6[5]) )
        {
          KGLLocationForApp = GetKnownFolderSubFolder(
                                &FOLDERID_Windows,
                                *v6,
                                v6[1],
                                (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations
                                                                   + 64 * v5
                                                                   + 8 * v5
                                                                   + 48));
          goto LABEL_14;
        }
      }
    }
    else
    {
      v33 = 5;
      v19 = 72LL * v5;
      if ( WindowsIsStringEmpty((HSTRING)v6[6]) )
      {
        KGLLocationForApp = GetKnownFolderSubFolder(
                              &FOLDERID_LocalAppData,
                              *v6,
                              0LL,
                              (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + v19 + 56));
        if ( KGLLocationForApp < 0 )
          goto LABEL_25;
      }
      if ( WindowsIsStringEmpty((HSTRING)v6[5]) )
      {
        KGLLocationForApp = GetKnownFolderSubFolder(
                              &FOLDERID_LocalAppData,
                              *v6,
                              v6[1],
                              (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + v19 + 48));
        goto LABEL_14;
      }
    }
LABEL_20:
    if ( !WindowsIsStringEmpty((HSTRING)v6[6]) && (v6[3] == (wchar_t *)-1LL || v30) )
      IsGameManager::RegisterKGLLocationForNotifications(
        (IsGameManager *)(9LL * v5),
        (struct KGLUpdateLocationInfo *)((char *)&g_rgKGLUpdateLocations + 72 * v5));
LABEL_15:
    if ( (_BYTE)v40 )
      goto LABEL_16;
    if ( KGLLocationForApp < 0 )
      goto LABEL_25;
    v21 = v33;
    do
    {
      v16 = (struct KnownGameList::IQueryKnownGameList **)WindowsGetStringRawBuffer((HSTRING)v6[5], 0LL);
      QueryKnownGameListInstance = KnownGameList::CreateQueryKnownGameListInstance((KnownGameList *)v36, v16, v17);
      if ( !v21 )
        break;
      if ( QueryKnownGameListInstance != -2147024864 )
        break;
      Sleep(0x64u);
      --v21;
    }
    while ( v21 );
    v7 = v36[0];
    if ( QueryKnownGameListInstance < 0 )
    {
LABEL_25:
      if ( *((_BYTE *)v6 + 16) )
      {
        v20 = WindowsGetStringRawBuffer((HSTRING)v6[5], 0LL);
        DeleteFileW(v20);
      }
      goto LABEL_40;
    }
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v36[0] + 80LL))(v36[0], &v34) >= 0 )
    {
      if ( v34 > a2 && v34 > v31 || *((_BYTE *)v6 + 17) && v34 >= a2 && v34 >= v31 )
      {
        v31 = v34;
        if ( v4 != -1 && *((_BYTE *)&g_rgKGLUpdateLocations + 72 * v4 + 24) )
        {
          v22 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v4 + 6), 0LL);
          DeleteFileW(v22);
        }
        v4 = v5;
        v32 = v5;
      }
      else if ( *((_BYTE *)v6 + 16) )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v36);
        v23 = WindowsGetStringRawBuffer((HSTRING)v6[5], 0LL);
        DeleteFileW(v23);
        v7 = v36[0];
      }
    }
LABEL_40:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_16:
    ++v5;
    v6 += 9;
  }
  while ( v5 < 7 );
  if ( v4 != -1 )
  {
    v40 = 0LL;
    if ( GetKnownFolderSubFolder(
           &FOLDERID_LocalAppData,
           L"Microsoft\\GameDVR\\KnownGameList.bin",
           0LL,
           (struct Windows::Internal::String *)&v40) >= 0 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
      if ( *((_BYTE *)&g_rgKGLUpdateLocations + 72 * v4 + 24) )
      {
        v24 = WindowsGetStringRawBuffer(v40, 0LL);
        v25 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v4 + 6), 0LL);
        v26 = MoveFileExW(v25, v24, 3u);
      }
      else
      {
        v27 = WindowsGetStringRawBuffer(v40, 0LL);
        v28 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v4 + 6), 0LL);
        v26 = CopyFileW(v28, v27, 0);
      }
      v29 = v26;
      if ( !v26 )
        LastError = GetLastError();
      GameDVRTraceProvider::IsGameManager_KGLUpdated(v4, v29, LastError);
      *a3 = 1;
      ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
    }
    Windows::Internal::String::~String(&v40);
  }
}
