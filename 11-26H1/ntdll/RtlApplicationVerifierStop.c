/*
 * XREFs of RtlApplicationVerifierStop @ 0x180138180
 * Callers:
 *     RtlCheckHeldCriticalSections @ 0x1800E4590 (RtlCheckHeldCriticalSections.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _PEB *__fastcall RtlApplicationVerifierStop(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x2000100) == 0x2000000 )
    RtlpPageHeapStop(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  if ( AVrfpVerifierStopMessageFunction )
    return (struct _PEB *)((__int64 (__fastcall *)(__int64))AVrfpVerifierStopMessageFunction)(a1);
  return result;
}
