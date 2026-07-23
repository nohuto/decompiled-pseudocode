/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x1406D2C74
 * Callers:
 *     PopFreeWakeSource @ 0x140B47FEC (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
