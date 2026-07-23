/*
 * XREFs of MiTrimViewGetFlushList @ 0x1403A9858
 * Callers:
 *     MiTrimViewLockSystemPte @ 0x1403A8480 (MiTrimViewLockSystemPte.c)
 *     MiTrimViewLockProcessPte @ 0x140465EA0 (MiTrimViewLockProcessPte.c)
 * Callees:
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
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
