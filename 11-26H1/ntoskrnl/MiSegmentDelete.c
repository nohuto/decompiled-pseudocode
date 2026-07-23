/*
 * XREFs of MiSegmentDelete @ 0x140A8752C
 * Callers:
 *     MiCheckControlArea @ 0x14036FA60 (MiCheckControlArea.c)
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 *     MiDestroySection @ 0x1404E0004 (MiDestroySection.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14021EF64 (IoDiskIoAttributionDereference.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiDeleteSegmentPages @ 0x1404727CC (MiDeleteSegmentPages.c)
 *     MiReleaseControlAreaCharges @ 0x14047A210 (MiReleaseControlAreaCharges.c)
 *     MiPrepareSegmentForDeletion @ 0x140480F20 (MiPrepareSegmentForDeletion.c)
 *     MiDereferenceControlAreaProbe @ 0x140481CEC (MiDereferenceControlAreaProbe.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404D8C9C (DbgUnLoadImageSymbolsUnicode.c)
 *     MiLogSectionCreate @ 0x14086ED1C (MiLogSectionCreate.c)
 *     MiDeletePageFileSectionNodes @ 0x140A876DC (MiDeletePageFileSectionNodes.c)
 */

void __fastcall MiSegmentDelete(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // r13
  BOOL v4; // r12d
  int v5; // edi
  __int64 v6; // rdx
  __int64 *v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  volatile signed __int64 *v12; // rdi
  int v13; // ecx
  unsigned int v14; // ebp
  unsigned __int64 v15; // rbx
  __int64 ControlAreaPartition; // rax

  v1 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 64) != 0LL;
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v7 = MiPrepareSegmentForDeletion(a1);
  if ( (v1 & 0x80) != 0 )
  {
    if ( (v5 & 0x800) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v3 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v7, v6, v8);
  }
  else if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x400001) != 0 )
  {
    MiLogSectionCreate((__int64 *)a1, 0);
  }
  MiDeleteSegmentPages((_QWORD *)a1);
  v10 = MiReleaseControlAreaCharges(a1, 0LL, v9);
  if ( (v1 & 0x80) != 0 )
  {
    v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 64), 0LL);
    v12 = (volatile signed __int64 *)(v11 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v13 = v11 & 0xF;
      if ( v13 )
        _InterlockedAdd64(v12 - 6, -v13);
    }
    v14 = v1 >> 5;
    if ( (v1 & 0x20) != 0 )
    {
      MiUpdateSystemProtoPtesTree((_QWORD *)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL), 0);
      MiGetControlAreaPartition(a1);
      MiFreeProtoPool(*(PVOID *)(v3 + 64), 8LL * *(unsigned int *)(v3 + 8));
    }
  }
  else
  {
    v14 = v1 >> 5;
    MiDeletePageFileSectionNodes(a1);
    v12 = 0LL;
  }
  if ( v10 )
  {
    ControlAreaPartition = MiGetControlAreaPartition(a1);
    MiReturnCrossPartitionSectionCharges(ControlAreaPartition, v4, v10);
  }
  if ( (v14 & 1) == 0 && (v1 & 0x80u) != 0 )
    v15 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8uLL;
  else
    v15 = 0LL;
  MiDereferenceControlAreaProbe((volatile signed __int64 *)a1, 0);
  if ( v12 )
    ObfDereferenceObjectWithTag((PVOID)v12, 0x43536D4Du);
  if ( v15 )
    IoDiskIoAttributionDereference(v15);
}
