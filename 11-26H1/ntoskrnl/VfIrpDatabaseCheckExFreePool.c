/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x140C3FBF8
 * Callers:
 *     VfPoolCheckIncorrectFreeApi @ 0x140C3E5F4 (VfPoolCheckIncorrectFreeApi.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x14064BA60 (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x14064BAA4 (ViIrpDatabaseReleaseLockShared.c)
 *     CarReportRuleViolationFromNt @ 0x140C31F2C (CarReportRuleViolationFromNt.c)
 *     ViIrpDatabaseFindPointer @ 0x140C3FEF8 (ViIrpDatabaseFindPointer.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140C4C01C (VfUtilAddressRangeFitNoLock.c)
 */

void __fastcall VfIrpDatabaseCheckExFreePool(ULONG_PTR BugCheckParameter2)
{
  __int64 Pointer; // rbx
  KIRQL v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( VfIrpDatabaseInitialized )
  {
    if ( (unsigned int)VfUtilAddressRangeFitNoLock(
                         ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (BugCheckParameter2 >> 12)),
                         BugCheckParameter2,
                         BugCheckParameter2 + 1) )
    {
      ViIrpDatabaseAcquireLockShared(&v3);
      Pointer = ViIrpDatabaseFindPointer(BugCheckParameter2);
      ViIrpDatabaseReleaseLockShared(v3);
      if ( Pointer )
      {
        if ( (MmVerifierData & 0x10) != 0 )
          CarReportRuleViolationFromNt(196, 261LL, BugCheckParameter2, 0LL, 0LL, 4u, 0LL);
      }
    }
  }
}
