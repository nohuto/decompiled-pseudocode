/*
 * XREFs of PspLockJobExclusiveUnlessRoot @ 0x14077D0F0
 * Callers:
 *     PspSendProcessNotificationToJobChain @ 0x140958A58 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140275660 (ExAcquireFastResourceExclusive.c)
 */

char __fastcall PspLockJobExclusiveUnlessRoot(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1312);
  if ( a1 != v1 )
    LOBYTE(v1) = ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
  return v1;
}
