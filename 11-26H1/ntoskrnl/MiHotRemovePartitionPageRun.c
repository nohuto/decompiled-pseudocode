/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x14088253C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14070C91C (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x14086D13C (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(
        __int64 BugCheckParameter2,
        unsigned __int64 a2,
        int a3,
        int a4,
        __int16 a5)
{
  int v5; // r8d

  if ( a3 == 3 )
    v5 = a4 != 0 ? 33056 : 32800;
  else
    v5 = 524320;
  if ( (a5 & 0x100) != 0 )
  {
    v5 |= 0x40000u;
  }
  else if ( ((*(_QWORD *)(48 * BugCheckParameter2 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FF) == (_WORD)MiSystemPartition
         && (a5 & 6) != 6 )
  {
    v5 |= 0x200000u;
  }
  return MiRemovePhysicalMemory(BugCheckParameter2, a2, v5);
}
