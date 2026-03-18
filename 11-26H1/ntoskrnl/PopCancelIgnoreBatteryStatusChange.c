/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x140B607C0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140F0FF80);
  _InterlockedExchange(&dword_140F0FEF8, 1);
  return KiSetTimerEx((__int64)&stru_140F0FF00, -300000000LL, 0, 0, (__int64)&dword_140F0FF40);
}
