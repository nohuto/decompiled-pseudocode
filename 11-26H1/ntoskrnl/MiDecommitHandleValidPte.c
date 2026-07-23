/*
 * XREFs of MiDecommitHandleValidPte @ 0x14029EDAC
 * Callers:
 *     MiDeleteEmptyPageTableWorker @ 0x14029E7D8 (MiDeleteEmptyPageTableWorker.c)
 *     MiStoreDiscardPoisonedPage @ 0x14070F118 (MiStoreDiscardPoisonedPage.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiDecommitAddToList @ 0x140325550 (MiDecommitAddToList.c)
 *     MiDecommitLargePte @ 0x140340E3C (MiDecommitLargePte.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReturnPagedPoolLockCharge @ 0x14042F7F4 (MiReturnPagedPoolLockCharge.c)
 */

__int64 __fastcall MiDecommitHandleValidPte(__int64 a1, char a2)
{
  __int64 ProcessorFlushList; // rax
  __int64 v5; // rdx

  if ( (*(_DWORD *)(a1 + 112) & 8) != 0 )
    return MiReturnPagedPoolLockCharge();
  if ( !*(_QWORD *)(a1 + 16) )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    v5 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 16) = ProcessorFlushList;
    MiInitializeTbFlushList(ProcessorFlushList, v5, *(_DWORD *)(ProcessorFlushList + 12), 0, 1);
  }
  if ( (a2 >= 0 || (*(_DWORD *)(a1 + 100) & 0x1C0000) == 0)
    && (*(_QWORD *)(a1 + 144) == 1LL || (*(_DWORD *)(a1 + 100) & 0x1C0000) != 0) )
  {
    return MiDecommitAddToList(a1, *(_QWORD *)(a1 + 48));
  }
  else
  {
    return MiDecommitLargePte(a1);
  }
}
