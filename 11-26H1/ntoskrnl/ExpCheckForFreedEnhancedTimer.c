/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1403AA888
 * Callers:
 *     RtlpHpEnvCompactionSchedule @ 0x14034D650 (RtlpHpEnvCompactionSchedule.c)
 *     WdtpArmTimer @ 0x1403AA03C (WdtpArmTimer.c)
 *     ExCancelTimer @ 0x1403AA0D0 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x1403AABC0 (ExDeleteTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
