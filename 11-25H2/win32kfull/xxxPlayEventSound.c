/*
 * XREFs of xxxPlayEventSound @ 0x1400D7F00
 * Callers:
 *     xxxMNCancel @ 0x14003D33C (xxxMNCancel.c)
 *     xxxTrackPopupMenuEx @ 0x14015AE18 (xxxTrackPopupMenuEx.c)
 *     xxxMNOpenHierarchy @ 0x14016D6F0 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     xxxSnapWindow @ 0x140266650 (xxxSnapWindow.c)
 *     NtUserPlayEventSound @ 0x14029B960 (NtUserPlayEventSound.c)
 *     xxxSysCommand @ 0x1402B6EB4 (xxxSysCommand.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z @ 0x1400D7F5C (-xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z.c)
 */

__int64 __fastcall xxxPlayEventSound(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  if ( (*(_DWORD *)(W32GetUserSessionState(v5, v4) + 66800) & 0x1000000) != 0
    && (_InterlockedCompareExchange((volatile signed __int32 *)v3 + 132, 0, 0) & 4) == 0 )
  {
    CUserPlaySound::xxxPlaySoundAsynchronous(v2);
  }
  return 1LL;
}
