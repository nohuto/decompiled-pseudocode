/*
 * XREFs of PfProcessExitNotification @ 0x140ACACC4
 * Callers:
 *     PspExitProcess @ 0x1409FE380 (PspExitProcess.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     PfpLogApplicationEvent @ 0x14043FAA0 (PfpLogApplicationEvent.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     PfSnAltProfileCleanup @ 0x14077F584 (PfSnAltProfileCleanup.c)
 *     PfSnAltProfileFindByProcess @ 0x140ACAD6C (PfSnAltProfileFindByProcess.c)
 *     PfSnEndProcessTrace @ 0x140ACAE28 (PfSnEndProcessTrace.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfProcessExitNotification(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  _RTL_BALANCED_NODE *v5; // rax
  _RTL_BALANCED_NODE *v6; // rbx

  PfpLogApplicationEvent(a1, 0LL);
  PfLockExclusiveAcquire((unsigned __int64 *)&stru_140E67200.WaitBlock[1].Thread, v2, v3, v4);
  v5 = (_RTL_BALANCED_NODE *)PfSnAltProfileFindByProcess(a1);
  v6 = v5;
  if ( v5 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)&stru_140E67200.WaitBlockFill11[40], v5);
    RtlRbRemoveNode((PRTL_RB_TREE)&stru_140E67200.WaitBlockFill11[56], v6 + 1);
  }
  PfLockExclusiveRelease((struct _KTHREAD *)&stru_140E67200.WaitBlockFill11[72]);
  if ( v6 )
  {
    PfSnAltProfileCleanup((__int64)v6);
    ExFreePoolWithTag(v6, 0x66506343u);
  }
  if ( LODWORD(stru_140E67200.ThreadLock) )
    PfSnEndProcessTrace(a1, 2LL, 0LL);
}
