/*
 * XREFs of CmpUuidCreate @ 0x140A7EF4C
 * Callers:
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpStartRMLogs @ 0x1408B2F7C (CmpStartRMLogs.c)
 *     CmpVolumeContextStart @ 0x140A2E678 (CmpVolumeContextStart.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     ExUuidCreate @ 0x140A7F880 (ExUuidCreate.c)
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
