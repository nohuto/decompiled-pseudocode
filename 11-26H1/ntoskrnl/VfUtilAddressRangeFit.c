/*
 * XREFs of VfUtilAddressRangeFit @ 0x140C21630
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1406470F8 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14064725C (ViDeadlockRemoveMemoryRangeThreads.c)
 *     ViDeadlockSearchResource @ 0x140C382E8 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140C383CC (ViDeadlockSearchThread.c)
 *     ViIrpDatabaseFindPointer @ 0x140C39EE8 (ViIrpDatabaseFindPointer.c)
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
