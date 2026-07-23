/*
 * XREFs of TppFreeDirectParamsCache @ 0x1800E66FC
 * Callers:
 *     TppWorkerThread @ 0x180028B50 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

LOGICAL __fastcall TppFreeDirectParamsCache(__int64 a1)
{
  __int64 v1; // r8
  LOGICAL result; // eax

  v1 = *(_QWORD *)(a1 + 344);
  if ( v1 )
  {
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF);
    if ( result == 1 )
      return RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3145728, *(PVOID *)v1);
  }
  return result;
}
