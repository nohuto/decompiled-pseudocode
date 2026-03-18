/*
 * XREFs of DestroyWindowsHotKeys @ 0x1401951F8
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x1400593C8 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x14028A648 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14028A6D0 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14028A758 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 */

char __fastcall DestroyWindowsHotKeys(__int64 *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rbp
  struct tagHOTKEY **v6; // rdi
  struct tagHOTKEY *v7; // rcx
  struct tagHOTKEY **v8; // rbx
  struct tagHOTKEY *v9; // rcx
  __int64 v10; // rdx
  bool v11; // zf
  char *v12; // r15
  __int64 *v13; // rdx
  __int64 v14; // rsi
  __int64 **v15; // rax

  UserSessionState = a1[2];
  if ( *(_DWORD *)(UserSessionState + 956) )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    v5 = 0LL;
    v6 = (struct tagHOTKEY **)(UserSessionState + 12952);
    do
    {
      v7 = *v6;
      v8 = v6;
      while ( v7 )
      {
        v10 = *((_QWORD *)v7 + 2);
        if ( v10 == 1 )
          v11 = a1 == (__int64 *)1;
        else
          v11 = v10 == *a1;
        if ( v11 )
        {
          LOBYTE(UserSessionState) = HKRemoveHotkeyOrMakePlaceholder(v8);
          if ( !(_BYTE)UserSessionState )
            v8 = (struct tagHOTKEY **)((char *)*v8 + 48);
        }
        else
        {
          v12 = (char *)v7 + 56;
          v13 = (__int64 *)*((_QWORD *)v7 + 7);
          if ( v13 != (__int64 *)((char *)v7 + 56) )
          {
            do
            {
              UserSessionState = *a1;
              v14 = *v13;
              if ( *(v13 - 3) == *a1 )
              {
                if ( *(__int64 **)(v14 + 8) != v13 || (v15 = (__int64 **)v13[1], *v15 != v13) )
                  __fastfail(3u);
                *v15 = (__int64 *)v14;
                *(_QWORD *)(v14 + 8) = v15;
                LOBYTE(UserSessionState) = FreeHotKey<CHILDHOTKEY *>(v13 - 4, v13, v4);
              }
              v13 = (__int64 *)v14;
            }
            while ( (char *)v14 != v12 );
          }
          v9 = *v8;
          if ( _bittest16((const signed __int16 *)*v8 + 17, 8u)
            && (UserSessionState = (__int64)v9 + 56, *(_QWORD *)UserSessionState == UserSessionState) )
          {
            *v8 = (struct tagHOTKEY *)*((_QWORD *)v9 + 6);
            LOBYTE(UserSessionState) = FreeHotKey<tagHOTKEY *>();
          }
          else
          {
            v8 = (struct tagHOTKEY **)((char *)v9 + 48);
          }
        }
        v7 = *v8;
      }
      ++v5;
      ++v6;
    }
    while ( v5 < 0x80 );
  }
  return UserSessionState;
}
