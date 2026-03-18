/*
 * XREFs of ExDeleteWakeTimerInfo @ 0x1406CEC44
 * Callers:
 *     PopFreeWakeSource @ 0x140B45FBC (PopFreeWakeSource.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteWakeTimerInfo(void *a1)
{
  ExFreePoolWithTag(a1, 0x53577254u);
}
