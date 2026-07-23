/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x1800537F0
 * Callers:
 *     RtlGetProcessPreferredUILanguages @ 0x180022E00 (RtlGetProcessPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180052860 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180052AB0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x1800545D0 (RtlpSetProcUserMachineLangList.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DAA84 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x180101EEC (RtlpSetProcMergedLangList.c)
 *     RtlpCleanupRegistryKeys @ 0x180141F90 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18006A3B0 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18015F4C0 (ZwDelayExecution.c)
 */

NTSTATUS RtlpInitMuiCriticalSection()
{
  NTSTATUS result; // eax
  LARGE_INTEGER DelayInterval; // [rsp+38h] [rbp+10h] BYREF

  DelayInterval.QuadPart = -1000000LL;
  while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
  {
    result = InitRegistryInfoCritSect;
    if ( InitRegistryInfoCritSect == 1 )
    {
      ZwDelayExecution(0, &DelayInterval);
      result = InitRegistryInfoCritSect;
    }
    if ( result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0, 0);
  InitRegistryInfoCritSect = 2;
  return result;
}
