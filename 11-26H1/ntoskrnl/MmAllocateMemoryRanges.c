/*
 * XREFs of MmAllocateMemoryRanges @ 0x14086E160
 * Callers:
 *     IopLiveDumpAllocateIoSpaceRanges @ 0x1405D02E4 (IopLiveDumpAllocateIoSpaceRanges.c)
 *     MiAllocateUserPhysicalRanges @ 0x14087E9B0 (MiAllocateUserPhysicalRanges.c)
 * Callees:
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiGetNextPageColor @ 0x140442ED0 (MiGetNextPageColor.c)
 *     MmGetNextNode @ 0x140456D80 (MmGetNextNode.c)
 *     MiGetHugeRange @ 0x1406F0520 (MiGetHugeRange.c)
 *     MiReleaseMemoryRuns @ 0x1406F2148 (MiReleaseMemoryRuns.c)
 *     MiAddRun @ 0x14086DD00 (MiAddRun.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMemoryRanges(__int64 a1)
{
  unsigned __int64 v1; // r13
  bool v2; // zf
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // r12d
  unsigned int v7; // ebx
  bool v8; // cf
  ULONG **v9; // rcx
  ULONG *v10; // rax
  __int64 v11; // rdi
  int v12; // r15d
  unsigned int NextPageColor; // eax
  int HugeRange; // eax
  __int64 v15; // rdi
  unsigned int NextNode; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v20; // [rsp+20h] [rbp-59h]
  _QWORD v21[2]; // [rsp+28h] [rbp-51h] BYREF
  __int64 v22; // [rsp+38h] [rbp-41h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-39h]
  __int64 v24; // [rsp+50h] [rbp-29h]
  __int64 v25; // [rsp+58h] [rbp-21h]
  __int64 v26[14]; // [rsp+60h] [rbp-19h] BYREF
  char v27; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v28; // [rsp+E8h] [rbp+6Fh] BYREF
  int v29; // [rsp+F0h] [rbp+77h] BYREF

  v1 = 0LL;
  v2 = *(_DWORD *)a1 == 1;
  v21[1] = 0LL;
  v27 = 0;
  v22 = 0LL;
  *(_OWORD *)P = 0LL;
  v25 = 0LL;
  if ( !v2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 >= 8 || !*(_QWORD *)(a1 + 16) )
    return 3221225485LL;
  v5 = *(_DWORD *)(a1 + 32);
  v6 = (unsigned __int16)KeNumberNodes;
  if ( v5 >= 0 )
    v6 = 1;
  v7 = v5 & 0x7FFFFFFF;
  if ( v5 >= 0 )
    v7 = *(_DWORD *)(a1 + 32);
  if ( v7 >= (unsigned __int16)KeNumberNodes )
    return 3221225485LL;
  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (v4 & 1) == 0 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 24) != 0x40000000LL )
    return 3221225485LL;
  v8 = (v4 & 2) != 0;
  v9 = *(ULONG ***)(a1 + 8);
  LODWORD(v28) = v8 ? 4144 : 4096;
  v10 = MiPartitionObjectToPartition(v9, 0, &v27);
  v20 = (__int64)v10;
  if ( !v10 )
    return 3221225485LL;
  v11 = *((_QWORD *)v10 + 2);
  MiInitializePageColorBase(0LL, 0, v7 + 1, (__int64)v21);
  v24 = a1;
  v29 = 0;
  v21[0] = 56320LL * v7 + v11 + 14128;
  v12 = 0;
  while ( v1 < *(_QWORD *)(a1 + 16) )
  {
    NextPageColor = MiGetNextPageColor((__int64)v21);
    HugeRange = MiGetHugeRange(v20, NextPageColor, v28);
    v15 = HugeRange & 0x3FFFFF;
    if ( (HugeRange & 0x3FFFFF) != 0 )
    {
      v12 = MiAddRun(&v22, HugeRange);
      if ( v12 < 0 )
      {
        v28 = v15 << 30;
        v26[2] = (__int64)&v28;
        v26[1] = 0LL;
        v26[4] = 0LL;
        v26[0] = 1LL;
        v26[3] = a1;
        MiReleaseMemoryRuns(v26, 0);
LABEL_23:
        if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
        {
          if ( v22 )
            v12 = 0;
        }
        else
        {
          MiReleaseMemoryRuns(&v22, 0);
        }
        break;
      }
    }
    else
    {
      if ( !--v6 )
      {
        v12 = -1073741670;
        goto LABEL_23;
      }
      NextNode = MmGetNextNode(v7, &v29);
      v17 = 56320LL * NextNode;
      v18 = *(_QWORD *)(v20 + 16);
      MiInitializePageColorBase(0LL, 0, NextNode + 1, (__int64)v21);
      v21[0] = v17 + v18 + 14128;
      --v1;
    }
    ++v1;
  }
  if ( v27 )
    PsDereferencePartition(*(_QWORD *)(v20 + 256));
  if ( v12 >= 0 )
  {
    *(PVOID *)(a1 + 48) = P[1];
    *(_QWORD *)(a1 + 40) = v22;
    return 0LL;
  }
  else
  {
    if ( P[1] )
      ExFreePoolWithTag(P[1], 0);
    return 3221225626LL;
  }
}
