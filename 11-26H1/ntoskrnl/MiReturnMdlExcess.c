/*
 * XREFs of MiReturnMdlExcess @ 0x1406F38F4
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiReturnMdlCharges @ 0x1404FB278 (MiReturnMdlCharges.c)
 *     MiInitializeMdlBatchPages @ 0x14050888C (MiInitializeMdlBatchPages.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnMdlExcess(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  int v5; // ecx
  int v6; // ebp
  int v7; // eax
  __int64 PoolMm; // rax
  __int64 v9; // rdi

  v1 = *(unsigned int **)(a1 + 64);
  v3 = *(_QWORD *)(a1 + 48) * ((unsigned __int64)v1[10] >> 12);
  v4 = *(_QWORD *)(a1 + 32) - v3;
  v5 = (*(_DWORD *)(a1 + 148) >> 3) & 1;
  v6 = v5 | 2;
  if ( (*(_BYTE *)(a1 + 148) & 0x10) == 0 )
    v6 = v5;
  if ( (*(_DWORD *)(a1 + 56) & 0xC00) == 0 )
    MiReturnMdlCharges(*(_QWORD *)a1, v4, v6);
  if ( !v3 )
    goto LABEL_10;
  v7 = *(_DWORD *)(a1 + 56);
  if ( (v7 & 4) != 0 )
  {
    if ( (v7 & 0x40) == 0 )
      MiInitializeMdlBatchPages(a1);
    MiFreePagesFromMdl((ULONG_PTR)v1, 0, v6, 0);
LABEL_10:
    if ( (*(_DWORD *)(a1 + 148) & 1) == 0 )
      ExFreePoolWithTag(v1, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
    return;
  }
  if ( (*(_DWORD *)(a1 + 148) & 1) == 0 && *(_QWORD *)(a1 + 48) == 1LL && v4 > 0x800 )
  {
    PoolMm = ExAllocatePoolMm(
               64LL,
               8 * v3 + 48,
               1768189261,
               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    v9 = PoolMm;
    if ( PoolMm )
    {
      *(_QWORD *)PoolMm = 0LL;
      *(_WORD *)(PoolMm + 10) = 0;
      *(_DWORD *)(PoolMm + 40) = (_DWORD)v3 << 12;
      *(_QWORD *)(PoolMm + 32) = 0LL;
      *(_WORD *)(PoolMm + 8) = 8 * (v3 + 6);
      *(_DWORD *)(PoolMm + 44) = 0;
      memmove((void *)(PoolMm + 48), (const void *)(*(_QWORD *)(a1 + 64) + 48LL), 8 * v3);
      *(_WORD *)(v9 + 10) = *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL);
      ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
      *(_QWORD *)(a1 + 64) = v9;
    }
  }
}
