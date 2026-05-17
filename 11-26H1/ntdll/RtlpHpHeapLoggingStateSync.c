/*
 * XREFs of RtlpHpHeapLoggingStateSync @ 0x1800FCB60
 * Callers:
 *     RtlpCreateHeap @ 0x18007C890 (RtlpCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 *     RtlpSynchronizeHeapLoggingStateCallback @ 0x1800FCB40 (RtlpSynchronizeHeapLoggingStateCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 */

unsigned int *__fastcall RtlpHpHeapLoggingStateSync(__int64 a1)
{
  unsigned int *result; // rax
  __int64 v3; // rcx

  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v3 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v3 = 2147353472LL;
  }
  if ( *(_BYTE *)v3 && (result = (unsigned int *)NtCurrentPeb(), (result[222] & 1) != 0) )
    _InterlockedOr((volatile signed __int32 *)(a1 + 20), 0x80u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 20), 0xFFFFFF7F);
  return result;
}
