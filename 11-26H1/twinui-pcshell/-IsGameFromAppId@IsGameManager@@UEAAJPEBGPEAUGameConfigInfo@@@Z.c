/*
 * XREFs of ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x1800A4A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x18004EA94 (-IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z.c)
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x1800A4DF0 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x1800EF200 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1801C9238 (-GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z.c)
 *     ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x1801F3550 (-CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z.c)
 *     ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x18021E9E8 (-UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::IsGameFromAppId(__int64 **this, CallerIdentity *a2, struct GameConfigInfo *a3)
{
  unsigned int v6; // r9d
  int updated; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // rcx
  int v14; // eax
  struct _GUID v15; // xmm0
  bool v16; // [rsp+30h] [rbp-19h] BYREF
  bool v17; // [rsp+31h] [rbp-18h] BYREF
  bool v18; // [rsp+32h] [rbp-17h] BYREF
  bool v19[5]; // [rsp+33h] [rbp-16h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-11h] BYREF
  struct _GUID v21; // [rsp+40h] [rbp-9h] BYREF
  CallerIdentity *v22; // [rsp+50h] [rbp+7h] BYREF
  struct _GUID Buf1; // [rsp+60h] [rbp+17h] BYREF
  struct _GUID v24; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_WORD *)a3 = 0;
  v22 = a2;
  v16 = 0;
  v19[0] = 0;
  v24 = (struct _GUID)xmmword_18077AA50;
  v20 = 0;
  if ( (int)IsGameManager::CheckStateRepositoryForIsGameFromAppId((IsGameManager *)this, a2, &v16, &v24, &v20) >= 0
    && v16 )
  {
    *(_BYTE *)a3 = v16;
LABEL_4:
    v6 = v20;
    goto LABEL_5;
  }
  v11 = this[2];
  *(_DWORD *)&v19[1] = 0;
  Buf1 = (struct _GUID)xmmword_18077AA50;
  v20 = 0;
  v24 = (struct _GUID)xmmword_18077AA50;
  v12 = *v11;
  v17 = 0;
  v18 = 0;
  if ( (*(int (__fastcall **)(__int64 *, CallerIdentity *, struct _GUID *))(v12 + 40))(v11, a2, &Buf1) < 0 )
    goto LABEL_4;
  v21 = Buf1;
  if ( (int)IsGameManager::IsEnabledInGameConfigStore((IsGameManager *)this, &v21, &v17, &v18, (unsigned int *)&v19[1]) < 0 )
    goto LABEL_4;
  if ( !*(_DWORD *)&v19[1] )
  {
    v13 = this[2];
    *(_DWORD *)&v19[1] = 1;
    v21 = Buf1;
    v14 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, _QWORD, bool *, int))(*v13 + 72))(
            v13,
            &v21,
            0LL,
            &v19[1],
            4);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C1,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v14);
  }
  v15 = Buf1;
  v6 = *(_DWORD *)&v19[1];
  *(_BYTE *)a3 = v17;
  *((_BYTE *)a3 + 4) = v18;
  v24 = v15;
  v20 = v6;
LABEL_5:
  if ( v6 != *((_DWORD *)this + 11) )
  {
    Buf1 = (struct _GUID)xmmword_18077AA50;
    v21 = v24;
    if ( (int)IsGameManager::CheckKGLForIsGameFromAppId(
                (IsGameManager *)this,
                (const unsigned __int16 *)a2,
                &v21,
                v6,
                v19,
                &Buf1) >= 0 )
    {
      *(_BYTE *)a3 = v19[0];
      if ( memcmp_0(&Buf1, &xmmword_18077AA50, 0x10uLL) )
        v24 = Buf1;
    }
  }
  if ( *(_BYTE *)a3 )
  {
    v21 = v24;
    IsGameManager::GetAutoGameModeFromGameConfigStore((IsGameManager *)this, &v21, a3);
    v21 = v24;
    updated = IsGameManager::UpdateGameLastRunTime((IsGameManager *)this, &v21);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AB,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)updated);
  }
  v8 = Windows::Internal::String::Initialize<unsigned short const *>((char *)a3 + 32, &v22);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v8);
  return v9;
}
