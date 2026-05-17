/*
 * XREFs of RtlUpdateClonedCriticalSection @ 0x180105550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlUpdateClonedCriticalSection(__int64 a1)
{
  struct _TEB *result; // rax

  result = NtCurrentTeb();
  *(_QWORD *)(a1 + 16) = result->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 8) = -2;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
