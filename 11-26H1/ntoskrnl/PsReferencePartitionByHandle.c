/*
 * XREFs of PsReferencePartitionByHandle @ 0x140A53F9C
 * Callers:
 *     EtwpSetPartitionContext @ 0x1406C77EC (EtwpSetPartitionContext.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140777A08 (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x1407F96B4 (PspSetJobMemoryPartition.c)
 *     NtManagePartition @ 0x1407FD4C0 (NtManagePartition.c)
 *     PsCreatePartition @ 0x1407FDA4C (PsCreatePartition.c)
 *     SmProcessCompressionAcceleratorRequest @ 0x140819228 (SmProcessCompressionAcceleratorRequest.c)
 *     SmProcessCompressionReadStatsRequest @ 0x1408193C4 (SmProcessCompressionReadStatsRequest.c)
 *     SmProcessConfigRequest @ 0x1408195C0 (SmProcessConfigRequest.c)
 *     SmProcessListRequest @ 0x1408199A8 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x140819F3C (SmProcessStatsRequest.c)
 *     MiInitializeCreateSectionPacket @ 0x1409BA6F4 (MiInitializeCreateSectionPacket.c)
 *     MmAllocateUserStack @ 0x1409F2008 (MmAllocateUserStack.c)
 *     MmAllocateVirtualMemory @ 0x1409F22A0 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x1409F2980 (NtAllocateVirtualMemory.c)
 *     PfpPartitionFindByHandle @ 0x140A53E50 (PfpPartitionFindByHandle.c)
 *     SmProcessCompressionInfoRequest @ 0x140B26488 (SmProcessCompressionInfoRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140B2EB04 (SmProcessSystemStoreTrimRequest.c)
 *     PfSetSuperfetchInformation @ 0x140B5DB14 (PfSetSuperfetchInformation.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140B65CA0 (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140258850 (PsReferencePartitionSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, __int64 a2, char a3, ULONG Tag, _QWORD *a5)
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
    result = ObpReferenceObjectByHandleWithTag(a1, a2, (POBJECT_TYPE *)PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
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
