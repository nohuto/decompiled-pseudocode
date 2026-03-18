/*
 * XREFs of MiFreeWsleList @ 0x140328E50
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x14029C1E8 (MiEmptyWorkingSetHelper.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402ECD70 (MiConfirmFaultClusterDescriptor.c)
 *     MiAgePteWorker @ 0x1402FF060 (MiAgePteWorker.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x140306B00 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiTrimPteWorker @ 0x140320BF0 (MiTrimPteWorker.c)
 *     MiTrimPte @ 0x140321400 (MiTrimPte.c)
 *     MiAgeWorkingSetTail @ 0x140328CE0 (MiAgeWorkingSetTail.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiEmptyPte @ 0x14035D660 (MiEmptyPte.c)
 *     MiReleaseTrimViewResources @ 0x140360084 (MiReleaseTrimViewResources.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimWorkingSetTail @ 0x140464090 (MiTrimWorkingSetTail.c)
 *     MiTrimWorkingSetTailHelper @ 0x140464188 (MiTrimWorkingSetTailHelper.c)
 *     MiUpdateOldWorkingSetPagesTail @ 0x140464260 (MiUpdateOldWorkingSetPagesTail.c)
 *     MiAgeTrimListsTail @ 0x140464350 (MiAgeTrimListsTail.c)
 *     MiTrimViewLeafPte @ 0x14046C164 (MiTrimViewLeafPte.c)
 *     MiTrimWorkingSetBuildup @ 0x140493FC0 (MiTrimWorkingSetBuildup.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404AE9B8 (MiSectionProtectTrimValidPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1404B2C40 (MiConvertAndFlushWsleVas.c)
 *     MiProtectPagedPool @ 0x1404B84A4 (MiProtectPagedPool.c)
 *     MiEmptyWorkingSetTail @ 0x1404BB470 (MiEmptyWorkingSetTail.c)
 *     MiDiscardPte @ 0x1406EEED0 (MiDiscardPte.c)
 *     MiDiscardVirtualMemoryTail @ 0x1406EF340 (MiDiscardVirtualMemoryTail.c)
 *     MiTrimPoisonedPage @ 0x1406FFBBC (MiTrimPoisonedPage.c)
 *     MiShareValidPage @ 0x140704A2C (MiShareValidPage.c)
 * Callees:
 *     MiRemoveWsleList @ 0x1402EA570 (MiRemoveWsleList.c)
 *     MiWsleFree @ 0x140319990 (MiWsleFree.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiGetActiveProcessorFlushList @ 0x14047A080 (MiGetActiveProcessorFlushList.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
