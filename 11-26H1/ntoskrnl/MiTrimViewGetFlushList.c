/*
 * XREFs of MiTrimViewGetFlushList @ 0x1403A7AF8
 * Callers:
 *     MiTrimViewLockSystemPte @ 0x1403A6720 (MiTrimViewLockSystemPte.c)
 *     MiTrimViewLockProcessPte @ 0x14046C720 (MiTrimViewLockProcessPte.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x1403229E0 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140360920 (MiInitializeTbFlushList.c)
 */

void __fastcall MiTrimViewGetFlushList(__int64 *a1, int a2)
{
  __int64 *v3; // rax
  __int64 *ProcessorFlushList; // rax

  if ( a2 )
  {
    if ( !a1[5] )
    {
      ProcessorFlushList = (__int64 *)a1[6];
      if ( !ProcessorFlushList )
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        a1[6] = (__int64)ProcessorFlushList;
      }
      a1[5] = (__int64)ProcessorFlushList;
      MiInitializeTbFlushList((__int64)ProcessorFlushList, a1[3], *((_DWORD *)ProcessorFlushList + 3), 0, 10);
    }
  }
  else
  {
    v3 = (__int64 *)a1[6];
    if ( !v3 )
    {
      v3 = MiGetProcessorFlushList();
      a1[6] = (__int64)v3;
    }
    a1[4] = (__int64)(v3 + 517);
    MiInitializeTbFlushList((__int64)(v3 + 517), a1[3], *((_DWORD *)v3 + 1037), 2, 1);
  }
}
