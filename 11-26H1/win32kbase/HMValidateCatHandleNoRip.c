/*
 * XREFs of HMValidateCatHandleNoRip @ 0x1401B511C
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x140059630 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     UserGetWindowThreadProcessId @ 0x1401B5098 (UserGetWindowThreadProcessId.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ValidateHandleSecure @ 0x1401A87C0 (ValidateHandleSecure.c)
 */

__int64 __fastcall HMValidateCatHandleNoRip(void *a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 UserSessionState; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  unsigned int v14; // ecx
  __int64 v15; // rbx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int16 v23; // ax
  struct tagTHREADINFO *v24; // rax
  unsigned int v25; // edx
  __int64 v26; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v28; // rdx
  __int16 v29; // ax
  _QWORD *v30; // rax
  __int64 v31; // rax

  v3 = 0LL;
  PtiCurrent((__int64)a1, a2);
  v8 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19904);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v8 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v8, v7, v9);
    v14 = *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 19928) * (unsigned __int16)a1;
    v15 = v14 + *(_QWORD *)(UserSessionState + 19920);
    v18 = W32GetUserSessionState(v14, v16, v17);
    v20 = *(_QWORD *)(v18 + 19864);
    v21 = 0x7FFFLL;
    v22 = 5LL * (unsigned int)((v15 - *(_QWORD *)(v18 + 19920)) >> 5);
    v23 = WORD1(a1) & 0x7FFF;
    if ( (WORD1(a1) & 0x7FFF) == *(_WORD *)(v15 + 26)
      || v23 == 0x7FFF
      || !v23 && PsGetCurrentProcessWow64Process(0x7FFFLL, v19) )
    {
      if ( *(_BYTE *)(v15 + 24) == 23 )
        v3 = *(_QWORD *)(v20 + 8 * v22);
      v24 = PtiCurrent(v21, v19);
      v25 = 3;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)v24 + 130, 0, 0) & 0x20000000) == 0 )
        v25 = 2;
      v26 = -(__int64)((unsigned int)ValidateHandleSecure(a1, v25) != 0);
      v3 &= v26;
      if ( *(char *)(v15 + 25) < 0 )
      {
        CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v26);
        v28 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          if ( *CurrentProcessWin32Process )
          {
            v29 = *((_WORD *)&unk_14025552C + 12 * *(unsigned __int8 *)(v15 + 24));
            if ( (v29 & 2) != 0 )
            {
              v30 = *(_QWORD **)(v20 + 8 * v22 + 8);
            }
            else
            {
              if ( (v29 & 1) == 0 )
                return v3;
              v31 = *(_QWORD *)(v20 + 8 * v22 + 8);
              if ( !v31 )
                return v3;
              v30 = *(_QWORD **)(v31 + 456);
            }
            if ( v30 && v30 != v28 )
              return 0LL;
          }
        }
      }
    }
  }
  return v3;
}
