/*
 * XREFs of ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x180125910
 * Callers:
 *     ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x180126050 (-ReloadKnownGameList@IsGameManager@@UEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::Run @ 0x180316980 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x1800F0B54 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x18010EB2C (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 *     ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x18010F3E4 (-ScanKGLForFSECompat@IsGameManager@@AEAAJXZ.c)
 *     ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x180125630 (-EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1801274CC (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x180127CC8 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801DE804 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     ??$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z @ 0x1801F8D7C (--$KGLLoaded@AEAKAEAJ@BroadcastDVRTraceProvider@@SAXAEAKAEAJ@Z.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1802BF8E0 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall IsGameManager::LoadKGLFromGameDVRFolder(IsGameManager *this, char a2)
{
  __m128i v3; // xmm6
  int KnownFolderSubFolder; // eax
  unsigned int v5; // ebx
  HSTRING v7; // rbx
  const WCHAR *StringRawBuffer; // rax
  __int64 v9; // rdx
  IsGameManager *v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  HSTRING v15; // rdi
  struct KnownGameList::IQueryKnownGameList **v16; // rsi
  _QWORD *v17; // r13
  const unsigned __int16 *v18; // r8
  int QueryKnownGameListInstance; // eax
  int updated; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // esi
  __int64 v25; // rdx
  unsigned int v26; // eax
  int v27; // eax
  signed int v28; // eax
  struct _SECURITY_ATTRIBUTES *v29; // [rsp+38h] [rbp-D0h]
  char v30; // [rsp+48h] [rbp-C0h]
  int v31; // [rsp+4Ch] [rbp-BCh] BYREF
  HSTRING string; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v33; // [rsp+58h] [rbp-B0h] BYREF
  char *v34; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v35[3]; // [rsp+68h] [rbp-A0h]
  char v36; // [rsp+80h] [rbp-88h]
  __int128 v37; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h]
  __int128 v39; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v41[32]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v42[40]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v43[632]; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v44[696]; // [rsp+388h] [rbp+280h] BYREF
  _BYTE v45[4]; // [rsp+640h] [rbp+538h] BYREF
  _BYTE v46[4]; // [rsp+644h] [rbp+53Ch] BYREF
  _BYTE v47[704]; // [rsp+648h] [rbp+540h] BYREF
  _BYTE v48[16]; // [rsp+908h] [rbp+800h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+960h] [rbp+858h]

  v30 = a2;
  v31 = 0;
  v33 = 0LL;
  string = 0LL;
  v3 = *(__m128i *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                     &v34,
                     this,
                     &v31);
  *(__m128i *)&v35[1] = v3;
  v36 = 1;
  KnownFolderSubFolder = GetKnownFolderSubFolder(
                           &FOLDERID_LocalAppData,
                           L"Microsoft\\GameDVR",
                           0LL,
                           (struct Windows::Internal::String *)&string);
  v5 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A2,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)KnownFolderSubFolder);
    BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>(
      v3.m128i_i64[0] + 44,
      _mm_srli_si128(v3, 8).m128i_u64[0]);
    if ( string )
      WindowsDeleteString(string);
    return v5;
  }
  v7 = string;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  CreateDirectoryW(StringRawBuffer, 0LL);
  v12 = IsGameManager::EnsureGameDVRFolderAccess(v10, v9, v11);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A6,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v12);
  v13 = GetKnownFolderSubFolder(
          &FOLDERID_LocalAppData,
          L"Microsoft\\GameDVR\\KnownGameList.bin",
          0LL,
          (struct Windows::Internal::String *)&v33);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v13);
    BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>(
      v3.m128i_i64[0] + 44,
      _mm_srli_si128(v3, 8).m128i_u64[0]);
    if ( v7 )
      WindowsDeleteString(v7);
    if ( v33 )
      WindowsDeleteString(v33);
    return v14;
  }
  v34 = (char *)this + 32;
  AcquireSRWLockExclusive((PSRWLOCK)this + 4);
  v15 = v33;
  v16 = (struct KnownGameList::IQueryKnownGameList **)WindowsGetStringRawBuffer(v33, 0LL);
  v17 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  QueryKnownGameListInstance = KnownGameList::CreateQueryKnownGameListInstance(
                                 (IsGameManager *)((char *)this + 24),
                                 v16,
                                 v18);
  v31 = QueryKnownGameListInstance;
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
  if ( v31 >= 0 )
  {
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v34 = (char *)this + 32;
    AcquireSRWLockShared((PSRWLOCK)this + 4);
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v17 + 80LL))(*v17, (char *)this + 44);
    if ( v30 )
    {
      *((_QWORD *)this + 13) = GetTickCount64() + 30000;
      updated = IsGameManager::UpdateGameConfigStoreFromKGL(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2CC,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)updated);
      v21 = IsGameManager::ScanKGLForFSECompat(this);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2CE,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v21);
      if ( WaitForSingleObject(*((HANDLE *)this + 12), 0) )
      {
        v22 = SHRegSetDWORD(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
                L"KGLToGCSUpdatedRevision",
                *((_DWORD *)this + 11));
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2D5,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v22);
      }
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v17 + 72LL))(*v17, &v37);
      v24 = v23;
      if ( v23 < 0 )
      {
        v25 = 728LL;
LABEL_58:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v23);
        ReleaseSRWLockShared((PSRWLOCK)this + 4);
        BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>(
          v3.m128i_i64[0] + 44,
          _mm_srli_si128(v3, 8).m128i_u64[0]);
        Windows::Internal::String::~String(&string);
        Windows::Internal::String::~String(&v33);
        return v24;
      }
      v26 = DWORD1(v37);
      if ( DWORD1(v37) >= 2 )
      {
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v17 + 104LL))(*v17, &v39);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 734LL;
          goto LABEL_58;
        }
        v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                2LL,
                (char *)&v40 + 12);
        v24 = v27;
        if ( v27 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2E0,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v27);
          ReleaseSRWLockShared((PSRWLOCK)this + 4);
          BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>(
            v3.m128i_i64[0] + 44,
            _mm_srli_si128(v3, 8).m128i_u64[0]);
          if ( v7 )
            WindowsDeleteString(v7);
          if ( v15 )
            WindowsDeleteString(v15);
          return v24;
        }
        v26 = DWORD1(v37);
      }
      if ( v26 >= 3 )
      {
        memset_0(v41, 0, 0x2B8uLL);
        v23 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v17 + 112LL))(*v17, v41);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 743LL;
          goto LABEL_58;
        }
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                3LL,
                v42);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 745LL;
          goto LABEL_58;
        }
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                4LL,
                v43,
                624LL);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 746LL;
          goto LABEL_58;
        }
        v26 = DWORD1(v37);
      }
      if ( v26 >= 4 )
      {
        memset_0(v44, 0, 0x2C0uLL);
        v23 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 120LL))(*((_QWORD *)this + 3), v44);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 752LL;
          goto LABEL_58;
        }
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                6LL,
                v45,
                4LL);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 754LL;
          goto LABEL_58;
        }
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                7LL,
                v46,
                4LL);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 755LL;
          goto LABEL_58;
        }
        v26 = DWORD1(v37);
      }
      if ( v26 >= 5 )
      {
        memset_0(v47, 0, 0x2C4uLL);
        v23 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 128LL))(*((_QWORD *)this + 3), v47);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 761LL;
          goto LABEL_58;
        }
        v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 2) + 88LL))(
                *((_QWORD *)this + 2),
                8LL,
                v48,
                4LL);
        v24 = v23;
        if ( v23 < 0 )
        {
          v25 = 763LL;
          goto LABEL_58;
        }
      }
    }
    LODWORD(string) = *((_DWORD *)this + 11);
    v28 = _RegSetKeyValueWithSDDL(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
            L"KGLRevision",
            4u,
            &string,
            4u,
            v29);
    if ( v28 > 0 )
      v28 = (unsigned __int16)v28 | 0x80070000;
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2FF,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v28);
    ReleaseSRWLockShared((PSRWLOCK)this + 4);
  }
  BroadcastDVRTraceProvider::KGLLoaded<unsigned long &,long &>(v3.m128i_i64[0] + 44, _mm_srli_si128(v3, 8).m128i_u64[0]);
  if ( v7 )
    WindowsDeleteString(v7);
  if ( v15 )
    WindowsDeleteString(v15);
  return 0LL;
}
