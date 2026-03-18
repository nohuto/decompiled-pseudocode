/*
 * XREFs of VerifierMmUnlockPages @ 0x140B90D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B7B910 (ViTargetAddToCounter.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierMmUnlockPages(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v3; // rdi
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 120LL, CurrentIrql, BugCheckParameter2, 0LL, 0xBu, retaddr);
  v3 = *(__int16 *)(BugCheckParameter2 + 10);
  if ( (v3 & 2) == 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 124LL, BugCheckParameter2, v3, 0LL, 0xBu, retaddr);
  if ( (unsigned int)VfVerifyMode >= 3 && (v3 & 4) != 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 125LL, BugCheckParameter2, v3, 0LL, 0xBu, retaddr);
  if ( (v3 & 0x10) != 0 && _bittest(&MmVerifierData, 0xBu) )
    CarReportRuleViolationFromNt(196, 180LL, BugCheckParameter2, v3, 16LL, 0xBu, retaddr);
  if ( (v3 & 1) != 0 && _bittest(&MmVerifierData, 0xCu) )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  if ( _bittest(&MmVerifierData, 0xCu) )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, -(__int64)*(unsigned int *)(BugCheckParameter2 + 40));
  return guard_dispatch_icall_no_overrides(BugCheckParameter2);
}
