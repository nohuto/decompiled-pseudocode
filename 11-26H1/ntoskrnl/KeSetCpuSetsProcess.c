/*
 * XREFs of KeSetCpuSetsProcess @ 0x14052FE54
 * Callers:
 *     KiAdjustProcessCpuSetsAfterCpuPartitionChange @ 0x1405F69E4 (KiAdjustProcessCpuSetsAfterCpuPartitionChange.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiValidateCpuSetMasks @ 0x14045BE5C (KiValidateCpuSetMasks.c)
 *     KiGetProcessCpuSetMaskPointer @ 0x1404F39F0 (KiGetProcessCpuSetMaskPointer.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1405282EC (KiUpdateThreadCpuSetAffinitiesProcess.c)
 *     KiWriteCpuSetMasks @ 0x14052FA08 (KiWriteCpuSetMasks.c)
 */

__int64 __fastcall KeSetCpuSetsProcess(__int64 a1, unsigned int a2, __int64 a3, char a4, char a5)
{
  __int64 result; // rax
  unsigned __int64 *ProcessCpuSetMaskPointer; // rax
  unsigned __int64 *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14[4]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+24h] [rbp-14h] BYREF
  struct _SINGLE_LIST_ENTRY v16[2]; // [rsp+28h] [rbp-10h] BYREF

  v15 = 0;
  v14[0] = 0;
  v16[0].Next = 0LL;
  result = KiValidateCpuSetMasks(a3, a2);
  if ( (int)result >= 0 )
  {
    KiAcquireProcessLockExclusive(a1, v14);
    if ( a4 )
    {
      ProcessCpuSetMaskPointer = (unsigned __int64 *)KiGetProcessCpuSetMaskPointer(a1, 1, &v15);
      KiWriteCpuSetMasks(ProcessCpuSetMaskPointer, v15, a3, a2);
    }
    if ( a5 )
    {
      v11 = (unsigned __int64 *)KiGetProcessCpuSetMaskPointer(a1, 0, &v15);
      KiWriteCpuSetMasks(v11, v15, a3, a2);
    }
    KiUpdateThreadCpuSetAffinitiesProcess(a1, v16);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    LOBYTE(v12) = v14[0];
    KiProcessDeferredReadyList(KeGetCurrentPrcb(), v16, v12, v13);
    return 0LL;
  }
  return result;
}
