/*
 * XREFs of VerifierMmUnlockPages @ 0x140C45B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140C2F5A8 (ViTargetAddToCounter.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierMmUnlockPages(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v4; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 120LL, CurrentIrql, BugCheckParameter2, 0LL, 0xBu, retaddr);
  v4 = *(__int16 *)(BugCheckParameter2 + 10);
  if ( (v4 & 2) == 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 124LL, BugCheckParameter2, v4, 0LL, 0xBu, retaddr);
  if ( (unsigned int)VfVerifyMode >= 3 && (v4 & 4) != 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 125LL, BugCheckParameter2, v4, 0LL, 0xBu, retaddr);
  if ( (v4 & 0x10) != 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 180LL, BugCheckParameter2, v4, 16LL, 0xBu, retaddr);
  if ( (v4 & 1) != 0 && _bittest(&MmVerifierData, 0xCu) )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  if ( _bittest(&MmVerifierData, 0xCu) )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  return guard_dispatch_icall_no_overrides(BugCheckParameter2, a2);
}
