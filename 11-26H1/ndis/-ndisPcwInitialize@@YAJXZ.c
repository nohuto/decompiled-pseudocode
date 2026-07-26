/*
 * XREFs of ?ndisPcwInitialize@@YAJXZ @ 0x1401905D0
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x14014A32C (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

__int64 ndisPcwInitialize(void)
{
  ULONG RecommendedSharedDataAlignment; // eax
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+20h] [rbp-40h] BYREF
  __int64 v3; // [rsp+50h] [rbp-10h]

  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisPcwMutex);
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  *(_QWORD *)&Info.Version = 512LL;
  *(_QWORD *)&Info.CounterCount = 25LL;
  v3 = 0LL;
  Info.Callback = (PPCW_CALLBACK)ndisCounterSetProviderCallback;
  Info.CallbackContext = (PVOID)1;
  ndisPcwOffsetToPerCpuData = -RecommendedSharedDataAlignment & (RecommendedSharedDataAlignment + 255);
  if ( RecommendedSharedDataAlignment < 0x1C0 )
    RecommendedSharedDataAlignment = 448;
  ndisPcwPerCpuDataStride = RecommendedSharedDataAlignment;
  Info.Name = (PCUNICODE_STRING)L"Z\\";
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkInterfaceCounterSet'::`2'::Descriptors;
  PcwRegister(&ndisNetworkInterfaceCounterSet, &Info);
  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (PCUNICODE_STRING)L"JL";
  *(_QWORD *)&Info.CounterCount = 13LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationNetworkActivityCyclesCounterSet'::`2'::Descriptors;
  v3 = 0LL;
  Info.Callback = (PPCW_CALLBACK)ndisCounterSetProviderCallback;
  Info.CallbackContext = (PVOID)2;
  PcwRegister(&ndisNetworkActivityCyclesCounterSet, &Info);
  *(_QWORD *)&Info.Version = 512LL;
  Info.Name = (PCUNICODE_STRING)L"PR";
  *(_QWORD *)&Info.CounterCount = 5LL;
  Info.Counters = (PPCW_COUNTER_DESCRIPTOR)&`ndisInitRegistrationInformationPhysicalNICCounterSet'::`2'::Descriptors;
  v3 = 0LL;
  Info.Callback = (PPCW_CALLBACK)ndisPhysicalNicPcwProviderCallback;
  Info.CallbackContext = (PVOID)3;
  PcwRegister(&ndisPhysicalNICCounterSet, &Info);
  return 0LL;
}
