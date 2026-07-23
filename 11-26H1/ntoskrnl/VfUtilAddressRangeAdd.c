/*
 * XREFs of VfUtilAddressRangeAdd @ 0x140C27600
 * Callers:
 *     ViDeadlockAddResource @ 0x140C3CB00 (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x140C3CD4C (ViDeadlockAddThread.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x140C3FCAC (VfIrpDatabaseEntryInsertAndLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilAddressRangeAdd(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *a1 )
  {
    if ( a2 < *a1 )
      *a1 = a2;
    result = a2 + a3;
    if ( a2 + a3 > a1[1] )
    {
      result = a2 + a3;
      a1[1] = a2 + a3;
    }
  }
  else
  {
    result = a2 + a3;
    *a1 = a2;
    a1[1] = a2 + a3;
  }
  return result;
}
