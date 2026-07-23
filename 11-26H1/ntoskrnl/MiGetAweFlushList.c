/*
 * XREFs of MiGetAweFlushList @ 0x1407067D8
 * Callers:
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140707CBC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiGetAweFlushList(__int64 a1, int a2)
{
  __int64 *ProcessorFlushList; // rax
  __int64 v5; // rcx

  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, *(_QWORD *)(a1 + 40), *((_DWORD *)ProcessorFlushList + 3), 0, a2);
  return v5;
}
