/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x180084F5C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800EC970 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpReleaseWork @ 0x1800850B0 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x1800851A0 (TpWaitForWork.c)
 */

LOGICAL __fastcall RtlpFcFreeChangeRegistration(PVOID BaseAddress)
{
  _TP_WORK *v2; // rcx

  v2 = (_TP_WORK *)*((_QWORD *)BaseAddress + 5);
  if ( v2 )
  {
    TpWaitForWork(v2, 1u);
    TpReleaseWork(*((PTP_WORK *)BaseAddress + 5));
  }
  return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
}
