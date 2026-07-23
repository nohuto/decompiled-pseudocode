/*
 * XREFs of PsReferencePartitionByHandle @ 0x140A5D28C
 * Callers:
 *     EtwpSetPartitionContext @ 0x1406CB4EC (EtwpSetPartitionContext.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14077A8A8 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1407FF1B4 (PspSetJobMemoryPartition.c)
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 *     PsCreatePartition @ 0x14080347C (PsCreatePartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x14081F438 (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x14081F5D4 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x14081F7D0 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x14081FBB8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x14082014C (SmProcessStatsRequest.c)
 *     MiInitializeCreateSectionPacket @ 0x14098B6D4 (MiInitializeCreateSectionPacket.c)
 *     MmAllocateUserStack @ 0x1409EE7D8 (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1409EEA70 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1409EF150 (NtAllocateVirtualMemory.c)
 *     PfpPartitionFindByHandle @ 0x140A5D140 (PfpPartitionFindByHandle.c)
 *     SmProcessCompressionInfoRequest @ 0x140B286E8 (SmProcessCompressionInfoRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B308E0 (SmProcessSystemStoreTrimRequest.c)
 *     PfSetSuperfetchInformation @ 0x140B60C94 (PfSetSuperfetchInformation.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B68D40 (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, int a2, char a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // r8
  void *v10; // r8
  struct _LIST_ENTRY *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v11 = 0LL;
  if ( a1 == -1LL )
  {
    Blink = KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Blink;
  }
  else if ( a1 == -2LL )
  {
    Blink = (struct _LIST_ENTRY *)PspSystemPartition;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, a2, (__int64)PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    Blink = v11;
  }
  if ( PsReferencePartitionSafe((__int64)Blink) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
