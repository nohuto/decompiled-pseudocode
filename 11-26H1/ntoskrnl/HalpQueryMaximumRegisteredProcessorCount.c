/*
 * XREFs of HalpQueryMaximumRegisteredProcessorCount @ 0x14057CE5C
 * Callers:
 *     HalpTimerSelectRoles @ 0x140577E78 (HalpTimerSelectRoles.c)
 *     HalEnumerateProcessors @ 0x14057C4A0 (HalEnumerateProcessors.c)
 *     HalStartDynamicProcessor @ 0x14057C560 (HalStartDynamicProcessor.c)
 *     HalpInterruptGetNextProcessorLocalId @ 0x14057C778 (HalpInterruptGetNextProcessorLocalId.c)
 *     HalStartNextProcessor @ 0x1405809B0 (HalStartNextProcessor.c)
 *     HalpTscReserveResources @ 0x140583DF0 (HalpTscReserveResources.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140584FB0 (HalpHvInitMcaStatusMsrCache.c)
 *     EmonAllocateResources @ 0x140594F44 (EmonAllocateResources.c)
 *     EmonInitializeProfilingBSP @ 0x1405957E4 (EmonInitializeProfilingBSP.c)
 *     HalpTscReportSyncStatus @ 0x1407819C0 (HalpTscReportSyncStatus.c)
 *     HalpMcaInitializePcrContext @ 0x140BEA068 (HalpMcaInitializePcrContext.c)
 *     InitCounterGroupBsp @ 0x140BEAEC0 (InitCounterGroupBsp.c)
 *     EmonCompleteInitializeProfiling @ 0x140BED1A0 (EmonCompleteInitializeProfiling.c)
 *     HalpInitializeProfiling @ 0x140BED728 (HalpInitializeProfiling.c)
 *     HalpDpStartProcessor @ 0x140BEE634 (HalpDpStartProcessor.c)
 *     Amd64InitializeProfiling @ 0x140BEF590 (Amd64InitializeProfiling.c)
 *     HalpPreAllocateKInterrupts @ 0x140CB30FC (HalpPreAllocateKInterrupts.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     HalQueryMaximumProcessorCount @ 0x1404FB520 (HalQueryMaximumProcessorCount.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 */

__int64 HalpQueryMaximumRegisteredProcessorCount()
{
  __int64 result; // rax
  int v1; // ett
  unsigned __int32 MaximumProcessorCount; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int32 v5; // [rsp+60h] [rbp+20h] BYREF
  int v6; // [rsp+68h] [rbp+28h] BYREF
  int v7; // [rsp+70h] [rbp+30h] BYREF

  v6 = 0;
  DestinationString = 0LL;
  v7 = 0;
  v5 = 0;
  _m_prefetchw(&dword_140E10824);
  LODWORD(result) = dword_140E10824;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&dword_140E10824, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( !(_DWORD)result )
  {
    MaximumProcessorCount = HalQueryMaximumProcessorCount();
    if ( MaximumProcessorCount > 0x800 )
      MaximumProcessorCount = 2048;
    RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v7, &v5, 4LL, &v6) >= 0 && v6 == 4 && v7 == 4 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 *= CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
      if ( MaximumProcessorCount > v5 )
        MaximumProcessorCount = v5;
    }
    result = MaximumProcessorCount;
    _InterlockedExchange(&dword_140E10824, MaximumProcessorCount);
  }
  return result;
}
