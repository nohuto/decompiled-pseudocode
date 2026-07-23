/*
 * XREFs of MiPartitionTransferAllocateSmallPages @ 0x140882FB4
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140B632C4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     MiAddMdlToPartitionTree @ 0x14070CDE4 (MiAddMdlToPartitionTree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPartitionTransferAllocateSmallPages(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rbx
  int v3; // r15d
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rcx
  unsigned int *PagesForMdl; // rax
  unsigned int *v13; // rbp

  v1 = *(_DWORD *)(a1 + 28);
  v2 = 0LL;
  v3 = (v1 & 4) << 30;
  v5 = *(_DWORD *)(a1 + 32) & 1 | (2 * ((v1 & 1) == 0) + 0x400000) | 0x10;
  if ( (v1 & 0x10) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 32) & 1 | (2 * ((*(_DWORD *)(a1 + 28) & 1) == 0) + 0x400000) | 0x50;
    v6 = 0x40000LL;
    v2 = (v1 & 0x400) != 0 ? 0x40000000LL : 0x200000LL;
    goto LABEL_9;
  }
  if ( (v1 & 0x40) != 0 )
  {
    if ( (v1 & 0x400) == 0 )
    {
      v5 = *(_DWORD *)(a1 + 32) & 1 | (2 * ((*(_DWORD *)(a1 + 28) & 1) == 0) + 0x400000) | 0x50;
      v6 = 512LL;
      v2 = 0x200000LL;
      goto LABEL_9;
    }
    return 3221225626LL;
  }
  else
  {
    if ( (v1 & 0x500) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 32) & 1 | (2 * ((*(_DWORD *)(a1 + 28) & 1) == 0) + 0x400000) | 0x50;
      v6 = 0x40000LL;
      v2 = 0x40000000LL;
    }
    else
    {
      v6 = 0xFFFFFLL;
    }
LABEL_9:
    while ( 1 )
    {
      v7 = *(_QWORD *)(a1 + 16);
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 == v7 )
        break;
      v9 = v7 - v8;
      CurrentThread = KeGetCurrentThread();
      v11 = v6;
      if ( v9 <= v6 )
        v11 = v9;
      PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                      *(_QWORD *)a1,
                                      v3,
                                      -1,
                                      v2,
                                      v11 << 12,
                                      1,
                                      *(_DWORD *)(a1 + 24),
                                      v5,
                                      (__int64)CurrentThread->ApcState.Process,
                                      0LL);
      v13 = PagesForMdl;
      if ( PagesForMdl )
      {
        if ( !(unsigned int)MiAddMdlToPartitionTree(a1 + 40, (__int64)PagesForMdl, v5) )
        {
          MiFreePagesFromMdl((ULONG_PTR)v13, 0, 3u, 0);
          ExFreePoolWithTag(v13, 0);
          return 3221225626LL;
        }
        *(_QWORD *)(a1 + 64) += (unsigned __int64)v13[10] >> 12;
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        if ( (v5 & 0x40) == 0 )
          return 3221225626LL;
        v5 = v5 & 0xFFFFFF9F | 0x20;
      }
    }
    return 0LL;
  }
}
