/*
 * XREFs of HvlpDepositPages @ 0x1405107E8
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     HvlpHandleInsufficientMemory @ 0x140533814 (HvlpHandleInsufficientMemory.c)
 *     HvlpStartLogicalProcessor @ 0x1405BDB6C (HvlpStartLogicalProcessor.c)
 *     HvlpAddRemovePhysicalMemory @ 0x1407231E0 (HvlpAddRemovePhysicalMemory.c)
 *     HvlpCreateRootVirtualProcessor @ 0x140794608 (HvlpCreateRootVirtualProcessor.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HvlpDepositPages(unsigned __int16 a1, __int64 a2, char a3, char a4)
{
  unsigned int v4; // esi
  char v5; // r12
  char v6; // r14
  __int64 v7; // rbx
  unsigned int v8; // edi
  unsigned __int16 v9; // ax
  unsigned int v10; // ecx
  __int64 PartitionNodePagesForMdl; // rax
  char *v12; // r15
  unsigned int v14; // r14d
  _QWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r12d
  __int64 v20; // rdx
  int v21; // ebp
  void *v22; // r13
  unsigned int v23; // eax
  unsigned int v24; // ebp
  __int64 v25; // [rsp+40h] [rbp-78h]
  __int128 v26; // [rsp+48h] [rbp-70h] BYREF
  __int64 v27; // [rsp+58h] [rbp-60h]
  unsigned __int64 v28; // [rsp+60h] [rbp-58h]
  unsigned __int16 i; // [rsp+C0h] [rbp+8h]

  v4 = 128;
  v27 = 0LL;
  LODWORD(v28) = 0;
  v5 = a4;
  v6 = a3;
  v7 = 0x200000LL;
  v26 = 0LL;
  v8 = 113;
  v9 = *(_WORD *)(KeNodeBlock[a1] + 2);
  for ( i = v9; ; v9 = i )
  {
    v10 = (v8 & 0x20) != 0 ? (v4 + 511) & 0xFFFFFE00 : v4;
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(0, -1, v7, v10 << 12, 1u, v9, v8, 0LL);
    v12 = (char *)PartitionNodePagesForMdl;
    if ( PartitionNodePagesForMdl )
      break;
    if ( (v8 & 0x20) == 0 )
      return 3221225495LL;
    if ( v6 )
    {
      if ( (v8 & 0x40) == 0 )
        return 3221225495LL;
LABEL_21:
      v8 &= ~0x40u;
      continue;
    }
LABEL_20:
    if ( (v8 & 0x40) != 0 )
      goto LABEL_21;
    v8 = v8 & 0xFFFFFFDB | 4;
    v7 = 0LL;
  }
  v14 = (*(_DWORD *)(PartitionNodePagesForMdl + 40) >> 12) + ((*(_DWORD *)(PartitionNodePagesForMdl + 40) & 0xFFF) != 0);
  if ( v4 < v14 )
    v4 = 0;
  else
    v4 -= v14;
  v15 = HvlpAcquireHypercallPage((__int64)&v26, 1, 0LL, 8LL);
  *v15 = HvlPartitionId;
  v18 = v5 != 0 ? 0xB7 : 0;
  v19 = 0;
  v20 = v18 + 72;
  LODWORD(v25) = v20;
  if ( v14 )
  {
    v21 = HIDWORD(v20);
    v22 = v15 + 1;
    v23 = 511;
    do
    {
      if ( v14 - v19 < 0x1FF )
      {
        v23 = v21 & 0xFFFFF000;
        v24 = ((_WORD)v14 - (_WORD)v19) & 0xFFF;
      }
      else
      {
        v24 = v21 & 0xFFFFF1FF;
      }
      v21 = v23 | v24;
      HIDWORD(v25) = v21;
      memmove(v22, &v12[8 * v19 + 48], 8LL * (v21 & 0xFFF));
      HvcallInitiateHypercall(v25, v28);
      v23 = 511;
      v19 += 511;
    }
    while ( v19 < v14 );
  }
  HvlpReleaseHypercallPage((unsigned int *)&v26, v20, v16, v17);
  ExFreePoolWithTag(v12, 0);
  v6 = a3;
  v5 = a4;
  if ( v4 )
    goto LABEL_20;
  return 0LL;
}
