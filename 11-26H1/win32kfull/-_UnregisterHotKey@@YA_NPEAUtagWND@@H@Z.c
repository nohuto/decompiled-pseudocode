/*
 * XREFs of ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018D468
 * Callers:
 *     NtUserUnregisterHotKey @ 0x14018D2A0 (NtUserUnregisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1402AE7B0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x14018D44C (-MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14018D620 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14018D720 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x140294E10 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 */

char __fastcall _UnregisterHotKey(struct tagWND *a1, int a2)
{
  char v4; // bp
  unsigned __int64 v5; // r15
  struct tagTHREADINFO *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rdx
  struct tagHOTKEY **v10; // rdi
  struct tagHOTKEY *v11; // rcx
  struct tagHOTKEY **v12; // rbx
  struct tagHOTKEY *v13; // rcx
  char *v14; // r14
  char v15; // r8
  __int64 *v16; // rax
  __int64 v17; // rsi
  __int64 *v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 **v22; // rdx
  __int64 v23; // rdx
  struct tagTHREADINFO *v24; // [rsp+60h] [rbp+18h]

  v4 = 0;
  v24 = PtiCurrent((__int64)a1);
  v5 = 0LL;
  v6 = v24;
  v10 = (struct tagHOTKEY **)(W32GetUserSessionState(v8, v7) + 12944);
  do
  {
    v11 = *v10;
    v12 = v10;
    while ( v11 )
    {
      if ( *(struct tagTHREADINFO **)v11 == v6 && *((_DWORD *)v11 + 10) == a2 && tagHOTKEY::MatchHandle(v11, a1) )
      {
        if ( !HKRemoveHotkeyOrMakePlaceholder(v12) )
          v12 = (struct tagHOTKEY **)((char *)*v12 + 48);
        v4 = 1;
      }
      else
      {
        v14 = (char *)v11 + 56;
        v15 = 0;
        v16 = (__int64 *)*((_QWORD *)v11 + 7);
        if ( v16 != (__int64 *)((char *)v11 + 56) )
        {
          v9 = v24;
          do
          {
            v17 = *v16;
            v18 = v16 - 4;
            if ( (struct tagTHREADINFO *)*(v16 - 4) == v9 && *((_DWORD *)v18 + 5) == a2 )
            {
              if ( a1 )
                v23 = *(_QWORD *)a1;
              else
                v23 = 0LL;
              if ( v18[1] == v23 )
              {
                if ( *(__int64 **)(v17 + 8) != v16 || (v22 = (__int64 **)v16[1], *v22 != v16) )
                  __fastfail(3u);
                *v22 = (__int64 *)v17;
                *(_QWORD *)(v17 + 8) = v22;
                FreeHotKey<CHILDHOTKEY *>();
                v15 = 1;
              }
              v9 = v24;
            }
            v16 = (__int64 *)v17;
          }
          while ( (char *)v17 != v14 );
          v6 = v24;
        }
        v13 = *v12;
        v4 |= v15;
        if ( _bittest16((const signed __int16 *)*v12 + 17, 8u)
          && *((struct tagHOTKEY **)v13 + 7) == (struct tagHOTKEY *)((char *)v13 + 56) )
        {
          *v12 = (struct tagHOTKEY *)*((_QWORD *)v13 + 6);
          FreeHotKey<tagHOTKEY *>(v13, v9);
        }
        else
        {
          v12 = (struct tagHOTKEY **)((char *)v13 + 48);
        }
      }
      v11 = *v12;
    }
    ++v5;
    ++v10;
  }
  while ( v5 < 0x80 );
  if ( v4 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(0LL, v9) + 13992) )
      *(_QWORD *)(W32GetUserSessionState(v21, v20) + 13992) = 0LL;
    return 1;
  }
  else
  {
    UserSetLastError(1419);
    return 0;
  }
}
