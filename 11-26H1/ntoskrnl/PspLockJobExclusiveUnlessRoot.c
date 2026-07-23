/*
 * XREFs of PspLockJobExclusiveUnlessRoot @ 0x14077FBE4
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140AE4DDC (PspSendProcessNotificationToJobChain.c)
 * Callees:
 *     ExAcquireFastResourceExclusive @ 0x140274BD0 (ExAcquireFastResourceExclusive.c)
 */

char __fastcall PspLockJobExclusiveUnlessRoot(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1312);
  if ( a1 != v1 )
    LOBYTE(v1) = ExAcquireFastResourceExclusive((struct _KTHREAD *)(a1 + 56), 0LL, 1);
  return v1;
}
