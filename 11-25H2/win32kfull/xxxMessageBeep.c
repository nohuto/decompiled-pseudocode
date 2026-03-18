/*
 * XREFs of xxxMessageBeep @ 0x1401107D4
 * Callers:
 *     xxxFlashEnabledPopup @ 0x140110684 (xxxFlashEnabledPopup.c)
 *     NtUserMessageBeep @ 0x140110730 (NtUserMessageBeep.c)
 *     xxxRealDefWindowProc @ 0x140259FFC (xxxRealDefWindowProc.c)
 *     EditionMessageBeep @ 0x1402AF930 (EditionMessageBeep.c)
 *     xxxMNChar @ 0x1402BF514 (xxxMNChar.c)
 *     xxxMNKeyFilter @ 0x1402EC7F8 (xxxMNKeyFilter.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400D8B20 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     xxxSoundSentry @ 0x1401108CC (xxxSoundSentry.c)
 *     xxxOldMessageBeep @ 0x1402AF948 (xxxOldMessageBeep.c)
 */

__int64 __fastcall xxxMessageBeep(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 UserSessionState; // rax

  v2 = PtiCurrent(a1, a2);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v2 + 132, 0, 0) & 4) != 0 )
  {
    xxxOldMessageBeep();
  }
  else
  {
    if ( (*(_DWORD *)(W32GetUserSessionState(v3, v2) + 66800) & 0x80000) != 0 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      CUserPlaySound::PlaySync(*(RPC_BINDING_HANDLE **)(UserSessionState + 70544));
    }
    xxxSoundSentry();
  }
  return 1LL;
}
