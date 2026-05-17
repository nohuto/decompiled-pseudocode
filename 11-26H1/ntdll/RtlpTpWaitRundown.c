/*
 * XREFs of RtlpTpWaitRundown @ 0x1800DDAA0
 * Callers:
 *     RtlpTpWaitFinalizationCallback @ 0x1800DDA70 (RtlpTpWaitFinalizationCallback.c)
 *     RtlDeregisterWaitEx @ 0x1801087C0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     ZwSetEvent @ 0x18015F100 (ZwSetEvent.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 */

__int64 __fastcall RtlpTpWaitRundown(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
    ZwSetEvent(v2, 0LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  return RtlFreeHeap_0();
}
