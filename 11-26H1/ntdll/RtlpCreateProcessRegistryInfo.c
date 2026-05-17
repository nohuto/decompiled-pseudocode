/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x180008370
 * Callers:
 *     RtlGetSystemPreferredUILanguages @ 0x180002AF0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180006B50 (RtlSetThreadPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180007130 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180007380 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpQueryDefaultUILanguage @ 0x180009CD0 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetUILanguageInfo @ 0x18000A1D0 (RtlGetUILanguageInfo.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18000A750 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlGetFileMUIPath @ 0x180035550 (RtlGetFileMUIPath.c)
 *     RtlGetProcessPreferredUILanguages @ 0x180038890 (RtlGetProcessPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x180038AA0 (RtlGetUserPreferredUILanguages.c)
 *     RtlpCleanupRegistryKeys @ 0x180142090 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x180142B80 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180143D50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpRefreshCachedUILanguage @ 0x18014DB60 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 *     RtlInitializeCriticalSectionEx @ 0x18007BB90 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18015F5C0 (ZwDelayExecution.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  int RegistryInfo; // ebx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = g_RegInfo;
  v2 = 0LL;
  RegistryInfo = 0;
  if ( !g_RegInfo )
  {
    v7 = -1000000LL;
    while ( _InterlockedCompareExchange(&InitRegistryInfoCritSect, 1, 0) )
    {
      v5 = InitRegistryInfoCritSect;
      if ( InitRegistryInfoCritSect == 1 )
      {
        ZwDelayExecution(0LL, &v7);
        v5 = InitRegistryInfoCritSect;
      }
      if ( v5 == 2 )
        goto LABEL_7;
    }
    RtlInitializeCriticalSectionEx(&RegistryInfoCritSect, 0LL, 0LL);
    InitRegistryInfoCritSect = 2;
LABEL_7:
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    RegistryInfo = 0;
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    v1 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( RegistryInfo >= 0 )
      v2 = v1;
    *a1 = v2;
  }
  return (unsigned int)RegistryInfo;
}
