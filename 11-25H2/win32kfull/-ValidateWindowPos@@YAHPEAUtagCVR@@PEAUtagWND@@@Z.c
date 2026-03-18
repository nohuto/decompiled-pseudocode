/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x140064194
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1402352E8 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
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
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r9
  char v28; // r10
  __int64 v29; // rax

  v2 = *(_QWORD *)a1;
  W32GetCurrentThreadNonPaged(a1, a2);
  v5 = 0;
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  if ( (unsigned __int64)(unsigned __int16)v2 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19896) * (unsigned int)(unsigned __int16)v2
      + *(_QWORD *)(UserSessionState + 19888);
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
  v19 = v17[3];
  v20 = 0LL;
  if ( v19 )
  {
    v21 = *(_QWORD *)(v19 + 8);
    if ( v21 )
      v20 = *(_QWORD *)(v21 + 24);
  }
  v22 = v17[5];
  v23 = v17[13];
  v24 = *(unsigned __int8 *)(v22 + 19);
  if ( (v24 & 0x80u) != 0LL )
    return 0LL;
  v25 = *((_QWORD *)a1 + 1);
  if ( v25 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( v23 != v20 )
      return 0LL;
    goto LABEL_36;
  }
  if ( !v25 )
  {
    if ( !a2 )
      return 1LL;
    if ( v23 != v20 || ((v24 & 4 ^ (*(unsigned __int8 *)(v22 + 24) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      goto LABEL_37;
    v29 = *((_QWORD *)a2 + 14);
LABEL_25:
    if ( !v29
      || ((*(_BYTE *)(*(_QWORD *)(v29 + 40) + 19LL) & 4 ^ (*(unsigned __int8 *)(*(_QWORD *)(v29 + 40) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
    {
      goto LABEL_37;
    }
    return 0LL;
  }
  if ( v25 == 1 )
  {
LABEL_36:
    if ( !a2 )
      return 1LL;
    goto LABEL_37;
  }
  LOBYTE(v24) = 1;
  v26 = (_QWORD *)HMValidateHandleNoSecure(v25, v24);
  if ( !v26 || (v27 = v26[5], v28 = *(_BYTE *)(v27 + 19), v28 < 0) )
  {
    UserSetLastError(6);
    return 0LL;
  }
  if ( v17 == v26 || v17[13] != v26[13] )
    return 0LL;
  if ( !a2 )
    return 1LL;
  if ( v23 != v20 )
    goto LABEL_37;
  if ( ((*(_BYTE *)(v17[5] + 19LL) & 4 ^ (*(unsigned __int8 *)(v17[5] + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0 )
  {
    v29 = v26[11];
    goto LABEL_25;
  }
  if ( ((v28 & 4 ^ (*(unsigned __int8 *)(v27 + 24) >> 1) & 4) & 0xFFFFFFFC) == 0 )
    return 0LL;
LABEL_37:
  LOBYTE(v5) = a2 == (struct tagWND *)v17[13];
  return v5;
}
