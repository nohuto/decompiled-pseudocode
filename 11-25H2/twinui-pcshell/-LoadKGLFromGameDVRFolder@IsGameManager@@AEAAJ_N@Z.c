/*
 * XREFs of ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18013EFCC
 * Callers:
 *     ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x18013F6D0 (-ReloadKnownGameList@IsGameManager@@UEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::Run @ 0x18031A4D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1800EDA28 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 *     ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x1800EE2C4 (-ScanKGLForFSECompat@IsGameManager@@AEAAJXZ.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800FEDD8 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18013EC70 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     ??$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z @ 0x18013ED48 (--$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z.c)
 *     ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x180140E18 (-EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1801410D8 (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x1801412CC (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802C8390 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall IsGameManager::LoadKGLFromGameDVRFolder(IsGameManager *this, char a2)
{
  int KnownFolderSubFolder; // eax
  unsigned int v4; // ebx
  HSTRING v6; // rbx
  const WCHAR *StringRawBuffer; // rax
  IsGameManager *v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  HSTRING v12; // rdi
  struct KnownGameList::IQueryKnownGameList **v13; // r14
  _QWORD *v14; // r12
  const unsigned __int16 *v15; // r8
  int QueryKnownGameListInstance; // eax
  int updated; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // r14d
  __int64 v22; // rdx
  unsigned __int32 v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  char v27; // [rsp+4Ch] [rbp-BCh]
  HSTRING string; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v29; // [rsp+58h] [rbp-B0h] BYREF
  char *v30; // [rsp+60h] [rbp-A8h]
  IsGameManager *v31; // [rsp+68h] [rbp-A0h]
  int *v32; // [rsp+70h] [rbp-98h]
  __m256i v33; // [rsp+78h] [rbp-90h] BYREF
  __int128 v34; // [rsp+98h] [rbp-70h] BYREF
  __int128 v35; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v36[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v37[40]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v38[632]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v39[696]; // [rsp+378h] [rbp+270h] BYREF
  _BYTE v40[4]; // [rsp+630h] [rbp+528h] BYREF
  _BYTE v41[4]; // [rsp+634h] [rbp+52Ch] BYREF
  _BYTE v42[704]; // [rsp+638h] [rbp+530h] BYREF
  _BYTE v43[16]; // [rsp+8F8h] [rbp+7F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+940h] [rbp+838h]

  v27 = a2;
  v26 = 0;
  v29 = 0LL;
  string = 0LL;
  v31 = this;
  v32 = &v26;
  v33.m256i_i8[0] = 1;
  KnownFolderSubFolder = GetKnownFolderSubFolder(
                           &FOLDERID_LocalAppData,
                           L"Microsoft\\GameDVR",
                           0LL,
                           (struct Windows::Internal::String *)&string);
  v4 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A2,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)KnownFolderSubFolder);
    BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>((int *)this + 11, &v26);
    if ( string )
      WindowsDeleteString(string);
    return v4;
  }
  v6 = string;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  CreateDirectoryW(StringRawBuffer, 0LL);
  v9 = IsGameManager::EnsureGameDVRFolderAccess(v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A6,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
  v10 = GetKnownFolderSubFolder(
          &FOLDERID_LocalAppData,
          L"Microsoft\\GameDVR\\KnownGameList.bin",
          0LL,
          (struct Windows::Internal::String *)&v29);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v10);
    BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>((int *)this + 11, &v26);
    if ( v6 )
      WindowsDeleteString(v6);
    if ( v29 )
      WindowsDeleteString(v29);
    return v11;
  }
  v30 = (char *)this + 32;
  AcquireSRWLockExclusive((PSRWLOCK)this + 4);
  v12 = v29;
  v13 = (struct KnownGameList::IQueryKnownGameList **)WindowsGetStringRawBuffer(v29, 0LL);
  v14 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  QueryKnownGameListInstance = KnownGameList::CreateQueryKnownGameListInstance(
                                 (IsGameManager *)((char *)this + 24),
                                 v13,
                                 v15);
  v26 = QueryKnownGameListInstance;
  if ( (unsigned int)(QueryKnownGameListInstance + 2147024894) > 1
    && QueryKnownGameListInstance != -2147024809
    && QueryKnownGameListInstance < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B4,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)QueryKnownGameListInstance);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
  if ( v26 >= 0 )
  {
    memset(&v33.m256i_u64[1], 0, 24);
    v34 = 0LL;
    v35 = 0LL;
    v30 = (char *)this + 32;
    AcquireSRWLockShared((PSRWLOCK)this + 4);
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v14 + 80LL))(*v14, (char *)this + 44);
    if ( v27 )
    {
      *((_QWORD *)this + 13) = GetTickCount64() + 30000;
      updated = IsGameManager::UpdateGameConfigStoreFromKGL(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2CC,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)updated);
      v18 = IsGameManager::ScanKGLForFSECompat(this);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2CE,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v18);
      if ( WaitForSingleObject(*((HANDLE *)this + 12), 0) )
      {
        v19 = SHRegSetDWORD(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
                L"KGLToGCSUpdatedRevision",
                *((_DWORD *)this + 11));
        if ( v19 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2D5,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v19);
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(*(_QWORD *)*v14 + 72LL))(*v14, &v33.m256i_u64[1]);
      v21 = v20;
      if ( v20 < 0 )
      {
        v22 = 728LL;
LABEL_58:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v20);
        ReleaseSRWLockShared((PSRWLOCK)this + 4);
        BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>((int *)this + 11, &v26);
        Windows::Internal::String::~String(&string);
        Windows::Internal::String::~String(&v29);
        return v21;
      }
      v23 = v33.m256i_u32[3];
      if ( v33.m256i_i32[3] >= 2u )
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v14 + 104LL))(*v14, &v34);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 734LL;
          goto LABEL_58;
        }
        v24 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                2LL,
                (char *)&v35 + 12);
        v21 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2E0,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v24);
          ReleaseSRWLockShared((PSRWLOCK)this + 4);
          BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>((int *)this + 11, &v26);
          if ( v6 )
            WindowsDeleteString(v6);
          if ( v12 )
            WindowsDeleteString(v12);
          return v21;
        }
        v23 = v33.m256i_u32[3];
      }
      if ( v23 >= 3 )
      {
        memset_0(v36, 0, 0x2B8uLL);
        v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v14 + 112LL))(*v14, v36);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 743LL;
          goto LABEL_58;
        }
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                3LL,
                v37);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 745LL;
          goto LABEL_58;
        }
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                4LL,
                v38,
                624LL);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 746LL;
          goto LABEL_58;
        }
        v23 = v33.m256i_u32[3];
      }
      if ( v23 >= 4 )
      {
        memset_0(v39, 0, 0x2C0uLL);
        v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 120LL))(*((_QWORD *)this + 3), v39);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 752LL;
          goto LABEL_58;
        }
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                6LL,
                v40,
                4LL);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 754LL;
          goto LABEL_58;
        }
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                7LL,
                v41,
                4LL);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 755LL;
          goto LABEL_58;
        }
        v23 = v33.m256i_u32[3];
      }
      if ( v23 >= 5 )
      {
        memset_0(v42, 0, 0x2C4uLL);
        v20 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 128LL))(*((_QWORD *)this + 3), v42);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 761LL;
          goto LABEL_58;
        }
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                8LL,
                v43,
                4LL);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = 763LL;
          goto LABEL_58;
        }
      }
    }
    LODWORD(string) = *((_DWORD *)this + 11);
    v25 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
            L"KGLRevision",
            4u,
            (BYTE *)&string,
            4u);
    if ( v25 > 0 )
      v25 = (unsigned __int16)v25 | 0x80070000;
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FF,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v25);
    ReleaseSRWLockShared((PSRWLOCK)this + 4);
  }
  BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>((int *)this + 11, &v26);
  if ( v6 )
    WindowsDeleteString(v6);
  if ( v12 )
    WindowsDeleteString(v12);
  return 0LL;
}
