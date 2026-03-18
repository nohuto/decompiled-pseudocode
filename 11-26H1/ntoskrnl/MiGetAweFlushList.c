/*
 * XREFs of MiGetAweFlushList @ 0x140701B08
 * Callers:
 *     MiWriteAwePtes @ 0x140477F10 (MiWriteAwePtes.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140702FEC (MiZeroAndFlushAweLazyPtes.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiGetAweFlushList(__int64 a1, int a2)
{
  __int64 *ProcessorFlushList; // rax
  __int64 v5; // rcx

  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((__int64)ProcessorFlushList, *(_QWORD *)(a1 + 40), *((_DWORD *)ProcessorFlushList + 3), 0, a2);
  return v5;
}
