/*
 * XREFs of PostPlaySoundMessage @ 0x1400D8190
 * Callers:
 *     <none>
 * Callees:
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400D8B20 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 */

__int64 __fastcall PostPlaySoundMessage(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax

  v2 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return CUserPlaySound::PlaySync(*(CUserPlaySound **)(UserSessionState + 70544), v2);
}
