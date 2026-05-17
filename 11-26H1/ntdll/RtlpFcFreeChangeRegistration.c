/*
 * XREFs of RtlpFcFreeChangeRegistration @ 0x180064B0C
 * Callers:
 *     RtlUnregisterFeatureConfigurationChangeNotification @ 0x1800ED4D0 (RtlUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     TpReleaseWork @ 0x180064C60 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x180064D50 (TpWaitForWork.c)
 */

__int64 __fastcall RtlpFcFreeChangeRegistration(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    TpWaitForWork(v2, 1LL);
    TpReleaseWork(*(_QWORD *)(a1 + 40));
  }
  return RtlFreeHeap_0();
}
