/*
 * XREFs of UpdateDelegationTargetForMouseInput @ 0x14021C4C0
 * Callers:
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1401B4908 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 *     IsCurrentSessionServiceSession @ 0x140165ED8 (IsCurrentSessionServiceSession.c)
 *     IsAnyDelegationEnabled @ 0x140167930 (IsAnyDelegationEnabled.c)
 *     IsKeyboardDelegationTarget @ 0x14021BCF0 (IsKeyboardDelegationTarget.c)
 */

char __fastcall UpdateDelegationTargetForMouseInput(tagTHREADINFO *this)
{
  __int64 UserSessionState; // rax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  _DWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  LODWORD(UserSessionState) = IsCurrentSessionServiceSession((__int64)this);
  if ( !(_DWORD)UserSessionState )
  {
    LOBYTE(UserSessionState) = IsAnyDelegationEnabled(v4, v3, v5);
    if ( (_BYTE)UserSessionState )
    {
      LOBYTE(UserSessionState) = IsKeyboardDelegationTarget(this, v6, v7);
      if ( !(_BYTE)UserSessionState )
      {
        UserSessionState = W32GetUserSessionState(v9, v8, v10);
        if ( *(_DWORD *)(*(_QWORD *)(UserSessionState + 19632) + 4LL) )
        {
          v11 = *((_QWORD *)this + 57);
          v14 = 0LL;
          v15 = 1LL;
          v13[0] = *(_DWORD *)(v11 + 56);
          v13[1] = (unsigned int)PsGetThreadId(*(PETHREAD *)this);
          LOBYTE(UserSessionState) = SendMessageTo(2, (int)v13, 32);
        }
      }
    }
  }
  return UserSessionState;
}
