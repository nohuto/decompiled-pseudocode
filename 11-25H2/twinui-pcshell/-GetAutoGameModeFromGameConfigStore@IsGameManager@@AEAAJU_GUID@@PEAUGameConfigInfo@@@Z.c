/*
 * XREFs of ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1801D2F10
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x180111910 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x18012F170 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::GetAutoGameModeFromGameConfigStore(
        IsGameManager *this,
        struct _GUID *a2,
        struct GameConfigInfo *a3)
{
  __int128 v4; // xmm0
  __int64 *v6; // rcx
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rcx
  int v11; // edi
  int v12; // eax
  unsigned int v13; // esi
  __int64 *v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rcx
  __int64 *v21; // rcx
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int128 v25; // xmm0
  __int64 v26; // rax
  __int64 v28; // rdx
  __int128 v29; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  int v31; // [rsp+80h] [rbp+40h] BYREF
  int v32; // [rsp+88h] [rbp+48h] BYREF
  int v33; // [rsp+90h] [rbp+50h] BYREF
  __int64 v34; // [rsp+98h] [rbp+58h] BYREF

  *((_QWORD *)a3 + 2) = 0LL;
  *((_DWORD *)a3 + 6) = 0;
  v4 = (__int128)*a2;
  v6 = (__int64 *)*((_QWORD *)this + 2);
  v34 = 0LL;
  v32 = 0;
  v31 = 4;
  v8 = *v6;
  v29 = v4;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, int *, int *))(v8 + 64))(v6, &v29, 17LL, &v32, &v31);
  if ( v9 < 0 )
  {
    v28 = 2480LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v10 = *((_QWORD *)this + 2);
  v29 = (__int128)*a2;
  v33 = 0;
  v11 = v32 != 0 ? 2 : 0;
  v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *))(*(_QWORD *)v10 + 112LL))(v10, &v29, 17LL, &v33);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9B3,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  if ( v33 )
    ++v11;
  *((_DWORD *)a3 + 2) = v11;
  v14 = (__int64 *)*((_QWORD *)this + 2);
  v15 = (__int128)*a2;
  v31 = 4;
  v16 = *v14;
  v29 = v15;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, int *, int *))(v16 + 64))(v14, &v29, 21LL, &v32, &v31);
  if ( v9 < 0 )
  {
    v28 = 2494LL;
    goto LABEL_17;
  }
  v17 = (__int128)*a2;
  v31 = 4;
  *((_BYTE *)a3 + 5) = v32 != 0;
  v18 = *((_QWORD *)this + 2);
  v29 = v17;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v18 + 64LL))(
         v18,
         &v29,
         29LL,
         &v32,
         &v31);
  if ( v9 < 0 )
  {
    v28 = 2499LL;
    goto LABEL_17;
  }
  v19 = (__int128)*a2;
  v31 = 4;
  *((_BYTE *)a3 + 6) = v32 != 0;
  v20 = *((_QWORD *)this + 2);
  v29 = v19;
  if ( (*(int (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v20 + 64LL))(
         v20,
         &v29,
         19LL,
         &v32,
         &v31) >= 0 )
    *((_DWORD *)a3 + 6) = v32;
  v21 = (__int64 *)*((_QWORD *)this + 2);
  v22 = (__int128)*a2;
  v31 = 8;
  v23 = *v21;
  v29 = v22;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *, __int64, __int64 *, int *))(v23 + 64))(v21, &v29, 18LL, &v34, &v31) >= 0 )
    *((_QWORD *)a3 + 2) = v34;
  v24 = (__int64 *)*((_QWORD *)this + 2);
  v25 = (__int128)*a2;
  v31 = 4;
  v26 = *v24;
  v29 = v25;
  if ( (*(int (__fastcall **)(__int64 *, __int128 *, __int64, int *, int *))(v26 + 64))(v24, &v29, 20LL, &v32, &v31) >= 0 )
    *((_DWORD *)a3 + 7) = v32;
  return 0LL;
}
