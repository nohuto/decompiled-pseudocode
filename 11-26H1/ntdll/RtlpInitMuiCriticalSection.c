/*
 * XREFs of RtlpInitMuiCriticalSection @ 0x1800080C0
 * Callers:
 *     RtlSetProcessPreferredUILanguages @ 0x180007130 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180008EA0 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180038890 (RtlGetProcessPreferredUILanguages.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800DDB14 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18010279C (RtlpSetProcMergedLangList.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

__int64 RtlpInitMuiCriticalSection()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
  {
    result = (unsigned int)InitRegistryInfoCritSect;
    if ( InitRegistryInfoCritSect == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)InitRegistryInfoCritSect;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0LL, 0LL);
  InitRegistryInfoCritSect = 2;
  return result;
}
