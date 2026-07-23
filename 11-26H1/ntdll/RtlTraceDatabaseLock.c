/*
 * XREFs of RtlTraceDatabaseLock @ 0x18014A010
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 */

NTSTATUS __fastcall RtlTraceDatabaseLock(__int64 a1)
{
  NTSTATUS result; // eax

  result = RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
