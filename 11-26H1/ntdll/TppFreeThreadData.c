/*
 * XREFs of TppFreeThreadData @ 0x1800E703C
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

struct _TEB *__fastcall TppFreeThreadData(__int64 a1)
{
  struct _TEB *result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) |= 4u;
    RtlFreeHeap_0();
    result = NtCurrentTeb();
    result->ThreadPoolData = 0LL;
  }
  return result;
}
