/*
 * XREFs of CmpLockTwoSecurityCachesExclusiveShared @ 0x1408DF154
 * Callers:
 *     CmpDoBuildVirtualStack @ 0x140859914 (CmpDoBuildVirtualStack.c)
 *     CmpCopyKeyPartial @ 0x1408DDBFC (CmpCopyKeyPartial.c)
 *     CmpSyncKeyValues @ 0x140B62A58 (CmpSyncKeyValues.c)
 * Callees:
 *     CmLockHiveSecurityExclusive @ 0x1408DF19C (CmLockHiveSecurityExclusive.c)
 *     CmLockHiveSecurityShared @ 0x140C58B30 (CmLockHiveSecurityShared.c)
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
