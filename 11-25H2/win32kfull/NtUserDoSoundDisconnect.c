/*
 * XREFs of NtUserDoSoundDisconnect @ 0x14020AF80
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectPlaySound@CUserPlaySound@@SAJXZ @ 0x14020B174 (-DisconnectPlaySound@CUserPlaySound@@SAJXZ.c)
 */

__int64 NtUserDoSoundDisconnect()
{
  return CUserPlaySound::DisconnectPlaySound();
}
