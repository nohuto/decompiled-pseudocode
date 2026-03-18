/*
 * XREFs of ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x14025720C
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140149244 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401492EC (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ?IsPenQuickLaunchHotKey@@YA_NIE@Z @ 0x1402572D0 (-IsPenQuickLaunchHotKey@@YA_NIE@Z.c)
 *     ?TraceLoggingSuppressQuickLaunch@@YAXXZ @ 0x1402D25E8 (-TraceLoggingSuppressQuickLaunch@@YAXXZ.c)
 */

char __fastcall IsPenQuickLaunchAndShouldBeDisabled(unsigned int a1, unsigned __int8 a2)
{
  char v2; // di
  __int64 InvertedPenTime; // rbx
  unsigned __int8 v5; // [rsp+40h] [rbp+18h]

  v2 = 0;
  if ( IsPenQuickLaunchHotKey(a1, a2) )
  {
    if ( (Feature_QuickLaunchInvocation__private_featureState & 0x10) == 0 )
    {
      v5 = Feature_QuickLaunchInvocation__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_QuickLaunchInvocation__private_descriptor,
        Feature_QuickLaunchInvocation__private_featureState | 1,
        3u,
        1LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v5,
        3,
        (__int64)&Feature_QuickLaunchInvocation__private_descriptor);
    }
    InvertedPenTime = RIMGetLastInvertedPenTime();
    if ( (unsigned int)((unsigned __int64)(1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - InvertedPenTime))
                      / gliQpcFreq) < 0xFA )
    {
      v2 = 1;
      TraceLoggingSuppressQuickLaunch();
    }
  }
  return v2;
}
