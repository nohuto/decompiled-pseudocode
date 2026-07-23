/*
 * XREFs of PopCancelIgnoreBatteryStatusChange @ 0x140B63860
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 */

__int64 PopCancelIgnoreBatteryStatusChange()
{
  KeResetEvent(&stru_140F10740);
  _InterlockedExchange(&dword_140F106B8, 1);
  return KiSetTimerEx((__int64)&stru_140F106C0, -300000000LL, 0, 0, (__int64)&dword_140F10700);
}
