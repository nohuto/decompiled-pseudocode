/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x18006EAC8
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18006E9E0 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     RtlpFtInitialize @ 0x18011D868 (RtlpFtInitialize.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TpAllocWork @ 0x18004E830 (TpAllocWork.c)
 */

__int64 __fastcall RtlpFcAllocateChangeRegistration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 Heap_0; // rax
  __int64 v6; // rbx

  v3 = 0LL;
  Heap_0 = RtlAllocateHeap_0();
  v6 = Heap_0;
  if ( Heap_0 )
  {
    if ( (int)TpAllocWork((_QWORD *)(Heap_0 + 40), (__int64)RtlpFcChangeRegistrationCallback, Heap_0, 0LL) < 0 )
    {
      RtlFreeHeap_0();
    }
    else
    {
      *(_QWORD *)(v6 + 16) = a1;
      v3 = v6;
      *(_QWORD *)(v6 + 24) = a2;
    }
  }
  return v3;
}
