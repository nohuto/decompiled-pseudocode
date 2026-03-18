/*
 * XREFs of ?xxxPlaySoundAsynchronous@CUserPlaySound@@SAJK@Z @ 0x1400D7F5C
 * Callers:
 *     xxxPlayEventSound @ 0x1400D7F00 (xxxPlayEventSound.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?PlaySync@CUserPlaySound@@AEAAJK@Z @ 0x1400D8B20 (-PlaySync@CUserPlaySound@@AEAAJK@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

__int64 __fastcall CUserPlaySound::xxxPlaySoundAsynchronous(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  CUserPlaySound *v3; // rbx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = *(CUserPlaySound **)(W32GetUserSessionState(a1, a2) + 70544);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v5, 1);
  LODWORD(v3) = CUserPlaySound::PlaySync(v3, v2);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v5);
  return (unsigned int)v3;
}
