/*
 * XREFs of ViMiscCheckKeLowerIrql @ 0x140C4D218
 * Callers:
 *     VfMiscKeReleaseInStackQueuedSpinLock_Entry @ 0x140C42E90 (VfMiscKeReleaseInStackQueuedSpinLock_Entry.c)
 *     VfMiscKeReleaseQueuedSpinLock_Entry @ 0x140C42F40 (VfMiscKeReleaseQueuedSpinLock_Entry.c)
 *     ViMiscCheckReleaseSpinlock @ 0x140C4D190 (ViMiscCheckReleaseSpinlock.c)
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 */

char __fastcall ViMiscCheckKeLowerIrql(unsigned __int8 a1, unsigned __int8 a2, __int64 a3)
{
  _UNKNOWN **v3; // rax
  ULONG_PTR v4; // rbx
  ULONG_PTR v6; // rdi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = a2;
  v6 = a1;
  if ( a1 < a2 )
    LOBYTE(v3) = CarReportRuleViolationFromNt(196, 49LL, a1, a2, 0LL, 0xBu, a3);
  if ( (unsigned __int8)v6 < 2u || (unsigned __int8)v4 >= 2u )
  {
    if ( (unsigned __int8)v4 > 0xFu )
      LOBYTE(v3) = CarReportRuleViolationFromNt(196, 49LL, v6, v4, 0LL, 0xBu, a3);
  }
  else
  {
    LOBYTE(v3) = KeGetPcr()->Prcb.DpcRequestSummary;
    if ( ((unsigned __int8)v3 & 1) != 0 )
      LOBYTE(v3) = CarReportRuleViolationFromNt(196, 49LL, v6, v4, 1LL, 0xBu, a3);
  }
  return (char)v3;
}
