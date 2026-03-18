/*
 * XREFs of RtlpHpPgCleanupAllocationForCompaction @ 0x140639E58
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14034742C (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x140521C9C (RtlpLogHeapFailure.c)
 *     RtlpHpEnvProtectVA @ 0x14063905C (RtlpHpEnvProtectVA.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall RtlpHpPgCleanupAllocationForCompaction(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax

  guard_dispatch_icall_no_overrides(*a1, a2);
  v5 = RtlpHpEnvProtectVA(a2, v4, 4u);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741779 )
    RtlpLogHeapFailure(0, a1[8], a2, (struct _KLOCK_ENTRIES *)0x1000, v5, 0LL);
}
