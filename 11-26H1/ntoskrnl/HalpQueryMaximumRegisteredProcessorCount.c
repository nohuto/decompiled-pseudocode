/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x14057F37C
 * Callers:
 *     HalpTimerSelectRoles @ 0x14057A3A8 (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x14057E9D0 (HalEnumerateProcessors.c)
 *     HalStartDynamicProcessor @ 0x14057EA90 (HalStartDynamicProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14057ECA8 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x140582ED0 (HalStartNextProcessor.c)
 *     HalpTscReserveResources @ 0x140586310 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x1405874D0 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x1405976C4 (EmonAllocateResources.c)
 *     EmonInitializeProfilingBSP @ 0x140597F64 (EmonInitializeProfilingBSP.c)
 *     HalpTscReportSyncStatus @ 0x1407844C0 (HalpTscReportSyncStatus.c)
 *     HalpMcaInitializePcrContext @ 0x140BF0068 (HalpMcaInitializePcrContext.c)
 *     InitCounterGroupBsp @ 0x140BF0EC0 (InitCounterGroupBsp.c)
 *     EmonCompleteInitializeProfiling @ 0x140BF31A0 (EmonCompleteInitializeProfiling.c)
 *     HalpInitializeProfiling @ 0x140BF3728 (HalpInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x140BF4634 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x140BF5590 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140CB913C (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x1404362A0 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG ResultDataSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  ResultDataSize = 0;
  DestinationString = 0LL;
  Type = 0;
  Data = 0;
  _m_prefetchw(&dword_140E10954);
  LODWORD(result) = dword_140E10954;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140E10954, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount > 0x800 )
      MaximumProcessorCount = 2048;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) >= 0
      && ResultDataSize == 4
      && Type == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      Data *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > Data )
        MaximumProcessorCount = Data;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140E10954, MaximumProcessorCount);
  }
  return result;
}
