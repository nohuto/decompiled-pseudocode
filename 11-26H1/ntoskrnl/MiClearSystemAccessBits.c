/*
 * XREFs of MiClearSystemAccessBits @ 0x1406F7100
 * Callers:
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 */

void __fastcall MiClearSystemAccessBits(unsigned __int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 *ProcessorFlushList; // rdi
  void *v7; // rbx
  __int64 v8; // rcx

  if ( a2 )
  {
    v4 = a2;
    ProcessorFlushList = 0LL;
    do
    {
      if ( (*(_QWORD *)a1 & 0x20) != 0 )
      {
        if ( (MiFlags & 0x8000000) != 0 )
          _mm_lfence();
        _InterlockedCompareExchange64(
          (volatile signed __int64 *)a1,
          *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFDFuLL,
          *(_QWORD *)a1);
        if ( !ProcessorFlushList )
        {
          v7 = MiVaToFlushVm(a1);
          ProcessorFlushList = MiGetProcessorFlushList();
          MiInitializeTbFlushList((__int64)ProcessorFlushList, (__int64)v7, *((_DWORD *)ProcessorFlushList + 3), 0, 2);
          *(_DWORD *)(v8 + 16) |= 8u;
        }
        if ( a3 )
          MiInsertLargeTbFlushEntry((__int64)ProcessorFlushList, a3, a1);
        else
          MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(a1 << 25) >> 16, 1LL, 0);
      }
      a1 += 8LL;
      --v4;
    }
    while ( v4 );
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
  }
}
