/*
 * XREFs of MiClearPteAccessedBitRange @ 0x1404E8234
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140329040 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiClearPteAccessedBitRange(__int64 a1, int a2, volatile signed __int64 *a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 *ProcessorFlushList; // rbx
  __int64 v8; // rcx
  unsigned int v9; // r9d

  if ( !a2 )
  {
    v4 = *(_QWORD *)(a1 + 128);
    v5 = (__int64)((_QWORD)a3 << 25) >> 16;
    if ( v4 > ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) + 4088 )
      v4 = ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    v6 = 0;
    if ( (unsigned __int64)a3 <= v4 )
    {
      do
      {
        if ( (*a3 & 0x21) != 0x21 )
          break;
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        _InterlockedCompareExchange64(a3, *a3 & 0xFFFFFFFFFFFFFFDFuLL, *a3);
        ++v6;
        ++a3;
      }
      while ( (unsigned __int64)a3 <= v4 );
      if ( v6 )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          *(_QWORD *)(a1 + 32),
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          2);
        MiInsertTbFlushEntry(v8, v5, v6, v9);
        MiFlushTbList((__int64)ProcessorFlushList);
        MiReleaseProcessorFlushList();
      }
    }
  }
}
