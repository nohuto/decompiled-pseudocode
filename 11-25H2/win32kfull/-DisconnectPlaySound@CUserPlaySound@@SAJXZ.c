/*
 * XREFs of ?DisconnectPlaySound@CUserPlaySound@@SAJXZ @ 0x14020B174
 * Callers:
 *     NtUserDoSoundDisconnect @ 0x14020AF80 (NtUserDoSoundDisconnect.c)
 *     NtUserDoSoundConnect @ 0x14020AFA0 (NtUserDoSoundConnect.c)
 * Callees:
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x14020B19C (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 */

__int64 __fastcall CUserPlaySound::DisconnectPlaySound(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  return CUserPlaySound::Disconnect(*(CUserPlaySound **)(UserSessionState + 70544));
}
