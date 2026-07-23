/*
 * XREFs of MiAllocatePerSessionProtos @ 0x140B13A28
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1409A0A14 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiAllocateProtoPool @ 0x1403988A0 (MiAllocateProtoPool.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiReverseSwizzleInvalidPte @ 0x140441B60 (MiReverseSwizzleInvalidPte.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiFreeProtoPool @ 0x140450078 (MiFreeProtoPool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140450590 (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x1404AF348 (MiMakeSubsectionPte.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocatePerSessionProtos(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int64 v4; // rcx
  __int64 v6; // rbp
  ULONG *ControlAreaPartition; // r14
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  _QWORD *v10; // rdi
  __int64 *ProtoPool; // rax
  __int64 *v12; // rbx
  __int64 SubsectionPte; // r9
  unsigned int v14; // r8d
  unsigned __int64 *i; // r10
  unsigned __int64 v16; // rcx
  __int16 v17; // ax
  __int64 v18; // rcx
  unsigned int v19; // ebx
  void *v21; // rcx

  v2 = *(unsigned int *)(a1 + 44);
  v4 = *(_QWORD *)a1;
  v6 = 8 * v2;
  *a2 = 0LL;
  ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(v4);
  if ( (unsigned int)MiChargeCommit(ControlAreaPartition, *(unsigned int *)(a1 + 44), 0) )
  {
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(64LL, 0x58uLL, 1934847309, CurrentProcessorColor | 0x80000000);
    v10 = (_QWORD *)PoolMm;
    if ( PoolMm )
    {
      *(_DWORD *)(PoolMm + 80) = 1;
      ProtoPool = (__int64 *)MiAllocateProtoPool(274LL, v6, 1951624525LL);
      v12 = ProtoPool;
      if ( ProtoPool )
      {
        v10[9] = ProtoPool;
        memset_0(ProtoPool, 0, v6);
        SubsectionPte = MiMakeSubsectionPte(a1);
        v14 = 0;
        v10[6] = v10[6] & 0xFFFFFFFFFFFFFFF8uLL | 3;
        for ( i = *(unsigned __int64 **)(a1 + 8); v14 < *(_DWORD *)(a1 + 44); ++v14 )
        {
          v16 = *i;
          if ( !*i )
            break;
          if ( (v16 & 1) != 0
            || (v17 = MiReverseSwizzleInvalidPte(v16), (v17 & 0x400) != 0)
            || (v17 & 0x800) != 0
            || (v17 & 8) != 0 )
          {
            *v12 = SubsectionPte;
          }
          else
          {
            *v12 = v18;
          }
          ++v12;
          ++i;
        }
        v10[7] = v14;
        MiUpdateSystemProtoPtesTree(v10 + 3, 1);
        v19 = 0;
        *a2 = v10;
        return v19;
      }
      v21 = (void *)v10[9];
      v19 = -1073741670;
      if ( v21 )
        MiFreeProtoPool(v21, v6);
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      v19 = -1073741670;
    }
    MiReturnCommit((__int64)ControlAreaPartition, *(unsigned int *)(a1 + 44), 0);
    return v19;
  }
  return 3221225773LL;
}
