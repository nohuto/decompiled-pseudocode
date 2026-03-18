/*
 * XREFs of KeEnableCoreIsolationMitigationPolicyThread @ 0x1404D3380
 * Callers:
 *     PspApplyCoreIsolationPolicy @ 0x140776AFC (PspApplyCoreIsolationPolicy.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     KiAdjustCoreIsolationReasonThread @ 0x1404D3414 (KiAdjustCoreIsolationReasonThread.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1404D35B4 (KiAdjustUserIsolationDomainThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
