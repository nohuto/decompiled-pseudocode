/*
 * XREFs of MiFlushValidPteFromTb @ 0x140345918
 * Callers:
 *     MiTransformValidPteUsingAccessedBit @ 0x140344608 (MiTransformValidPteUsingAccessedBit.c)
 * Callees:
 *     MiVaToFlushVm @ 0x140283968 (MiVaToFlushVm.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1403658EC (MiInsertRecursiveTbFlushEntries.c)
 */

__int64 __fastcall MiFlushValidPteFromTb(unsigned __int64 a1, char a2, int a3, unsigned int a4)
{
  unsigned __int64 LeafVa; // rax
  unsigned int v9; // edi
  __int64 *ProcessorFlushList; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  LeafVa = MiGetLeafVa(a1);
  v9 = (unsigned int)MiVaToFlushVm(LeafVa);
  ProcessorFlushList = MiGetProcessorFlushList();
  MiInitializeTbFlushList((_DWORD)ProcessorFlushList, v9, *((_DWORD *)ProcessorFlushList + 3), 8, a3);
  if ( a2 < 0 )
    MiInsertLargeTbFlushEntry(v11, a4, a1);
  else
    MiInsertRecursiveTbFlushEntries(v11, a4, a1);
  MiFlushTbList((__int64)ProcessorFlushList);
  return MiReleaseProcessorFlushList(v13, v12, v14);
}
