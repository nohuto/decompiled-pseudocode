/*
 * XREFs of PsTimerResolutionActive @ 0x14044E890
 * Callers:
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiExpireTimer2 @ 0x140338F88 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KiTimerWaitTest @ 0x1403B6C5C (KiTimerWaitTest.c)
 *     KiInitializeTimer2 @ 0x14044E75C (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 0x1000) != 0 && (*(_DWORD *)(a1 + 1532) & 0x4000000) == 0;
}
