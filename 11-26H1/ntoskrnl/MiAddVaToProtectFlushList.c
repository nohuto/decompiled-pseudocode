/*
 * XREFs of MiAddVaToProtectFlushList @ 0x140250D04
 * Callers:
 *     MiProtectNonPagedPool @ 0x140250A90 (MiProtectNonPagedPool.c)
 *     MiProtectPagedPool @ 0x1404B1CD4 (MiProtectPagedPool.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiAddVaToProtectFlushList(int a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdi
  __int64 ProcessorFlushList; // rax
  int v7; // r8d

  v5 = a2 << 25 >> 16;
  if ( !*a3 )
  {
    ProcessorFlushList = a3[1];
    if ( !ProcessorFlushList )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      a3[1] = ProcessorFlushList;
    }
    v7 = *(_DWORD *)(ProcessorFlushList + 12);
    *a3 = ProcessorFlushList;
    MiInitializeTbFlushList(ProcessorFlushList, a1, v7, 0, 32);
  }
  return MiInsertTbFlushEntry(*a3, v5, 1LL);
}
