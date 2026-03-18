/*
 * XREFs of ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018163C
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1401815B0 (NtUserUnregisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x140247CC0 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x14028A648 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14028A6D0 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14028A758 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 */

char __fastcall _UnregisterHotKey(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  char v8; // bp
  unsigned __int64 v9; // r13
  __int64 v10; // rdx
  struct tagHOTKEY **v11; // rdi
  __int64 v12; // r8
  struct tagHOTKEY *v13; // rcx
  struct tagHOTKEY **v14; // rbx
  struct tagHOTKEY *v15; // rcx
  __int64 **v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rcx
  __int64 v21; // rax
  bool v22; // zf
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 **v25; // rdx
  unsigned int v26; // [rsp+58h] [rbp+10h]

  v26 = a2;
  v2 = a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v7 = *CurrentThreadNonPaged;
  else
    v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v11 = (struct tagHOTKEY **)(W32GetUserSessionState(v6, v5) + 12952);
  do
  {
    v13 = *v11;
    v14 = v11;
    while ( v13 )
    {
      if ( *(_QWORD *)v13 == v7
        && *((_DWORD *)v13 + 10) == v2
        && ((v10 = *((_QWORD *)v13 + 2), v10 == 1)
          ? (v22 = a1 == (struct tagWND *)1)
          : (!a1 ? (v21 = 0LL) : (v21 = *(_QWORD *)a1), v22 = v10 == v21),
            v22) )
      {
        if ( !HKRemoveHotkeyOrMakePlaceholder(v14) )
          v14 = (struct tagHOTKEY **)((char *)*v14 + 48);
        v8 = 1;
      }
      else
      {
        LOBYTE(v12) = 0;
        v16 = (__int64 **)((char *)*v14 + 56);
        v17 = *v16;
        if ( *v16 != (__int64 *)v16 )
        {
          do
          {
            v18 = *v17;
            v19 = v17 - 4;
            if ( *(v17 - 4) == v7 )
            {
              v10 = v26;
              if ( *((_DWORD *)v19 + 5) == v26 )
              {
                v10 = a1 ? *(_QWORD *)a1 : 0LL;
                if ( v19[1] == v10 )
                {
                  if ( *(__int64 **)(v18 + 8) != v17 || (v25 = (__int64 **)v17[1], *v25 != v17) )
                    __fastfail(3u);
                  *v25 = (__int64 *)v18;
                  *(_QWORD *)(v18 + 8) = v25;
                  FreeHotKey<CHILDHOTKEY *>(v19, v25, v12);
                  LOBYTE(v12) = 1;
                }
              }
            }
            v17 = (__int64 *)v18;
          }
          while ( (__int64 **)v18 != v16 );
          v2 = v26;
        }
        v15 = *v14;
        v8 |= v12;
        if ( _bittest16((const signed __int16 *)*v14 + 17, 8u)
          && *((struct tagHOTKEY **)v15 + 7) == (struct tagHOTKEY *)((char *)v15 + 56) )
        {
          *v14 = (struct tagHOTKEY *)*((_QWORD *)v15 + 6);
          FreeHotKey<tagHOTKEY *>();
        }
        else
        {
          v14 = (struct tagHOTKEY **)((char *)v15 + 48);
        }
      }
      v13 = *v14;
    }
    ++v9;
    ++v11;
  }
  while ( v9 < 0x80 );
  if ( v8 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(0LL, v10) + 14000) )
      *(_QWORD *)(W32GetUserSessionState(v24, v23) + 14000) = 0LL;
    return 1;
  }
  else
  {
    UserSetLastError(1419);
    return 0;
  }
}
