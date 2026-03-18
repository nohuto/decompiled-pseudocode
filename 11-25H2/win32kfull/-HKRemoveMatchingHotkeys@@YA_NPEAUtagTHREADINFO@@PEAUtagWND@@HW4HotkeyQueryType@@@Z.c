/*
 * XREFs of ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015DFF0
 * Callers:
 *     DestroyThreadsHotKeys @ 0x14028B890 (DestroyThreadsHotKeys.c)
 * Callees:
 *     ?MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z @ 0x140195AA0 (-MatchHandle@tagHOTKEY@@QEBA_NPEAUtagWND@@@Z.c)
 *     ??$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z @ 0x14028A648 (--$FreeHotKey@PEAUCHILDHOTKEY@@@@YAXPEAUCHILDHOTKEY@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14028A6D0 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14028A758 (-HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z.c)
 */

char __fastcall HKRemoveMatchingHotkeys(__int64 a1, struct tagWND *a2, int a3, int a4)
{
  int v4; // esi
  char v8; // bp
  __int64 v9; // r8
  struct tagHOTKEY **v10; // r15
  unsigned __int64 v11; // rax
  struct tagHOTKEY *v12; // rcx
  struct tagHOTKEY **v13; // rdi
  __int64 **v14; // r14
  __int64 *v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rsi
  struct tagHOTKEY *v18; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  bool matched; // al
  __int64 v23; // rdx
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  bool v27; // zf
  __int64 **v28; // rax
  unsigned __int64 v29; // [rsp+20h] [rbp-38h]

  v4 = a4;
  v8 = 0;
  v10 = (struct tagHOTKEY **)(W32GetUserSessionState(a1, a2) + 12952);
  v11 = 0LL;
  v29 = 0LL;
  do
  {
    v12 = *v10;
    v13 = v10;
    if ( !*v10 )
      goto LABEL_20;
    do
    {
      switch ( v4 )
      {
        case 0:
          v25 = *(_QWORD *)v12 == a1;
          goto LABEL_36;
        case 1:
          v20 = *((_QWORD *)v12 + 2);
          if ( v20 == 1 )
          {
            matched = a2 == (struct tagWND *)1;
          }
          else
          {
            if ( a2 )
              v21 = *(_QWORD *)a2;
            else
              v21 = 0LL;
            if ( v20 == v21 )
            {
LABEL_28:
              if ( !HKRemoveHotkeyOrMakePlaceholder(v13) )
                v13 = (struct tagHOTKEY **)((char *)*v13 + 48);
              v8 = 1;
              goto LABEL_18;
            }
            matched = 0;
          }
          goto LABEL_27;
        case 2:
          if ( *((_DWORD *)v12 + 10) == a3 )
          {
            matched = tagHOTKEY::MatchHandle(v12, a2);
LABEL_27:
            if ( matched )
              goto LABEL_28;
          }
          break;
        case 3:
          if ( *(_QWORD *)v12 == a1 && *((_DWORD *)v12 + 10) == a3 )
          {
            v23 = *((_QWORD *)v12 + 2);
            if ( v23 == 1 )
            {
              v25 = a2 == (struct tagWND *)1;
            }
            else
            {
              if ( a2 )
                v24 = *(_QWORD *)a2;
              else
                v24 = 0LL;
              v25 = v23 == v24;
            }
LABEL_36:
            if ( v25 )
              goto LABEL_28;
          }
          break;
        case 4:
          goto LABEL_28;
        default:
          break;
      }
      LOBYTE(v9) = 0;
      v14 = (__int64 **)((char *)*v13 + 56);
      v15 = *v14;
      if ( *v14 == (__int64 *)v14 )
        goto LABEL_16;
      do
      {
        v16 = v15 - 4;
        v17 = *v15;
        if ( a4 )
        {
          if ( a4 != 1 )
          {
            if ( a4 != 2 )
            {
              if ( a4 != 3 )
              {
                if ( a4 != 4 )
                  goto LABEL_14;
                goto LABEL_43;
              }
              if ( *v16 != a1 )
                goto LABEL_14;
            }
            if ( *((_DWORD *)v16 + 5) != a3 )
              goto LABEL_14;
          }
          if ( a2 )
            v26 = *(_QWORD *)a2;
          else
            v26 = 0LL;
          v27 = v16[1] == v26;
        }
        else
        {
          v27 = *v16 == a1;
        }
        if ( !v27 )
          goto LABEL_14;
LABEL_43:
        if ( *(__int64 **)(v17 + 8) != v15 || (v28 = (__int64 **)v15[1], *v28 != v15) )
          __fastfail(3u);
        *v28 = (__int64 *)v17;
        *(_QWORD *)(v17 + 8) = v28;
        FreeHotKey<CHILDHOTKEY *>(v16, v15, v9);
        LOBYTE(v9) = 1;
LABEL_14:
        v15 = (__int64 *)v17;
      }
      while ( (__int64 **)v17 != v14 );
      v4 = a4;
LABEL_16:
      v18 = *v13;
      v8 |= v9;
      if ( _bittest16((const signed __int16 *)*v13 + 17, 8u)
        && *((struct tagHOTKEY **)v18 + 7) == (struct tagHOTKEY *)((char *)v18 + 56) )
      {
        *v13 = (struct tagHOTKEY *)*((_QWORD *)v18 + 6);
        FreeHotKey<tagHOTKEY *>();
      }
      else
      {
        v13 = (struct tagHOTKEY **)((char *)v18 + 48);
      }
LABEL_18:
      v12 = *v13;
    }
    while ( *v13 );
    v11 = v29;
LABEL_20:
    ++v11;
    ++v10;
    v29 = v11;
  }
  while ( v11 < 0x80 );
  return v8;
}
