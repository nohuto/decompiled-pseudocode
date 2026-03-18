/*
 * XREFs of MiDecommitAddTbFlushEntries @ 0x140342738
 * Callers:
 *     MiDeleteVa @ 0x140322AC0 (MiDeleteVa.c)
 *     MiDecommitLargePte @ 0x14033EDBC (MiDecommitLargePte.c)
 *     MiDeleteLargeUserPde @ 0x140477A60 (MiDeleteLargeUserPde.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x140343930 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
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
