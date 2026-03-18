/*
 * XREFs of UpdateDelegationTargetForMouseInput @ 0x140216FA0
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401928F0 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     SendMessageTo @ 0x1400675F0 (SendMessageTo.c)
 *     IsCurrentSessionServiceSession @ 0x140083918 (IsCurrentSessionServiceSession.c)
 *     IsAnyDelegationEnabled @ 0x1400B9CA0 (IsAnyDelegationEnabled.c)
 *     IsKeyboardDelegationTarget @ 0x1402167C0 (IsKeyboardDelegationTarget.c)
 */

char __fastcall UpdateDelegationTargetForMouseInput(tagTHREADINFO *this)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int ThreadId; // eax
  _DWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  LODWORD(UserSessionState) = IsCurrentSessionServiceSession();
  if ( !(_DWORD)UserSessionState )
  {
    LOBYTE(UserSessionState) = IsAnyDelegationEnabled();
    if ( (_BYTE)UserSessionState )
    {
      LOBYTE(UserSessionState) = IsKeyboardDelegationTarget(this, v3);
      if ( !(_BYTE)UserSessionState )
      {
        UserSessionState = W32GetUserSessionState(v5, v4);
        if ( *(_DWORD *)(*(_QWORD *)(UserSessionState + 19600) + 4LL) )
        {
          v6 = *((_QWORD *)this + 58);
          v12 = 0;
          v10 = 0LL;
          v9[0] = *(_DWORD *)(v6 + 56);
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)this);
          v11 = 1;
          v9[1] = ThreadId;
          LOBYTE(UserSessionState) = SendMessageTo(2LL, v9, 32LL);
        }
      }
    }
  }
  return UserSessionState;
}
