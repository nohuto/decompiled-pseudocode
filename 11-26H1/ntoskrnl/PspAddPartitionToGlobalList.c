/*
 * XREFs of PspAddPartitionToGlobalList @ 0x14061997C
 * Callers:
 *     PspAllocatePartition @ 0x140803608 (PspAllocatePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PspAddPartitionToGlobalList(__int64 a1)
{
  KIRQL v2; // al
  _KTHREAD_WPS_FEEDBACK ****v3; // rcx
  _KTHREAD_WPS_FEEDBACK ***v4; // rbx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&NormalizationListLock.WaitBlockFill11[88]);
  v3 = (_KTHREAD_WPS_FEEDBACK ****)SshpBlockerCollections.Spare35[0];
  v4 = (_KTHREAD_WPS_FEEDBACK ***)(a1 + 56);
  if ( *(struct _KTHREAD **)SshpBlockerCollections.Spare35[0] != (struct _KTHREAD *)&SshpBlockerCollections.WpsFeedback )
    __fastfail(3u);
  *v4 = &SshpBlockerCollections.WpsFeedback;
  v4[1] = (_KTHREAD_WPS_FEEDBACK **)v3;
  *v3 = v4;
  SshpBlockerCollections.Spare35[0] = (unsigned __int64)v4;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&NormalizationListLock.WaitBlockFill11[88], v2);
}
