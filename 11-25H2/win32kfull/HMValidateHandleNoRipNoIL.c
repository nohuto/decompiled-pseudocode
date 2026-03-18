/*
 * XREFs of HMValidateHandleNoRipNoIL @ 0x1402F2B7C
 * Callers:
 *     xxxDDETrackGetMessageHook @ 0x140255BA4 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall HMValidateHandleNoRipNoIL(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 *v12; // r14
  __int16 v13; // ax

  v3 = 0LL;
  PtiCurrent(a1, a2);
  v7 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(v7 + 8) )
  {
    UserSessionState = W32GetUserSessionState(v7, v6);
    v11 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19896) * (unsigned int)(unsigned __int16)a1
        + *(_QWORD *)(UserSessionState + 19888);
    v12 = (__int64 *)HMPkheFromPhe(v11);
    v7 = 0x7FFFLL;
    v13 = WORD1(a1) & 0x7FFF;
    if ( ((WORD1(a1) & 0x7FFF) == *(_WORD *)(v11 + 26)
       || v13 == 0x7FFF
       || !v13 && PsGetCurrentProcessWow64Process(0x7FFFLL, v6))
      && (*(_BYTE *)(v11 + 25) & 1) == 0
      && *(_BYTE *)(v11 + 24) == 11 )
    {
      v3 = *v12;
    }
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v7, v6) + 132, 0, 0) & 0x20000000) != 0 )
    return -(__int64)((unsigned int)ValidateHandleSecure(a1, 1LL) != 0) & v3;
  return v3;
}
