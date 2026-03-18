/*
 * XREFs of ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x140064420
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
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
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  _QWORD *v27; // r15
  _QWORD *v28; // rbx
  __int64 v30; // rax
  __int64 v31; // rax

  v2 = (__int64 *)*((_QWORD *)a1 + 5);
  *a2 = 1;
  v5 = *v2;
  W32GetCurrentThreadNonPaged(a1, a2);
  v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
  if ( (unsigned __int64)(unsigned __int16)v5 >= *(_QWORD *)(v9 + 8) )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v9, v8);
  v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19896) * (unsigned int)(unsigned __int16)v5
      + *(_QWORD *)(UserSessionState + 19888);
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
    W32GetCurrentThreadNonPaged(v15, v14);
    v15 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 19872);
    if ( (unsigned __int64)(unsigned __int16)v20 >= *(_QWORD *)(v15 + 8) )
      goto LABEL_17;
    v23 = W32GetUserSessionState(v15, v14);
    v26 = *(_DWORD *)(W32GetUserSessionState(v25, v24) + 19896) * (unsigned int)(unsigned __int16)v20
        + *(_QWORD *)(v23 + 19888);
    v27 = (_QWORD *)HMPkheFromPhe(v26);
    LOWORD(v20) = WORD1(v20) & 0x7FFF;
    if ( (WORD1(v20) & 0x7FFF) != *(_WORD *)(v26 + 26)
      && (_WORD)v20 != 0x7FFF
      && ((_WORD)v20 || !PsGetCurrentProcessWow64Process(v15, v14)) )
    {
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(v26 + 25) & 1) != 0 )
      goto LABEL_17;
    if ( *(_BYTE *)(v26 + 24) != 1 )
      goto LABEL_17;
    v28 = (_QWORD *)*v27;
    if ( !*v27 )
      goto LABEL_17;
    v18[13] = v28[2];
    if ( (v18[4] & 4) == 0 )
    {
      v30 = v28[3];
      v14 = 0LL;
      if ( v30 )
      {
        v15 = *(_QWORD *)(v30 + 8);
        if ( v15 )
          v14 = *(_QWORD *)(v15 + 24);
      }
      if ( *(char *)(v28[5] + 19LL) < 0 )
        goto LABEL_17;
      v15 = v18[1];
      if ( v15 > 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( v28[13] != v14 )
          goto LABEL_17;
      }
      else if ( v15 >= 2 )
      {
        LOBYTE(v14) = 1;
        v31 = HMValidateHandleNoSecure(v15, v14);
        v15 = v31;
        if ( !v31 || *(char *)(*(_QWORD *)(v31 + 40) + 19LL) < 0 )
        {
          UserSetLastError(6);
LABEL_17:
          *v18 = 0LL;
          goto LABEL_18;
        }
        if ( v28 == (_QWORD *)v31 || v28[13] != *(_QWORD *)(v31 + 104) )
          goto LABEL_17;
      }
    }
    if ( *(_QWORD *)(_HMObjectFromHandle(*v18) + 104) != v17 )
      break;
    if ( (v18[4] & 0x2000) != 0 )
      *a2 = 0;
LABEL_18:
    v18 += 21;
  }
  UserSetLastError(1441);
  return 0LL;
}
