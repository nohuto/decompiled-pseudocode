/*
 * XREFs of VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140C3CE10
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402642E0 (KeAreInterruptsEnabled.c)
 *     CarReportRuleViolationFromNt @ 0x140C2BF1C (CarReportRuleViolationFromNt.c)
 */

void __fastcall VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && KeAreInterruptsEnabled() )
    CarReportRuleViolationFromNt(196, 50LL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL, 0xBu, *(_QWORD *)a1);
}
