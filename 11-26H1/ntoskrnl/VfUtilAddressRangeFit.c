/*
 * XREFs of VfUtilAddressRangeFit @ 0x140C27640
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14064ACD8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14064AE3C (ViDeadlockRemoveMemoryRangeThreads.c)
 *     ViDeadlockSearchResource @ 0x140C3E2F8 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140C3E3DC (ViDeadlockSearchThread.c)
 *     ViIrpDatabaseFindPointer @ 0x140C3FEF8 (ViIrpDatabaseFindPointer.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VfUtilAddressRangeFit(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned int v4; // r9d

  result = *a1;
  v4 = 0;
  if ( *a1 )
  {
    if ( a2 <= *a1 && a3 >= a1[1] || a2 >= *a1 && a2 < a1[1] || a3 > *a1 && a3 <= a1[1] )
      return 1;
    return v4;
  }
  return result;
}
