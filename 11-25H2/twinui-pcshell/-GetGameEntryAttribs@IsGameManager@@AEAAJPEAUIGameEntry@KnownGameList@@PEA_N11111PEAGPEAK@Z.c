/*
 * XREFs of ?GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z @ 0x1800EE044
 * Callers:
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1800EDA28 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 *     ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x180319D78 (-IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001FEDC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::GetGameEntryAttribs(
        IsGameManager *this,
        struct KnownGameList::IGameEntry *a2,
        bool *a3,
        bool *a4,
        bool *a5,
        bool *a6,
        bool *a7,
        bool *a8,
        unsigned __int16 *a9,
        unsigned int *a10)
{
  bool *v10; // rax
  bool *v11; // r13
  unsigned int v13; // edi
  int v15; // ebx
  __int64 v16; // rdx
  unsigned int *v18; // r14
  unsigned int i; // esi
  bool v20; // zf
  bool *v21; // rcx
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  IsGameManager *v25; // [rsp+90h] [rbp+40h] BYREF
  struct KnownGameList::IGameEntry *v26; // [rsp+98h] [rbp+48h]

  v26 = a2;
  v25 = this;
  v10 = a6;
  v11 = a5;
  LOWORD(v25) = 0;
  v13 = 0;
  *a3 = 0;
  *a4 = 0;
  *v11 = 0;
  *v10 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  v15 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, IsGameManager **))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v25);
  if ( v15 >= 0 )
  {
    v18 = a10;
    for ( i = 0; ; ++i )
    {
      if ( i >= (unsigned __int16)v25 )
      {
        *v18 = v13;
        return 0LL;
      }
      LODWORD(a5) = 0;
      v23 = 0LL;
      v22 = 0LL;
      v15 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, bool **, __int128 *))(*(_QWORD *)v26 + 64LL))(
              v26,
              i,
              &a5,
              &v22);
      if ( v15 < 0 )
      {
        v16 = 2291LL;
        goto LABEL_3;
      }
      switch ( (unsigned __int16)a5 )
      {
        case 0x102u:
          if ( (_DWORD)v22 )
          {
            v15 = -2147418113;
            v16 = 2295LL;
            goto LABEL_3;
          }
          *a3 = DWORD2(v22) != 0;
          break;
        case 0x101u:
          if ( (_DWORD)v22 )
          {
            v15 = -2147418113;
            v16 = 2301LL;
            goto LABEL_3;
          }
          *a4 = DWORD2(v22) != 0;
          break;
        case 0x100u:
          if ( (_DWORD)v22 )
          {
            v15 = -2147418113;
            v16 = 2307LL;
            goto LABEL_3;
          }
          *v11 = DWORD2(v22) != 0;
          break;
        case 0x104u:
          if ( (_DWORD)v22 )
          {
            v15 = -2147418113;
            v16 = 2313LL;
            goto LABEL_3;
          }
          v20 = DWORD2(v22) == 0;
          v21 = a6;
LABEL_25:
          *v21 = !v20;
          continue;
        case 0x140u:
          if ( (_DWORD)v22 )
          {
            v15 = -2147418113;
            v16 = 2319LL;
            goto LABEL_3;
          }
          v20 = DWORD2(v22) == 0;
          v21 = a7;
          goto LABEL_25;
        case 0x143u:
          if ( (_DWORD)v22 )
          {
            v15 = -2147418113;
            v16 = 2325LL;
            goto LABEL_3;
          }
          v20 = DWORD2(v22) == 0;
          v21 = a8;
          goto LABEL_25;
        case 1u:
          if ( (_DWORD)v22 != 1 )
          {
            v15 = -2147418113;
            v16 = 2331LL;
            goto LABEL_3;
          }
          v15 = StringCchPrintfW(a9, *v18, L"%*s", (unsigned int)v23 >> 1, *((_QWORD *)&v22 + 1));
          if ( v15 < 0 )
          {
            v16 = 2333LL;
            goto LABEL_3;
          }
          v13 = (unsigned int)v23 >> 1;
          break;
      }
    }
  }
  v16 = 2284LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
    (const char *)(unsigned int)v15);
  return (unsigned int)v15;
}
