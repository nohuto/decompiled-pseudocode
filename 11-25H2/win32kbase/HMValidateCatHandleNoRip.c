/*
 * XREFs of HMValidateCatHandleNoRip @ 0x14019B25C
 * Callers:
 *     UserGetWindowThreadProcessId @ 0x14019B1B0 (UserGetWindowThreadProcessId.c)
 * Callees:
 *     ValidateHandleSecure @ 0x1400A1F30 (ValidateHandleSecure.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateCatHandleNoRip(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // rbp
  __int16 v16; // ax
  struct tagTHREADINFO *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v21; // rdx
  __int16 v22; // ax
  _QWORD *v23; // rax
  __int64 v24; // rax

  v2 = 0LL;
  PtiCurrent();
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v6 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    v10 = *(_DWORD *)(W32GetUserSessionState(v9, v8) + 19896) * (unsigned int)(unsigned __int16)a1;
    v11 = v10 + *(_QWORD *)(UserSessionState + 19888);
    v13 = W32GetUserSessionState(v10, v12);
    v14 = *(_QWORD *)(v13 + 19832);
    v15 = 5LL * (unsigned int)((v11 - *(_QWORD *)(v13 + 19888)) >> 5);
    v16 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v11 + 26) || v16 == 0x7FFF || !v16 && PsGetCurrentProcessWow64Process() )
    {
      if ( *(_BYTE *)(v11 + 24) == 23 )
        v2 = *(_QWORD *)(v14 + 8 * v15);
      v17 = PtiCurrent();
      v18 = 3LL;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v17 + 132, 0, 0) & 0x20000000) == 0 )
        v18 = 2LL;
      v19 = -(__int64)((unsigned int)ValidateHandleSecure(a1, v18) != 0);
      v2 &= v19;
      if ( *(char *)(v11 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v19);
        v21 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v22 = *((_WORD *)&unk_14024703C + 12 * *(unsigned __int8 *)(v11 + 24));
            if ( (v22 & 2) != 0 )
            {
              v23 = *(_QWORD **)(v14 + 8 * v15 + 8);
            }
            else
            {
              if ( (v22 & 1) == 0 )
                return v2;
              v24 = *(_QWORD *)(v14 + 8 * v15 + 8);
              if ( !v24 )
                return v2;
              v23 = *(_QWORD **)(v24 + 464);
            }
            if ( v23 && v23 != v21 )
              return 0LL;
          }
        }
      }
    }
  }
  return v2;
}
