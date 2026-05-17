/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x180079214
 * Callers:
 *     EtwpInitLoggerContext @ 0x180077550 (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x180079258 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 488) )
  {
    result = RtlFreeHeap_0();
    *(_QWORD *)(a1 + 488) = 0LL;
  }
  return result;
}
