/*
 * XREFs of MiGetInPageSupportBlock @ 0x140398D70
 * Callers:
 *     MiMigratePfn @ 0x1402D8A10 (MiMigratePfn.c)
 *     MiAllocateInPageSupport @ 0x1403732B0 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x140374A10 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiCreateRotateView @ 0x1409A097C (MiCreateRotateView.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 *     MiPfAllocateMdls @ 0x140A5B9E0 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x140B3EB1C (MiGetReadyInPageBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     MiInitializeInPageSupport @ 0x140398FF0 (MiInitializeInPageSupport.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

PSLIST_ENTRY __fastcall MiGetInPageSupportBlock(char a1, volatile signed __int64 *a2)
{
  int v3; // esi
  __int64 v5; // rbx
  BOOL v6; // r15d
  PSLIST_ENTRY v7; // rdi
  int v8; // ebx
  struct _KLOCK_ENTRIES *v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // edx
  unsigned int v12; // edx
  unsigned __int64 v13; // rax
  char v14; // al
  unsigned __int64 v15; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r9
  struct _KTHREAD *PoolMm; // rax
  struct _KTHREAD *v21; // rbx

  v3 = a1 & 1;
  v5 = 16LL * !(a1 & 1);
  v6 = !(a1 & 1);
  v7 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)&MiState + v5 + 39392));
  if ( v7 || (v7 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)&MiState + v5 + 39424))) != 0LL )
  {
    *v7 = 0LL;
    BYTE3(v7[2].Next) = 0;
    v8 = 0;
    *((_BYTE *)&v7[3].Next + 11) = 0;
    memset_0(&v7[5], 0, 0x60uLL);
    memset_0((char *)&v7[11].Next + 4, 0, 0x8CuLL);
    LOWORD(v7[2].Next) = 0;
    HIDWORD(v7[2].Next) = 0;
    BYTE2(v7[2].Next) = 6;
    v7[3].Next = (PSLIST_ENTRY)((char *)v7 + 40);
    *((_QWORD *)&v7[2].Next + 1) = (char *)v7 + 40;
    *((_WORD *)&v7[3].Next + 4) = 0;
    *((_DWORD *)&v7[3].Next + 3) = 0;
    if ( v3 )
      v8 = 256;
    *((_BYTE *)&v7[3].Next + 10) = 6;
    *((_QWORD *)&v7[4].Next + 1) = v7 + 4;
    v7[4].Next = v7 + 4;
    LODWORD(v7[11].Next) = 1;
    *((_QWORD *)&v7[1].Next + 1) = v7 + 1;
    v7[1].Next = v7 + 1;
    CurrentThread = KeGetCurrentThread();
    *((_QWORD *)&v7[9].Next + 1) = CurrentThread;
    Queue = (unsigned int)CurrentThread[1].Queue;
    if ( (Queue & 0x100) != 0 )
    {
      v12 = (Queue >> 9) & 7;
    }
    else
    {
      v12 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      v13 = CurrentThread->Process[1].Padding[3];
      if ( v13 )
      {
        v17 = *(_DWORD *)(v13 + 1092);
        if ( v12 >= v17 )
          v12 = v17;
      }
    }
    if ( v12 > 5 )
    {
      LOBYTE(v12) = 5;
    }
    else
    {
      v8 |= 0x100000u;
      if ( v12 )
      {
        v14 = v12 - 1;
LABEL_10:
        *((_DWORD *)&v7[11].Next + 3) = v8 | ((v12 & 7 | (8 * (v14 & 7))) << 11);
        if ( (a1 & 2) != 0 )
        {
          v15 = KeAbPreAcquire((__int64)v7, 0LL, 0LL, v9);
          if ( v15 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              *(_BYTE *)(v15 + 33) |= 2u;
            else
              *(_BYTE *)(v15 + 10) = 1;
            a2 = (volatile signed __int64 *)v7;
          }
        }
        else if ( a2 && _InterlockedIncrement64(a2) <= 1 )
        {
          __fastfail(0xEu);
        }
        v7[14].Next = (_SLIST_ENTRY *)a2;
        return v7;
      }
    }
    v14 = v12;
    goto LABEL_10;
  }
  if ( (a1 & 4) != 0 )
    return 0LL;
  v18 = 2368LL;
  v19 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v19) = v19 | 0x80000000;
  if ( v6 )
    v18 = 448LL;
  PoolMm = (struct _KTHREAD *)ExAllocatePoolMm(64LL, v18, 1850305869LL, v19);
  v21 = PoolMm;
  if ( PoolMm )
    MiInitializeInPageSupport(PoolMm);
  return (PSLIST_ENTRY)v21;
}
