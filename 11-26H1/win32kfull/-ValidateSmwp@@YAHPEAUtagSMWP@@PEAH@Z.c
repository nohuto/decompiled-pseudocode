/*
 * XREFs of ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x14004A634
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ValidateSmwp(struct tagSMWP *a1, int *a2)
{
  __int64 *v2; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 *v18; // rdi
  int v19; // r14d
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  _QWORD *v29; // r15
  _QWORD *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax

  v2 = (__int64 *)*((_QWORD *)a1 + 5);
  *a2 = 1;
  v5 = *v2;
  PsGetCurrentThreadWin32Thread(a1);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v5 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19928) * (unsigned int)(unsigned __int16)v5
      + *(_QWORD *)(UserSessionState + 19920);
  v16 = HMPkheFromPhe(v13);
  LOWORD(v5) = WORD1(v5) & 0x7FFF;
  if ( (WORD1(v5) & 0x7FFF) != *(_WORD *)(v13 + 26)
    && (_WORD)v5 != 0x7FFF
    && ((_WORD)v5 || !PsGetCurrentProcessWow64Process(v15, v14)) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(v13 + 25) & 1) != 0 || *(_BYTE *)(v13 + 24) != 1 || !*(_QWORD *)v16 )
    return 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)v16 + 104LL);
  v18 = (__int64 *)*((_QWORD *)a1 + 5);
  v19 = *((_DWORD *)a1 + 7);
  while ( 1 )
  {
    if ( --v19 < 0 )
      return 1LL;
    v20 = *v18;
    PsGetCurrentThreadWin32Thread(v15);
    v15 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 19904);
    if ( (unsigned __int64)(unsigned __int16)v20 >= *(_QWORD *)(v15 + 8) )
      goto LABEL_34;
    v24 = W32GetUserSessionState(v15, v23);
    v27 = *(_DWORD *)(W32GetUserSessionState(v26, v25) + 19928) * (unsigned int)(unsigned __int16)v20
        + *(_QWORD *)(v24 + 19920);
    v29 = (_QWORD *)HMPkheFromPhe(v27);
    LOWORD(v20) = WORD1(v20) & 0x7FFF;
    if ( (WORD1(v20) & 0x7FFF) != *(_WORD *)(v27 + 26)
      && (_WORD)v20 != 0x7FFF
      && ((_WORD)v20 || !PsGetCurrentProcessWow64Process(v15, v28)) )
    {
      goto LABEL_34;
    }
    if ( (*(_BYTE *)(v27 + 25) & 1) != 0 )
      goto LABEL_34;
    if ( *(_BYTE *)(v27 + 24) != 1 )
      goto LABEL_34;
    v30 = (_QWORD *)*v29;
    if ( !*v29 )
      goto LABEL_34;
    v18[13] = v30[2];
    if ( (v18[4] & 4) == 0 )
    {
      v31 = v30[3];
      v32 = 0LL;
      if ( v31 )
      {
        v15 = *(_QWORD *)(v31 + 8);
        if ( v15 )
          v32 = *(_QWORD *)(v15 + 24);
      }
      if ( *(char *)(v30[5] + 19LL) < 0 )
        goto LABEL_34;
      v15 = v18[1];
      if ( v15 == -1LL || v15 == -2LL )
      {
        if ( v30[13] != v32 )
          goto LABEL_34;
      }
      else if ( v15 >= 2 )
      {
        LOBYTE(v32) = 1;
        v33 = HMValidateHandleNoSecure(v15, v32);
        v15 = v33;
        if ( !v33 || *(char *)(*(_QWORD *)(v33 + 40) + 19LL) < 0 )
        {
          UserSetLastError(6);
LABEL_34:
          *v18 = 0LL;
          goto LABEL_28;
        }
        if ( v30 == (_QWORD *)v33 || v30[13] != *(_QWORD *)(v33 + 104) )
          goto LABEL_34;
      }
    }
    if ( *(_QWORD *)(_HMObjectFromHandle(*v18) + 104) != v17 )
      break;
    if ( (v18[4] & 0x2000) != 0 )
      *a2 = 0;
LABEL_28:
    v18 += 21;
  }
  UserSetLastError(1441);
  return 0LL;
}
