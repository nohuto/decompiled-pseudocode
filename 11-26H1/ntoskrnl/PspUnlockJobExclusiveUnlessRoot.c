/*
 * XREFs of PspUnlockJobExclusiveUnlessRoot @ 0x14077D1D8
 * Callers:
 *     PspSendProcessNotificationToJobChain @ 0x140958A58 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     ExReleaseFastResourceExclusive @ 0x1404912F0 (ExReleaseFastResourceExclusive.c)
 */

void __fastcall PspUnlockJobExclusiveUnlessRoot(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1 != *(_QWORD *)(a1 + 1312) )
    ExReleaseFastResourceExclusive(a1 + 56, 0LL, a3, a4);
}
