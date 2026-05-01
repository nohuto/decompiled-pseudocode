/*
 * XREFs of ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x18010F3E4
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x180125910 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x18010F8D8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x180111618 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall IsGameManager::ScanKGLForFSECompat(IsGameManager *this)
{
  struct KnownGameList::IEnumerateEntries **v2; // r15
  int v3; // ebx
  unsigned int v4; // r13d
  unsigned int i; // r12d
  struct KnownGameList::IEnumerateEntries **v6; // r14
  struct KnownGameList::IEnumerateEntries **v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // r9d
  int EnumerateEntriesInstance; // eax
  __int64 v13; // rdi
  unsigned int (__fastcall *v14)(__int64, struct KnownGameList::IGameEntry **); // r14
  struct KnownGameList::IGameEntry *v15; // rcx
  const struct std::nothrow_t *v16; // rdx
  int v17; // eax
  unsigned int j; // edi
  int v19; // eax
  unsigned int v20; // r14d
  ULONGLONG TickCount64; // rax
  DWORD v22; // edx
  const struct std::nothrow_t *v23; // rdx
  const struct std::nothrow_t *v24; // rdx
  struct KnownGameList::IGameEntry *v25; // rcx
  __int64 v26; // rcx
  struct KnownGameList::IGameEntry *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rdx
  struct KnownGameList::IEnumerateEntries **v33; // rax
  int v34; // eax
  const struct std::nothrow_t *v35; // rdx
  const struct std::nothrow_t *v36; // rdx
  __int64 v37; // [rsp+48h] [rbp-C0h] BYREF
  struct KnownGameList::IGameEntry *v38; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int8 *v39; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h] BYREF
  int v41; // [rsp+68h] [rbp-A0h] BYREF
  int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  struct KnownGameList::IEnumerateEntries **v43; // [rsp+70h] [rbp-98h]
  __int128 v44; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+88h] [rbp-80h]
  struct _GUID v46; // [rsp+98h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-50h]
  struct KnownGameList::IEnumerateEntries *v49[128]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+500h] [rbp+3F8h]

  v47 = 0LL;
  v48 = 0LL;
  v2 = 0LL;
  v42 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), &v42);
  if ( v3 < 0 )
  {
    v30 = 781LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 3) + 72LL))(*((_QWORD *)this + 3), &v47);
  if ( v3 < 0 )
  {
    v30 = 783LL;
    goto LABEL_43;
  }
  v4 = (unsigned int)v48 / HIDWORD(v48);
  for ( i = 0; i < v4; ++i )
  {
    v40 = 0LL;
    v38 = 0LL;
    v6 = v49;
    LODWORD(v39) = 1024;
    v7 = 0LL;
    v43 = 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned __int8 **))(**((_QWORD **)this + 3) + 96LL))(
           *((_QWORD *)this + 3),
           i,
           v49,
           &v39);
    v9 = v8;
    if ( v8 && v8 != -2147024774 )
    {
      if ( v8 >= 0 )
        goto LABEL_65;
      v31 = (unsigned int)v8;
      v32 = 800LL;
      goto LABEL_55;
    }
    if ( v8 == -2147024774 )
    {
      v33 = (struct KnownGameList::IEnumerateEntries **)operator new[](
                                                          (unsigned int)v39,
                                                          (const struct std::nothrow_t *)&std::nothrow);
      v6 = v33;
      v2 = v33;
      v7 = v33;
      v43 = v33;
      if ( !v33 )
      {
        v9 = -2147024882;
        v31 = 2147942414LL;
        v32 = 805LL;
LABEL_55:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v32,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)v31);
        goto LABEL_65;
      }
      v34 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned __int8 **))(**((_QWORD **)this + 3) + 96LL))(
              *((_QWORD *)this + 3),
              i,
              v33,
              &v39);
      v9 = v34;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x328,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v34);
LABEL_64:
        operator delete(v7, v35);
        goto LABEL_65;
      }
    }
    v10 = (unsigned int)v39;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                                 (KnownGameList *)&v40,
                                 v6,
                                 (unsigned __int8 *)v10,
                                 v11);
    v9 = EnumerateEntriesInstance;
    if ( EnumerateEntriesInstance < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32B,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)EnumerateEntriesInstance);
      if ( !v2 )
        goto LABEL_65;
      goto LABEL_64;
    }
    v2 = 0LL;
LABEL_9:
    while ( 2 )
    {
      v13 = v40;
      v14 = *(unsigned int (__fastcall **)(__int64, struct KnownGameList::IGameEntry **))(*(_QWORD *)v40 + 24LL);
      v15 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v15 + 16LL))(v15);
      }
      if ( !v14(v13, &v38) )
      {
        LOWORD(v37) = 0;
        v17 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, __int64 *))(*(_QWORD *)v38 + 48LL))(
                v38,
                &v37);
        v9 = v17;
        if ( v17 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x331,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v17);
          if ( v7 )
            operator delete(v7, v24);
          v25 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v25 + 16LL))(v25);
          }
          v26 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
        }
        else
        {
          for ( j = 0; ; ++j )
          {
            if ( j >= (unsigned __int16)v37 )
              goto LABEL_9;
            v41 = 0;
            v44 = 0LL;
            v45 = 0LL;
            v19 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, int *, __int128 *))(*(_QWORD *)v38 + 64LL))(
                    v38,
                    j,
                    &v41,
                    &v44);
            v20 = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x338,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                (const char *)(unsigned int)v19);
              if ( v7 )
                operator delete(v7, v36);
              v9 = v20;
              goto LABEL_65;
            }
            if ( (unsigned __int16)v41 == 256 && DWORD2(v44) == 1
              || (unsigned __int16)v41 == 259 && DWORD2(v44) == 1
              || (unsigned __int16)v41 == 260 && DWORD2(v44) == 1 )
            {
              break;
            }
          }
          if ( !*((_QWORD *)this + 12) )
          {
LABEL_26:
            v46 = (struct _GUID)xmmword_18077AA50;
            IsGameManager::UpdateGameConfigStoreFromKGL(this, v38, &v46, 0, 1, 0LL, 0LL);
            continue;
          }
          TickCount64 = GetTickCount64();
          v22 = 0;
          if ( TickCount64 < *((_QWORD *)this + 13) )
            v22 = *((_DWORD *)this + 26) - TickCount64;
          if ( WaitForSingleObject(*((HANDLE *)this + 12), v22) )
          {
            *((_QWORD *)this + 13) = GetTickCount() + 1000;
            goto LABEL_26;
          }
          if ( v7 )
            operator delete(v7, v23);
          v9 = 0;
LABEL_65:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v38);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
        }
        return v9;
      }
      break;
    }
    if ( v7 )
      operator delete(v7, v16);
    v28 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  return 0LL;
}
