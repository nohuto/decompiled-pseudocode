/*
 * XREFs of CmpUuidCreate @ 0x140A7622C
 * Callers:
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14084D878 (CmpLoadHiveVolatile.c)
 *     CmpStartRMLogs @ 0x1408ACB38 (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x140906340 (CmpVolumeContextStart.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140244840 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140A76B60 (ExUuidCreate.c)
 */

NTSTATUS __fastcall CmpUuidCreate(UUID *Uuid)
{
  NTSTATUS result; // eax
  LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    result = ExUuidCreate(Uuid);
    if ( result != -1073741267 )
      break;
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
