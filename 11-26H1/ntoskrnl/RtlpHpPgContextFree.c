/*
 * XREFs of RtlpHpPgContextFree @ 0x14063A300
 * Callers:
 *     RtlpHpSegFreeInternal @ 0x140352AC8 (RtlpHpSegFreeInternal.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140261920 (RtlCaptureStackBackTrace.c)
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 *     RtlpHpEnvProtectVA @ 0x14063905C (RtlpHpEnvProtectVA.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall RtlpHpPgContextFree(_QWORD *a1, PVOID *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v8; // rdx

  guard_dispatch_icall_no_overrides(*a1, a4);
  if ( a4 == (struct _KLOCK_ENTRIES *)(a2 + 512) )
  {
    guard_dispatch_icall_no_overrides(*a1, a2);
    if ( (int)guard_dispatch_icall_no_overrides(*a1, a2) >= 0 )
    {
      RtlCaptureStackBackTrace(0, 0x200u, a2, 0LL);
      RtlpHpEnvProtectVA((unsigned __int64)a2, v8, 2u);
    }
    guard_dispatch_icall_no_overrides(*a1, a2);
    return 1LL;
  }
  else
  {
    RtlpLogHeapFailure(9u, a1[8], (__int64)(a2 + 512), a4, 0LL, 0LL);
    return 0LL;
  }
}
