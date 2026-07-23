/*
 * XREFs of VerifierMmUnmapIoSpace @ 0x140C45CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140C2F5A8 (ViTargetAddToCounter.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierMmUnmapIoSpace(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 0x800) != 0 )
    CarReportRuleViolationFromNt(196, 123LL, CurrentIrql, BugCheckParameter3, a2, 0xBu, retaddr);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 216LL, 0xE0u, -a2);
  return guard_dispatch_icall_no_overrides(BugCheckParameter3, a2);
}
