/*
 * XREFs of RtlTraceDatabaseValidate @ 0x18014A1B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseValidate(__int64 a1)
{
  RtlEnterCriticalSection(a1 + 48);
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection(a1 + 48);
  return 1;
}
