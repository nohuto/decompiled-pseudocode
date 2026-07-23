/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x18008EF18
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18008EE30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlpFtInitialize @ 0x18011D618 (RtlpFtInitialize.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TpAllocWork @ 0x180038DB0 (TpAllocWork.c)
 */

PTP_WORK *__fastcall RtlpFcAllocateChangeRegistration(_TP_WORK *a1, _TP_WORK *a2)
{
  PTP_WORK *v3; // rdi
  PTP_WORK *Heap_0; // rax
  PTP_WORK *v6; // rbx

  v3 = 0LL;
  Heap_0 = (PTP_WORK *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
  v6 = Heap_0;
  if ( Heap_0 )
  {
    if ( TpAllocWork(Heap_0 + 5, RtlpFcChangeRegistrationCallback, Heap_0, 0LL) < 0 )
    {
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
    else
    {
      v6[2] = a1;
      v3 = v6;
      v6[3] = a2;
    }
  }
  return v3;
}
