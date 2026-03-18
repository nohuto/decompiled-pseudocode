/*
 * XREFs of DitTakeOver @ 0x1401E81F4
 * Callers:
 *     WaitForRitDisEngagement @ 0x1401E8004 (WaitForRitDisEngagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DitTakeOver(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  CBaseInput *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(UserSessionState + 16840)) < 0 )
    return 0LL;
  v5 = *(CBaseInput **)(W32GetUserSessionState(v4, v3) + 16840);
  v8 = W32GetUserSessionState(v7, v6);
  if ( (int)CBaseInput::RegisterDispatcherObject(v5, *(struct IRegisterInputDispatcherObjects **)(v8 + 19216)) < 0 )
    return 0LL;
  EtwTraceDitEngaged();
  return 1LL;
}
