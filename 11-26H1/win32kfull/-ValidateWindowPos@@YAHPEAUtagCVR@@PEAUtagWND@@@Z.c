/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x14004A948
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  __int64 v2; // rsi
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // r15
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // r9
  char v27; // r10
  __int64 v28; // rax

  v2 = *(_QWORD *)a1;
  PsGetCurrentThreadWin32Thread(a1);
  v5 = 0;
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v2 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19928) * (unsigned int)(unsigned __int16)v2
      + *(_QWORD *)(UserSessionState + 19920);
  v16 = (_QWORD *)HMPkheFromPhe(v13);
  LOWORD(v2) = WORD1(v2) & 0x7FFF;
  if ( (WORD1(v2) & 0x7FFF) != *(_WORD *)(v13 + 26)
    && (_WORD)v2 != 0x7FFF
    && ((_WORD)v2 || !PsGetCurrentProcessWow64Process(v15, v14)) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v13 + 24) != 1 )
    return 0LL;
  v17 = (_QWORD *)*v16;
  if ( !*v16 )
    return 0LL;
  *((_QWORD *)a1 + 13) = v17[2];
  if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 1LL;
  v18 = v17[3];
  v19 = 0LL;
  if ( v18 )
  {
    v20 = *(_QWORD *)(v18 + 8);
    if ( v20 )
      v19 = *(_QWORD *)(v20 + 24);
  }
  v21 = v17[5];
  v22 = v17[13];
  v23 = *(unsigned __int8 *)(v21 + 19);
  if ( (v23 & 0x80u) != 0LL )
    return 0LL;
  v24 = *((_QWORD *)a1 + 1);
  switch ( v24 )
  {
    case -1LL:
    case -2LL:
      if ( v22 != v19 )
        return 0LL;
      goto LABEL_37;
    case 0LL:
      if ( a2 )
      {
        if ( v22 != v19 || ((v23 & 4 ^ (*(unsigned __int8 *)(v21 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
          goto LABEL_38;
        v28 = *((_QWORD *)a2 + 14);
LABEL_34:
        if ( !v28
          || ((*(_BYTE *)(*(_QWORD *)(v28 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v28 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
        {
          goto LABEL_38;
        }
        return 0LL;
      }
      return 1LL;
    case 1LL:
LABEL_37:
      if ( a2 )
        goto LABEL_38;
      return 1LL;
  }
  LOBYTE(v23) = 1;
  v25 = (_QWORD *)HMValidateHandleNoSecure(v24, v23);
  if ( !v25 || (v26 = v25[5], v27 = *(_BYTE *)(v26 + 19), v27 < 0) )
  {
    UserSetLastError(6);
    return 0LL;
  }
  if ( v17 == v25 || v17[13] != v25[13] )
    return 0LL;
  if ( !a2 )
    return 1LL;
  if ( v22 == v19 )
  {
    if ( ((*(_BYTE *)(v17[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v17[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
    {
      v28 = v25[11];
      goto LABEL_34;
    }
    if ( ((v27 & 4 ^ (*(unsigned __int8 *)(v26 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
      return 0LL;
  }
LABEL_38:
  LOBYTE(v5) = a2 == (struct tagWND *)v17[13];
  return v5;
}
