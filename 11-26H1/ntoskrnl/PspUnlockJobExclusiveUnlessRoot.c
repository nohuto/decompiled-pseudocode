/*
 * XREFs of PspUnlockJobExclusiveUnlessRoot @ 0x14077FCCC
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1409FEEF8 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x140AE4DDC (PspSendProcessNotificationToJobChain.c)
 * Callees:
 *     ExReleaseFastResourceExclusive @ 0x14048AE40 (ExReleaseFastResourceExclusive.c)
 */

void __fastcall PspUnlockJobExclusiveUnlessRoot(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 != *(_QWORD *)(a1 + 1312) )
    ExReleaseFastResourceExclusive(a1 + 56, 0LL, a3, a4);
}
