/*
 * XREFs of WaitForRitDisEngagement @ 0x1401E8004
 * Callers:
 *     EditionActivateMitInput @ 0x140247220 (EditionActivateMitInput.c)
 * Callees:
 *     WakeRIT @ 0x1401E8158 (WakeRIT.c)
 *     DitTakeOver @ 0x1401E81F4 (DitTakeOver.c)
 *     WaitForRitToCompleteLastCommand @ 0x1401E8278 (WaitForRitToCompleteLastCommand.c)
 */

__int64 WaitForRitDisEngagement()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(16LL);
  WaitForRitToCompleteLastCommand();
  if ( !*(_DWORD *)(W32GetUserSessionState(v1, v0) + 18744) )
    return 0LL;
  if ( !(unsigned int)DitTakeOver() )
  {
    *(_DWORD *)(W32GetUserSessionState(v3, v2) + 18744) = 0;
    WakeRIT(8LL);
    WaitForRitToCompleteLastCommand();
    return 0LL;
  }
  WakeRIT(128LL);
  WaitForRitToCompleteLastCommand();
  _InterlockedAnd((volatile signed __int32 *)(W32GetUserSessionState(v6, v5) + 18732), 0xFFFFFFFE);
  _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v8, v7) + 16340), 1);
  return 1LL;
}
