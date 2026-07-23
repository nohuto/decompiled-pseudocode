/*
 * XREFs of KeEnableCoreIsolationMitigationPolicyThread @ 0x1404CCBF0
 * Callers:
 *     PspApplyCoreIsolationPolicy @ 0x1407799A4 (PspApplyCoreIsolationPolicy.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404CCC84 (KiAdjustCoreIsolationReasonThread.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404CCE24 (KiAdjustUserIsolationDomainThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeEnableCoreIsolationMitigationPolicyThread(struct _KTHREAD *a1)
{
  struct _KTHREAD *v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  struct _SINGLE_LIST_ENTRY v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v6.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  KiAdjustCoreIsolationReasonThread(v1);
  KiAdjustUserIsolationDomainThread(v1, *(_QWORD *)&v1->Process[4].ProcessLock, 0LL);
  LOBYTE(v3) = CurrentIrql;
  KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v6, v3, v4);
  return 0LL;
}
