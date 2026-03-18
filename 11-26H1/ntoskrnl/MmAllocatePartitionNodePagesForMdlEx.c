/*
 * XREFs of MmAllocatePartitionNodePagesForMdlEx @ 0x140348260
 * Callers:
 *     MmAllocateNodePagesForMdlEx @ 0x1403481C0 (MmAllocateNodePagesForMdlEx.c)
 *     MmAllocatePagesForMdlEx @ 0x140348200 (MmAllocatePagesForMdlEx.c)
 *     HalpAllocateCommonBufferDmaThin @ 0x140348C34 (HalpAllocateCommonBufferDmaThin.c)
 *     EtwpAllocatePartitionMemory @ 0x1404BD074 (EtwpAllocatePartitionMemory.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x1404D18A4 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpAllocateCommonBufferDmarThin @ 0x1404F1E84 (HalpAllocateCommonBufferDmarThin.c)
 *     HvlpDepositPages @ 0x140516D78 (HvlpDepositPages.c)
 *     HalpAllocateDomainCommonBufferInternal @ 0x140589FC0 (HalpAllocateDomainCommonBufferInternal.c)
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x1405CD8A4 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 *     DifMmAllocateNodePagesForMdlExWrapper @ 0x140665DA0 (DifMmAllocateNodePagesForMdlExWrapper.c)
 *     KiComputeNumaCosts @ 0x140CC93EC (KiComputeNumaCosts.c)
 *     MiMeasureDemandCoalesceTimeBounds @ 0x140CFEB84 (MiMeasureDemandCoalesceTimeBounds.c)
 * Callees:
 *     MiTranslateCacheType @ 0x140348400 (MiTranslateCacheType.c)
 *     MiPartitionObjectToPartition @ 0x1403486D4 (MiPartitionObjectToPartition.c)
 *     MiAllocatePagesForMdl @ 0x14034898C (MiAllocatePagesForMdl.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 */

__int64 __fastcall MmAllocatePartitionNodePagesForMdlEx(
        int a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        ULONG_PTR BugCheckParameter2)
{
  unsigned int v12; // ebp
  __int64 v13; // r8
  int v14; // r13d
  __int64 v15; // rax

  if ( a6 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  v12 = a7;
  v14 = MiTranslateCacheType(a5);
  if ( (a7 & 0xFFFFF000) != 0 )
    return 0LL;
  if ( (a7 & 0x800) != 0 )
  {
    if ( (a7 & 0x726) != 0 || KeGetCurrentIrql() || (a7 & 1) == 0 )
      return 0LL;
    v12 = a7 & 0xFFFFFFA7 | 8;
  }
  if ( (v12 & 0x60) == 0x20 )
  {
    v12 |= 0x10u;
    if ( a3 )
    {
      if ( ((v13 - 1) & a3) != 0 || a3 < 4096 || a4 % (unsigned int)a3 )
        return 0LL;
    }
    else
    {
      v12 |= 4u;
    }
  }
  if ( (v12 & 0x100) == 0 || (v12 & 4) == 0 && !KeGetCurrentIrql() )
  {
    v15 = MiPartitionObjectToPartition(BugCheckParameter2);
    if ( v15 )
      return MiAllocatePagesForMdl(
               v15,
               a1,
               a2,
               a3,
               a4,
               v14,
               a6,
               v12,
               (__int64)KeGetCurrentThread()->ApcState.Process,
               0LL);
  }
  return 0LL;
}
