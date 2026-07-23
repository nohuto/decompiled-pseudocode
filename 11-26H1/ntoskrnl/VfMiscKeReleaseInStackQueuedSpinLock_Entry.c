/*
 * XREFs of VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140C42E90
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     ViMiscCheckKeLowerIrql @ 0x140C4D218 (ViMiscCheckKeLowerIrql.c)
 */

__int64 __fastcall VfMiscKeReleaseInStackQueuedSpinLock_Entry(_QWORD *a1)
{
  _QWORD *v1; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v3; // rdx

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
    CarReportRuleViolationFromNt(196, 50LL, CurrentIrql, a1[1], 0LL, 0xBu, *a1);
  v3 = v1[1];
  LOBYTE(a1) = CurrentIrql;
  LOBYTE(v3) = *(_BYTE *)(v3 + 16);
  return ViMiscCheckKeLowerIrql(a1, v3, *v1);
}
