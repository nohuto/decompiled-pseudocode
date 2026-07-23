/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1408E5714
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x14085FCA4 (CmpDoBuildVirtualStack.c)
 *     CmpCopyKeyPartial @ 0x1408E41BC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140B65AF8 (CmpSyncKeyValues.c)
 * Callees:
 *     CmLockHiveSecurityExclusive @ 0x1408E575C (CmLockHiveSecurityExclusive.c)
 *     CmLockHiveSecurityShared @ 0x140C5EB30 (CmLockHiveSecurityShared.c)
 */

__int64 __fastcall CmpLockTwoSecurityCachesExclusiveShared(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v4; // cc
  unsigned __int64 v6; // rcx

  v4 = a1 <= a2;
  if ( a1 >= a2 )
  {
    v6 = a2;
    if ( !v4 )
    {
      CmLockHiveSecurityShared(a2);
      v6 = a1;
    }
    return CmLockHiveSecurityExclusive(v6);
  }
  else
  {
    CmLockHiveSecurityExclusive(a1);
    return CmLockHiveSecurityShared(a2);
  }
}
