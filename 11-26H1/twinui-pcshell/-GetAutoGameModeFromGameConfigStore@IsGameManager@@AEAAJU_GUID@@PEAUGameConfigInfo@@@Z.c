/*
 * XREFs of ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1801C9238
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x18004D490 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x1800A4A90 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::GetAutoGameModeFromGameConfigStore(
        IsGameManager *this,
        struct _GUID *a2,
        struct GameConfigInfo *a3)
{
  __int128 v3; // xmm0
  __int64 *v6; // rcx
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rcx
  __int128 v11; // xmm0
  int v12; // edi
  int v13; // eax
  unsigned int v14; // r15d
  __int64 *v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rax
  __int128 v18; // xmm0
  __int64 v19; // rcx
  __int128 v20; // xmm0
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int64 v29; // rdx
  __int128 v30; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v32; // [rsp+80h] [rbp+40h] BYREF
  int v33; // [rsp+88h] [rbp+48h] BYREF
  int v34; // [rsp+90h] [rbp+50h] BYREF
  __int64 v35; // [rsp+98h] [rbp+58h] BYREF

  v3 = (__int128)*a2;
  *((_QWORD *)a3 + 2) = 0LL;
  *((_DWORD *)a3 + 6) = 0;
  v35 = 0LL;
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v33 = 0;
  v32 = 4;
  v8 = *v6;
  v30 = v3;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, int *, int *))(v8 + 64))(v6, &v30, 17LL, &v33, &v32);
  if ( v9 < 0 )
  {
    v29 = 2480LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v10 = *((_QWORD *)this + 2);
  v11 = (__int128)*a2;
  v34 = 0;
  v30 = v11;
  v12 = v33 != 0 ? 2 : 0;
  v13 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *))(*(_QWORD *)v10 + 112LL))(v10, &v30, 17LL, &v34);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B3,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  if ( v34 )
    ++v12;
  *((_DWORD *)a3 + 2) = v12;
  v15 = (__int64 *)*((_QWORD *)this + 2);
  v16 = (__int128)*a2;
  v32 = 4;
  v17 = *v15;
  v30 = v16;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, int *, int *))(v17 + 64))(v15, &v30, 21LL, &v33, &v32);
  if ( v9 < 0 )
  {
    v29 = 2494LL;
    goto LABEL_17;
  }
  v18 = (__int128)*a2;
  v32 = 4;
  *((_BYTE *)a3 + 5) = v33 != 0;
  v19 = *((_QWORD *)this + 2);
  v30 = v18;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v19 + 64LL))(
         v19,
         &v30,
         29LL,
         &v33,
         &v32);
  if ( v9 < 0 )
  {
    v29 = 2499LL;
    goto LABEL_17;
  }
  v20 = (__int128)*a2;
  v32 = 4;
  *((_BYTE *)a3 + 6) = v33 != 0;
  v21 = *((_QWORD *)this + 2);
  v30 = v20;
  if ( (*(int (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v21 + 64LL))(
         v21,
         &v30,
         19LL,
         &v33,
         &v32) >= 0 )
    *((_DWORD *)a3 + 6) = v33;
  v22 = (__int64 *)*((_QWORD *)this + 2);
  v23 = (__int128)*a2;
  v32 = 8;
  v24 = *v22;
  v30 = v23;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *, __int64, __int64 *, int *))(v24 + 64))(v22, &v30, 18LL, &v35, &v32) >= 0 )
    *((_QWORD *)a3 + 2) = v35;
  v25 = (__int64 *)*((_QWORD *)this + 2);
  v26 = (__int128)*a2;
  v32 = 4;
  v27 = *v25;
  v30 = v26;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *, __int64, int *, int *))(v27 + 64))(v25, &v30, 20LL, &v33, &v32) >= 0 )
    *((_DWORD *)a3 + 7) = v33;
  return 0LL;
}
