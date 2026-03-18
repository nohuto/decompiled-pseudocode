/*
 * XREFs of PsTimerResolutionActive @ 0x140457020
 * Callers:
 *     KiCommitThreadWait @ 0x1402229B0 (KiCommitThreadWait.c)
 *     KiExpireTimer2 @ 0x140336F08 (KiExpireTimer2.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KiTimerWaitTest @ 0x1403ACF4C (KiTimerWaitTest.c)
 *     KiInitializeTimer2 @ 0x140456EEC (KiInitializeTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsTimerResolutionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 500) & 0x1000) != 0 && (*(_DWORD *)(a1 + 1532) & 0x4000000) == 0;
}
