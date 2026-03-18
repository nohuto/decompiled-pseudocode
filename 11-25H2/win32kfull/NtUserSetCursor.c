/*
 * XREFs of NtUserSetCursor @ 0x14004C150
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x14004C394 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall NtUserSetCursor(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rcx
  char v17; // al
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagCURSOR *v22; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v25; // r8
  __int16 v26; // ax
  _QWORD *v27; // rax
  __int64 v28; // rax

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v5 = 0LL;
  if ( a1 )
  {
    W32GetCurrentThreadNonPaged(v3, v2);
    v9 = *(_QWORD *)(W32GetUserSessionState(v7, v6) + 19872);
    if ( (unsigned __int64)(unsigned __int16)a1 >= *(_QWORD *)(v9 + 8) )
      goto LABEL_22;
    UserSessionState = W32GetUserSessionState(v9, v8);
    v13 = *(_DWORD *)(W32GetUserSessionState(v12, v11) + 19896) * (unsigned int)(unsigned __int16)a1
        + *(_QWORD *)(UserSessionState + 19888);
    v15 = HMPkheFromPhe(v13);
    v16 = a1 >> 16;
    LOWORD(v16) = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) != *(_WORD *)(v13 + 26)
      && (_WORD)v16 != 0x7FFF
      && ((_WORD)v16 || !PsGetCurrentProcessWow64Process(v16, v14)) )
    {
      goto LABEL_22;
    }
    v17 = *(_BYTE *)(v13 + 25);
    if ( (v17 & 1) == 0 && *(_BYTE *)(v13 + 24) == 3 )
    {
      v5 = *(_QWORD *)v15;
      if ( (v17 & 4) != 0 )
      {
        LOBYTE(v14) = 3;
        v16 = -(__int64)((unsigned int)HMSDCheck(a1, v14, 0LL) != 0);
        v5 &= v16;
      }
    }
    if ( (*(_BYTE *)(v13 + 25) & 4) == 0 )
    {
      CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v16, v14);
      if ( CurrentThreadNonPaged )
        v19 = *CurrentThreadNonPaged;
      else
        v19 = 0LL;
      v20 = 3LL;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 528), 0, 0) & 0x20000000) == 0 )
        v20 = 2LL;
      v21 = -(__int64)((unsigned int)ValidateHandleSecure(a1, v20) != 0);
      v5 &= v21;
      if ( *(char *)(v13 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v21);
        v25 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v26 = gahti[12 * *(unsigned __int8 *)(v13 + 24) + 6];
            if ( (v26 & 2) != 0 )
            {
              v27 = *(_QWORD **)(v15 + 8);
LABEL_30:
              if ( v27 && v27 != v25 )
                goto LABEL_22;
              goto LABEL_14;
            }
            if ( (v26 & 1) != 0 )
            {
              v28 = *(_QWORD *)(v15 + 8);
              if ( v28 )
              {
                v27 = *(_QWORD **)(v28 + 464);
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
LABEL_14:
    if ( v5 )
      goto LABEL_15;
LABEL_22:
    UserSetLastError(1402);
    goto LABEL_17;
  }
LABEL_15:
  v22 = zzzSetCursor((struct tagCURSOR *)v5);
  if ( v22 )
    v4 = *(_QWORD *)v22;
LABEL_17:
  UserSessionSwitchLeaveCrit();
  return v4;
}
