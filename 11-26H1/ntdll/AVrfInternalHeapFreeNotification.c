/*
 * XREFs of AVrfInternalHeapFreeNotification @ 0x180137EC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall AVrfInternalHeapFreeNotification(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rax
  __int64 *v5; // rbx
  void (__fastcall *v6)(__int64, __int64); // rax

  v2 = NtCurrentPeb();
  if ( (v2->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection(&AVrfpVerifierLock);
    v5 = (__int64 *)AVrfpVerifierProvidersList;
    while ( v5 != &AVrfpVerifierProvidersList )
    {
      v6 = (void (__fastcall *)(__int64, __int64))v5[8];
      v5 = (__int64 *)*v5;
      if ( v6 )
        v6(a1, a2);
    }
    LODWORD(v2) = RtlLeaveCriticalSection(&AVrfpVerifierLock);
  }
  return (int)v2;
}
