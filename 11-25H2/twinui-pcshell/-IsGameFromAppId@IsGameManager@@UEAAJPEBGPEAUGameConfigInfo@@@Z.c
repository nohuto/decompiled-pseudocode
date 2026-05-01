/*
 * XREFs of ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x18012F170
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800750D8 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x180112CE8 (-IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z.c)
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x18012F4C0 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1801D2F10 (-GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z.c)
 *     ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x1801FDBB8 (-CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z.c)
 *     ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x18022DDB0 (-UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::IsGameFromAppId(
        __int64 **this,
        const unsigned __int16 *a2,
        struct GameConfigInfo *a3)
{
  unsigned int v6; // r9d
  __int64 v7; // rax
  int updated; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rcx
  int v15; // eax
  struct _GUID v16; // xmm0
  bool v17; // [rsp+30h] [rbp-19h] BYREF
  bool v18; // [rsp+31h] [rbp-18h] BYREF
  bool v19; // [rsp+32h] [rbp-17h] BYREF
  bool v20[5]; // [rsp+33h] [rbp-16h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-11h] BYREF
  struct _GUID v22; // [rsp+40h] [rbp-9h] BYREF
  const WCHAR *v23; // [rsp+50h] [rbp+7h] BYREF
  struct _GUID v24; // [rsp+60h] [rbp+17h] BYREF
  struct _GUID v25; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_WORD *)a3 = 0;
  v21 = 0;
  v23 = a2;
  v17 = 0;
  v25 = (struct _GUID)xmmword_180758018;
  v20[0] = 0;
  if ( IsGameManager::CheckStateRepositoryForIsGameFromAppId((IsGameManager *)this, a2, &v17, &v25, &v21) >= 0 && v17 )
  {
    *(_BYTE *)a3 = v17;
LABEL_4:
    v6 = v21;
    goto LABEL_5;
  }
  v12 = this[2];
  *(_DWORD *)&v20[1] = 0;
  v21 = 0;
  v24 = (struct _GUID)xmmword_180758018;
  v18 = 0;
  v25 = (struct _GUID)xmmword_180758018;
  v13 = *v12;
  v19 = 0;
  if ( (*(int (__fastcall **)(__int64 *, const unsigned __int16 *, struct _GUID *))(v13 + 40))(v12, a2, &v24) < 0 )
    goto LABEL_4;
  v22 = v24;
  if ( (int)IsGameManager::IsEnabledInGameConfigStore((IsGameManager *)this, &v22, &v18, &v19, (unsigned int *)&v20[1]) < 0 )
    goto LABEL_4;
  if ( !*(_DWORD *)&v20[1] )
  {
    v14 = this[2];
    *(_DWORD *)&v20[1] = 1;
    v22 = v24;
    v15 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, _QWORD, bool *, int))(*v14 + 72))(
            v14,
            &v22,
            0LL,
            &v20[1],
            4);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C1,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v15);
  }
  v16 = v24;
  v6 = *(_DWORD *)&v20[1];
  *(_BYTE *)a3 = v18;
  *((_BYTE *)a3 + 4) = v19;
  v25 = v16;
  v21 = v6;
LABEL_5:
  if ( v6 != *((_DWORD *)this + 11) )
  {
    v24 = (struct _GUID)xmmword_180758018;
    v22 = v25;
    if ( (int)IsGameManager::CheckKGLForIsGameFromAppId((IsGameManager *)this, a2, &v22, v6, v20, &v24) >= 0 )
    {
      *(_BYTE *)a3 = v20[0];
      v7 = *(_QWORD *)&v24.Data1;
      if ( !*(_QWORD *)&v24.Data1 )
        v7 = *(_QWORD *)v24.Data4;
      if ( v7 )
        v25 = v24;
    }
  }
  if ( *(_BYTE *)a3 )
  {
    v22 = v25;
    IsGameManager::GetAutoGameModeFromGameConfigStore((IsGameManager *)this, &v22, a3);
    v22 = v25;
    updated = IsGameManager::UpdateGameLastRunTime((IsGameManager *)this, &v22);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AB,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)updated);
  }
  v9 = Windows::Internal::String::Initialize<unsigned short const *>((HSTRING *)a3 + 4, &v23);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
  return v10;
}
