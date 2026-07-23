/*
 * XREFs of MiMeasureDemandCoalesceTimeBounds @ 0x140D04F24
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140207CD0 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 MiMeasureDemandCoalesceTimeBounds()
{
  __int64 v0; // rbx
  unsigned int v1; // ebp
  ULONG_PTR PartitionNodePagesForMdl; // rax
  void *v3; // r14
  __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned __int8 CurrentIrql; // r14
  unsigned int i; // r15d
  ULONG64 v8; // r13
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned int *v11; // r10
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  _DWORD v15[18]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 QpcTimeStamp; // [rsp+90h] [rbp+8h] BYREF
  ULONG64 v17; // [rsp+98h] [rbp+10h]
  unsigned __int64 v18; // [rsp+A0h] [rbp+18h] BYREF

  v15[1] = 40;
  v0 = 0LL;
  v15[0] = 2;
  v1 = 0;
  v15[2] = 100;
  while ( v1 < (unsigned __int16)KeNumberNodes )
  {
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(0, -1, 0x10000LL, 0x10000uLL, 1u, v1, 0x67u, 0LL);
    v3 = (void *)PartitionNodePagesForMdl;
    if ( PartitionNodePagesForMdl )
    {
      MiFreePagesFromMdl(PartitionNodePagesForMdl, 0, 0, 0);
      ExFreePoolWithTag(v3, 0);
      break;
    }
    ++v1;
  }
  result = (unsigned __int16)KeNumberNodes;
  if ( v1 != (unsigned __int16)KeNumberNodes )
  {
    v5 = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    for ( i = 0; i < 0xA; ++i )
    {
      v17 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
      QpcTimeStamp = MmAllocatePartitionNodePagesForMdlEx(0, -1, 0x10000LL, 0x10000uLL, 1u, v1, 0x67u, 0LL);
      v8 = KeQueryUnbiasedInterruptTimePrecise(&v18);
      if ( !QpcTimeStamp )
        break;
      MiFreePagesFromMdl(QpcTimeStamp, 0, 0, 0);
      ExFreePoolWithTag((PVOID)QpcTimeStamp, 0);
      v5 += v8 - v17;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( i == 10 )
    {
      v9 = 3LL;
      v10 = v5 / 0xA;
      if ( v5 / 0xA > 3 )
      {
        if ( v10 >= 0x64 )
          v10 = 100LL;
      }
      else
      {
        v10 = 3LL;
      }
      v11 = v15;
      do
      {
        v12 = *v11++;
        v13 = MiPageSizes[v0++];
        v14 = v10 * v12 * (v13 >> 4);
        result = 0x47AE147AE147AE15LL * v14;
        *(_QWORD *)&aCmfc[v0 * 8 + 4] = v14 / 0x64;
        --v9;
      }
      while ( v9 );
    }
  }
  return result;
}
