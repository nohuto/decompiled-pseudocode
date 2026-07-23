/*
 * XREFs of MiIssuePageHeatList @ 0x1402D58BC
 * Callers:
 *     MiGetLargePagesForChain @ 0x140283FC4 (MiGetLargePagesForChain.c)
 *     MiGetPerfectColorHeadPage @ 0x140288F90 (MiGetPerfectColorHeadPage.c)
 *     MiReplenishPageSlist @ 0x140289C70 (MiReplenishPageSlist.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MmSetPfnListInfo @ 0x1402D4250 (MmSetPfnListInfo.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x1402D5050 (MiUpdatePfnForPrefetchByPte.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiGetLargePageChain @ 0x1403D1D00 (MiGetLargePageChain.c)
 *     MiCoalesceFreeLargePages @ 0x1403D3124 (MiCoalesceFreeLargePages.c)
 *     MiFlushZeroPageHeatBatch @ 0x14048697C (MiFlushZeroPageHeatBatch.c)
 *     MiAddPageToHeatList @ 0x14048AF80 (MiAddPageToHeatList.c)
 *     MiGetLargePage @ 0x1405209D4 (MiGetLargePage.c)
 *     MiCachedPagesMakeHot @ 0x1406FA5F0 (MiCachedPagesMakeHot.c)
 *     MiZeroPageMakeHot @ 0x140713BF0 (MiZeroPageMakeHot.c)
 *     MiMakeRestOfImageHot @ 0x1408816B4 (MiMakeRestOfImageHot.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiLockDynamicMemoryShared @ 0x1404C5110 (MiLockDynamicMemoryShared.c)
 *     MiUnlockDynamicMemoryShared @ 0x1404C9D60 (MiUnlockDynamicMemoryShared.c)
 *     MiNotifyPageHeat @ 0x140531990 (MiNotifyPageHeat.c)
 *     MiTryAcquirePushLockUnordered @ 0x1406F848C (MiTryAcquirePushLockUnordered.c)
 */

void __fastcall MiIssuePageHeatList(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v2; // rdi
  int v3; // ebp
  struct _KTHREAD *CurrentThread; // rbx
  int v5; // esi
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r11
  _QWORD *v11; // r8
  unsigned __int8 v13; // al

  v2 = a1;
  v3 = 0;
  CurrentThread = 0LL;
  if ( (*a1 & 6) == 0 )
  {
    v5 = 0;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (*a1 & 6) == 4 )
  {
    if ( KeGetCurrentIrql() <= 1u )
    {
      --CurrentThread->SpecialApcDisable;
      v3 = 1;
    }
    v13 = MiTryAcquirePushLockUnordered(&stru_140E37F48);
    v5 = v13;
    if ( !v13 )
    {
      v2[1] = 0;
      goto LABEL_17;
    }
  }
  else
  {
    v5 = 1;
    MiLockDynamicMemoryShared(&MiSystemPartition, CurrentThread);
  }
  v6 = qword_140E2D950;
  if ( qword_140E2D950 != *((_QWORD *)v2 + 1) )
  {
    a1 = v2 + 4;
    v7 = (unsigned __int64)&v2[2 * v2[1] + 4];
    while ( (unsigned __int64)a1 < v7 )
    {
      a2 = *(_QWORD *)a1 >> 12;
      v8 = (*(_QWORD *)a1 & 0x3FFLL) + 1;
      v9 = (*(_QWORD *)a1 >> 10) & 3LL;
      if ( ((*(_QWORD *)a1 >> 10) & 3) != 0 )
      {
        do
        {
          v8 <<= 9;
          LODWORD(v9) = v9 - 1;
        }
        while ( (_DWORD)v9 );
      }
      v10 = v8 + a2;
      v11 = (_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL);
      while ( a2 < v10 )
      {
        if ( a2 > qword_140E2D920 || ((*v11 >> 54) & 1) == 0 )
        {
          v2[1] = 0;
          a1 = (_DWORD *)v7;
          break;
        }
        ++a2;
        v11 += 6;
      }
      a1 += 2;
    }
    *((_QWORD *)v2 + 1) = v6;
  }
LABEL_17:
  if ( v2[1] )
    MiNotifyPageHeat(v2);
  if ( v5 )
  {
    if ( (*v2 & 6) == 4 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&stru_140E37F48, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&stru_140E37F48.Header.Lock);
      KeAbPostRelease((unsigned __int64)&stru_140E37F48);
    }
    else
    {
      MiUnlockDynamicMemoryShared(&MiSystemPartition, CurrentThread);
    }
  }
  if ( v3 )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1
      && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery((__int64)a1, a2);
    }
  }
}
