/*
 * XREFs of MiFreeWsleList @ 0x14032AE80
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x14029B748 (MiEmptyWorkingSetHelper.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiAgePteWorker @ 0x1402E10E0 (MiAgePteWorker.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140322C20 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 *     MiAgeWorkingSetTail @ 0x14032AD10 (MiAgeWorkingSetTail.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiEmptyPte @ 0x14035F400 (MiEmptyPte.c)
 *     MiReleaseTrimViewResources @ 0x140361E24 (MiReleaseTrimViewResources.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimWorkingSetTail @ 0x14045D050 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetTailHelper @ 0x14045D148 (MiTrimWorkingSetTailHelper.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x14045D220 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeTrimListsTail @ 0x14045D310 (MiAgeTrimListsTail.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiTrimWorkingSetBuildup @ 0x14048DB10 (MiTrimWorkingSetBuildup.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404A8048 (MiSectionProtectTrimValidPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MiProtectPagedPool @ 0x1404B1CD4 (MiProtectPagedPool.c)
 *     MiEmptyWorkingSetTail @ 0x1404B4C50 (MiEmptyWorkingSetTail.c)
 *     MiDiscardPte @ 0x1406F3B70 (MiDiscardPte.c)
 *     MiDiscardVirtualMemoryTail @ 0x1406F3FE0 (MiDiscardVirtualMemoryTail.c)
 *     MiTrimPoisonedPage @ 0x14070488C (MiTrimPoisonedPage.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 * Callees:
 *     MiRemoveWsleList @ 0x1402CC5B0 (MiRemoveWsleList.c)
 *     MiWsleFree @ 0x14031B9C0 (MiWsleFree.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiGetActiveProcessorFlushList @ 0x1404739F0 (MiGetActiveProcessorFlushList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiFreeWsleList(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // r15d
  __int64 v9; // r12
  __int64 ActiveProcessorFlushList; // rbp
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  _DWORD *v15; // rbx
  __int64 v17; // [rsp+60h] [rbp+8h]

  v4 = (_QWORD *)(a3 + 40);
  v5 = *(unsigned int *)(a3 + 28);
  v6 = a4;
  v17 = v5;
  v9 = ((*(_QWORD *)(a3 + 40) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 0
    && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[16] )
  {
    v6 = a4 | 2;
  }
  ActiveProcessorFlushList = MiGetActiveProcessorFlushList();
  if ( a3 != ActiveProcessorFlushList + 4136 )
    KeBugCheckEx(0x1Au, 0x442uLL, ActiveProcessorFlushList, a3, ActiveProcessorFlushList + 4136);
  v11 = 0LL;
  if ( v5 )
  {
    do
    {
      if ( (unsigned int)MiWsleFlush(a1, *v4 & 0xFFFFFFFFFFFFF000uLL, v6, ActiveProcessorFlushList) )
      {
        *(_QWORD *)(a3 + 8 * v11 + 40) = *v4;
        v11 = (unsigned int)(v11 + 1);
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    v5 = v17;
  }
  v12 = v5 - *(unsigned int *)(ActiveProcessorFlushList + 16488);
  if ( (_DWORD)v11 )
  {
    *(_QWORD *)(a3 + 32) = (unsigned int)v11;
    *(_DWORD *)(a3 + 28) = v11;
    MiFlushTbList(a3);
  }
  else
  {
    *(_DWORD *)(a3 + 16) &= 0xFFFFFFDB;
    *(_WORD *)(a3 + 25) = 0;
    *(_DWORD *)(a3 + 28) = 0;
    *(_QWORD *)(a3 + 32) = 0LL;
  }
  LODWORD(v13) = *(_DWORD *)(ActiveProcessorFlushList + 16488);
  v14 = 0LL;
  if ( (_DWORD)v13 )
  {
    v15 = (_DWORD *)(ActiveProcessorFlushList + 16496);
    do
    {
      *v15 = MiWsleFree(a1, *(_QWORD *)v15 & 0xFFFFFFFFFFFFF000uLL, v6, *((_QWORD *)v15 - 514));
      v15 += 2;
      v13 = *(unsigned int *)(ActiveProcessorFlushList + 16488);
      ++v14;
    }
    while ( v14 < v13 );
  }
  if ( (_DWORD)v13 )
  {
    *(_QWORD *)(ActiveProcessorFlushList + 16480) = v9 << 25 >> 16 << 25 >> 16;
    MiRemoveWsleList(a1, ActiveProcessorFlushList);
  }
  *(_DWORD *)(ActiveProcessorFlushList + 12376) = 0;
  *(_DWORD *)(ActiveProcessorFlushList + 16488) = 0;
  return v12;
}
