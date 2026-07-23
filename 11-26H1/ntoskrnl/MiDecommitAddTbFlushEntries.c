/*
 * XREFs of MiDecommitAddTbFlushEntries @ 0x1403447B8
 * Callers:
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiDecommitLargePte @ 0x140340E3C (MiDecommitLargePte.c)
 *     MiDeleteLargeUserPde @ 0x1404711E0 (MiDeleteLargeUserPde.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 */

void __fastcall MiDecommitAddTbFlushEntries(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 *ProcessorFlushList; // rax
  __int64 v10; // rdx

  if ( a4 )
  {
    v4 = *(__int64 **)(a1 + 16);
    v5 = a4;
    if ( !v4 )
    {
      ProcessorFlushList = MiGetProcessorFlushList();
      v10 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 16) = ProcessorFlushList;
      v4 = ProcessorFlushList;
      MiInitializeTbFlushList((_DWORD)ProcessorFlushList, v10, *((_DWORD *)ProcessorFlushList + 3), 0, 1);
    }
    if ( a3 )
    {
      do
      {
        MiInsertLargeTbFlushEntry(v4, a3, a2);
        a2 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    else
    {
      MiInsertTbFlushEntry(v4, a2 << 25 >> 16, v5);
    }
  }
}
