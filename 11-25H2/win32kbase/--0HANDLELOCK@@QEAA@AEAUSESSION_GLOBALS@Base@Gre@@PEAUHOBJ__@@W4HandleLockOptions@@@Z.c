/*
 * XREFs of ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400189D0
 * Callers:
 *     HmgFreeFast @ 0x1401C56C0 (HmgFreeFast.c)
 * Callees:
 *     ?vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z @ 0x140018A90 (-vLockHandle@HANDLELOCK@@AEAAXIW4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HANDLELOCK::HANDLELOCK(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 12) = 0;
  HANDLELOCK::vLockHandle(a1, (unsigned __int16)a3 | (a3 >> 8) & 0xFF0000, a4);
  return a1;
}
