/*
 * XREFs of ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x18010EB2C
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x180125910 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z @ 0x18010F164 (-GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x18010F8D8 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ?DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z @ 0x180110418 (-DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802CE0B0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z @ 0x180315BCC (-CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z @ 0x1803166D0 (-IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x180316790 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z @ 0x180316850 (-IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsGameManager::UpdateGameConfigStoreFromKGL(IsGameManager *this)
{
  unsigned int *v2; // r13
  int v3; // eax
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  _OWORD *v7; // rax
  _OWORD *v8; // rsi
  int v9; // eax
  const struct std::nothrow_t *v10; // rdx
  __int64 i; // rax
  unsigned int *v12; // rbx
  unsigned int *v13; // r14
  __int64 v14; // rcx
  int v15; // r12d
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  __int64 v18; // rcx
  const struct std::nothrow_t *v19; // rdx
  const struct std::nothrow_t *v20; // rdx
  IsGameManager *v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // r14d
  int GameEntryAttribs; // eax
  wil::details::in1diag3 *v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v31; // edx
  const struct std::nothrow_t *v32; // rdx
  int updated; // eax
  int v34; // r14d
  struct KnownGameList::IGameEntry *v35; // rcx
  bool v36; // [rsp+50h] [rbp-B0h] BYREF
  bool v37; // [rsp+51h] [rbp-AFh] BYREF
  bool v38; // [rsp+52h] [rbp-AEh] BYREF
  bool v39; // [rsp+53h] [rbp-ADh] BYREF
  bool v40; // [rsp+54h] [rbp-ACh] BYREF
  bool v41; // [rsp+55h] [rbp-ABh] BYREF
  bool v42; // [rsp+56h] [rbp-AAh] BYREF
  unsigned int v43; // [rsp+58h] [rbp-A8h] BYREF
  struct KnownGameList::IGameEntry *v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int Size; // [rsp+68h] [rbp-98h] BYREF
  int Size_4; // [rsp+6Ch] [rbp-94h]
  unsigned int v47[4]; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v48; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+90h] [rbp-70h]
  unsigned int *v50; // [rsp+98h] [rbp-68h]
  _OWORD *v51; // [rsp+A0h] [rbp-60h]
  unsigned __int16 v52[264]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v53[1024]; // [rsp+2C0h] [rbp+1C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6F8h] [rbp+5F8h]

  v2 = 0LL;
  v43 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         0LL,
         &v43);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x738,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  result = v43;
  if ( !v43 )
    return result;
  v6 = 16LL * v43;
  if ( !is_mul_ok(v43, 0x10uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
    memset_0(v7, 0, v6);
  else
    v8 = 0LL;
  v51 = v8;
  if ( !v8 )
  {
    v4 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x742,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)0x8007000ELL);
    return v4;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, unsigned int *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         v8,
         &v43);
  v4 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x744,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_66;
  }
  for ( i = 0LL; ; i = (unsigned int)(Size_4 + 1) )
  {
    Size_4 = i;
    if ( (unsigned int)i >= v43 )
      break;
    v44 = 0LL;
    Size = 1024;
    v12 = 0LL;
    v50 = 0LL;
    v13 = (unsigned int *)v53;
    v14 = *((_QWORD *)this + 2);
    v49 = 16 * i;
    v48 = (struct _GUID)v8[i];
    v15 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, _BYTE *, unsigned int *))(*(_QWORD *)v14 + 24LL))(
            v14,
            &v48,
            v53,
            &Size);
    if ( v15 == -2147024662 )
    {
      v16 = Size;
      v17 = (unsigned int *)operator new[](Size, (const struct std::nothrow_t *)&std::nothrow);
      v12 = v17;
      if ( !v17 )
      {
        v50 = 0LL;
        v4 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x756,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
        goto LABEL_66;
      }
      memset_0(v17, 0, v16);
      v13 = v12;
      v50 = v12;
      v18 = *((_QWORD *)this + 2);
      v48 = (struct _GUID)v8[(unsigned __int64)v49 / 0x10];
      v15 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, unsigned int *, unsigned int *))(*(_QWORD *)v18 + 24LL))(
              v18,
              &v48,
              v12,
              &Size);
      v2 = v12;
    }
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x75B,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v15);
      GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_GetError(v15);
      if ( v2 )
        operator delete(v2, v19);
      v2 = 0LL;
LABEL_22:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
      continue;
    }
    v2 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, struct KnownGameList::IGameEntry **))(**((_QWORD **)this + 3)
                                                                                            + 64LL))(
           *((_QWORD *)this + 3),
           v13,
           &v44) < 0 )
    {
      if ( *v13 )
      {
        if ( *v13 - 1 > 1 )
        {
          v22 = *((_QWORD *)this + 2);
          v48 = (struct _GUID)v8[(unsigned __int64)v49 / 0x10];
          v23 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v22 + 8LL))(v22, &v48);
          v24 = v23;
          if ( v23 < 0 )
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x772,
              (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
              (const char *)(unsigned int)v23);
            GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError(v24);
          }
        }
      }
      if ( v12 )
        operator delete(v12, v20);
      goto LABEL_22;
    }
    v40 = 0;
    v39 = 0;
    v38 = 0;
    v41 = 0;
    v42 = 0;
    v36 = 0;
    v47[0] = 260;
    GameEntryAttribs = IsGameManager::GetGameEntryAttribs(v21, v44, &v40, &v39, &v38, &v41, &v42, &v36, v52, v47);
    v26 = retaddr;
    if ( GameEntryAttribs < 0 )
    {
      v27 = 1927LL;
LABEL_44:
      wil::details::in1diag3::_Log_Hr(
        v26,
        (void *)v27,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)GameEntryAttribs);
      goto LABEL_56;
    }
    LOBYTE(v26) = 1;
    v37 = 1;
    if ( !v47[0] )
      goto LABEL_41;
    v28 = IsGameManager::CompareOSVersion(v26, v52, v47[0], &v37);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x790,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v28);
    LOBYTE(v26) = v37;
    if ( !v37 && *v13 && *v13 - 1 > 1 )
    {
      v29 = *((_QWORD *)this + 2);
      v48 = (struct _GUID)v8[(unsigned __int64)v49 / 0x10];
      GameEntryAttribs = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v29 + 8LL))(v29, &v48);
      v26 = retaddr;
      if ( GameEntryAttribs < 0 )
      {
        v27 = 1947LL;
        goto LABEL_44;
      }
    }
    else
    {
LABEL_41:
      if ( v38 || (v13[8] & 0x20) == 0 )
      {
        if ( (_BYTE)v26 )
        {
          if ( *v13 < *((_DWORD *)this + 11)
            || (v31 = v13[8], v39 != ((v31 >> 3) & 1))
            || v38 != ((v31 >> 1) & 1)
            || v40 != ((v31 >> 2) & 1)
            || v41 != ((v31 >> 9) & 1)
            || (v10 = (const struct std::nothrow_t *)((v31 >> 7) & 1), v42 != (_DWORD)v10)
            || v36 != ((v13[8] >> 10) & 1) )
          {
            v36 = 0;
            IsGameManager::DelayGameConfigStoreUpdate(this, &v36);
            if ( v36 )
            {
              if ( v12 )
                operator delete(v12, v32);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
              break;
            }
            v48 = (struct _GUID)v8[Size_4];
            updated = IsGameManager::UpdateGameConfigStoreFromKGL(this, v44, &v48, *v13, (v13[8] & 0x20) != 0, 0LL, 0LL);
            v34 = updated;
            if ( updated < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x7BD,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                (const char *)(unsigned int)updated);
              GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError(v34);
            }
          }
        }
        goto LABEL_56;
      }
      v30 = *((_QWORD *)this + 2);
      v48 = (struct _GUID)v8[(unsigned __int64)v49 / 0x10];
      GameEntryAttribs = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v30 + 8LL))(v30, &v48);
      v26 = retaddr;
      if ( GameEntryAttribs < 0 )
      {
        v27 = 1956LL;
        goto LABEL_44;
      }
    }
LABEL_56:
    if ( v12 )
      operator delete(v12, v10);
    v35 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v35 + 16LL))(v35);
    }
  }
  v4 = 0;
LABEL_66:
  operator delete(v8, v10);
  return v4;
}
