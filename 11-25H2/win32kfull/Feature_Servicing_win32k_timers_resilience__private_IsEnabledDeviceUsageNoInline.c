/*
 * XREFs of Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline @ 0x14028BBF4
 * Callers:
 *     InternalSetTimer @ 0x140019C44 (InternalSetTimer.c)
 *     DestroyThreadsTimers @ 0x140246280 (DestroyThreadsTimers.c)
 *     DestroyWindowsTimers @ 0x14024634C (DestroyWindowsTimers.c)
 *     DoTimer @ 0x1402463F0 (DoTimer.c)
 *     FreeTimer @ 0x140246670 (FreeTimer.c)
 *     xxxTimersProc @ 0x140246B40 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x14028C0D0 (xxxTimersProc_Old.c)
 * Callees:
 *     Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback @ 0x14028BC2C (Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_win32k_timers_resilience__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_win32k_timers_resilience__private_featureState & 0x10) != 0 )
    return Feature_Servicing_win32k_timers_resilience__private_featureState & 1;
  else
    return Feature_Servicing_win32k_timers_resilience__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_win32k_timers_resilience__private_featureState,
             3LL);
}
