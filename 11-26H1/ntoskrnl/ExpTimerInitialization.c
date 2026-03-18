/*
 * XREFs of ExpTimerInitialization @ 0x140CE6524
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14052D25C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140532A10 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 */

bool ExpTimerInitialization()
{
  unsigned int v0; // edi
  int v1; // ebx
  __int64 v2; // rdx
  unsigned int ReservedPreviousReadyTimeValue; // r8d
  int *v4; // rdx
  unsigned int v5; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  __int16 v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+38h] [rbp-21h]
  __int128 v10; // [rsp+3Ch] [rbp-1Dh]
  int v11; // [rsp+4Ch] [rbp-Dh]
  int v12; // [rsp+54h] [rbp-5h]
  int v13; // [rsp+5Ch] [rbp+3h]
  void *v14; // [rsp+78h] [rbp+1Fh]
  unsigned __int8 v15; // [rsp+C0h] [rbp+67h]

  v0 = 0;
  ExSaPageGroupDescriptorArrayLock.AbWaitObject = &ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
  ExSaPageGroupDescriptorArrayLock.KernelWaitTime = 0LL;
  ExSaPageGroupDescriptorArrayLock.SchedulerAssist = &ExSaPageGroupDescriptorArrayLock.SchedulerAssist;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Timer");
  memset_0(&v8, 0, 0x78uLL);
  v8 = 120;
  v9 = 256;
  v12 = 512;
  v13 = 336;
  v11 = 2031619;
  v10 = ExpTimerMapping;
  v14 = ExpDeleteTimer;
  v1 = ObCreateObjectType(&DestinationString, &v8, 0LL, (__int64)&ExTimerObjectType);
  if ( v1 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IRTimer");
    v13 = 168;
    v14 = ExpDeleteTimer2;
    v1 = ObCreateObjectType(&DestinationString, &v8, 0LL, (__int64)&ExpIRTimerObjectType);
    ExpTimerFreedCookie = ExGenRandom(0, v2);
    if ( (Feature_AusterityResilientTimers__private_featureState & 0x10) == 0 )
    {
      v15 = Feature_AusterityResilientTimers__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_AusterityResilientTimers__private_descriptor,
        Feature_AusterityResilientTimers__private_featureState | 1,
        3);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v15,
        3,
        (__int64)&Feature_AusterityResilientTimers__private_descriptor);
    }
    ReservedPreviousReadyTimeValue = ExSaPageGroupDescriptorArrayLock.ReservedPreviousReadyTimeValue;
    LOBYTE(ExSaPageGroupDescriptorArrayLock.UserWaitTime) = 1;
    if ( ExSaPageGroupDescriptorArrayLock.ReservedPreviousReadyTimeValue )
    {
      v4 = (int *)&unk_140E091C4;
      do
      {
        v5 = ReservedPreviousReadyTimeValue >> v0++;
        *v4 = v5 & 1;
        v4 += 6;
      }
      while ( v0 < 0x14 );
    }
  }
  return v1 >= 0;
}
