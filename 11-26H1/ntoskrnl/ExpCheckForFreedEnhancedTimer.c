/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1403B4498
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     WdtpArmTimer @ 0x1403B3C4C (WdtpArmTimer.c)
 *     ExCancelTimer @ 0x1403B3CE0 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x1403B48D0 (ExDeleteTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
