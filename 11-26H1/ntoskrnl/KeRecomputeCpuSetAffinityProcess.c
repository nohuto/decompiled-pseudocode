/*
 * XREFs of KeRecomputeCpuSetAffinityProcess @ 0x140525C20
 * Callers:
 *     PspAssignCpuPartitionsToProcess @ 0x1407F28E8 (PspAssignCpuPartitionsToProcess.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x140203690 (KiAcquireProcessLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037C920 (KiProcessDeferredReadyList.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x140525C7C (KiUpdateThreadCpuSetAffinitiesProcess.c)
 */

__int64 __fastcall KeRecomputeCpuSetAffinityProcess(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF
  struct _SINGLE_LIST_ENTRY v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  v6.Next = 0LL;
  KiAcquireProcessLockExclusive(a1, &v5);
  KiUpdateThreadCpuSetAffinitiesProcess(a1, &v6);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  LOBYTE(v2) = v5;
  return KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v6, v2, v3);
}
