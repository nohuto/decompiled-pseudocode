/*
 * XREFs of MmManagePartitionUpdateAttributes @ 0x140883948
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     MiPartitionUpdateFlags @ 0x1406F5624 (MiPartitionUpdateFlags.c)
 *     MiUpdateSlabContextSlabSize @ 0x14070C774 (MiUpdateSlabContextSlabSize.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1408852E0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 */

__int64 __fastcall MmManagePartitionUpdateAttributes(ULONG **a1, __int64 *a2, KPROCESSOR_MODE a3, unsigned int a4)
{
  __int64 v4; // r10
  unsigned int v5; // edi
  ULONG *v7; // rbx
  __int64 v9; // rdx

  v4 = *a2;
  v5 = 0;
  if ( !*a2 )
    return 0LL;
  if ( (v4 & 1) == 0 && (v4 & 2) == 0 )
  {
    if ( (v4 & 0xFFFFFFFFFFFFFFC3uLL) != 0 )
      return 3221225485LL;
    v7 = *a1;
    if ( (v4 & 4) != 0 )
    {
      if ( (v4 & 0xFFFFFFFFFFFFFFFBuLL) == 0 && (v7[1] & 0x20) != 0 )
        return MiUpdateSpecialPurposeMemoryCacheEligibility(*a1, a4);
      return 3221225485LL;
    }
    if ( (v7[1] & 0x20) == 0 )
    {
      if ( (v4 & 8) != 0 )
      {
        if ( (v4 & 0xFFFFFFFFFFFFFFF7uLL) == 0 )
        {
          if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
          {
            LOBYTE(v5) = a4 == 0;
            return MiUpdateSlabContextSlabSize((__int64)v7, v9, v5);
          }
          return 3221225569LL;
        }
        return 3221225485LL;
      }
      if ( (v4 & 0x10) != 0 )
      {
        if ( (v4 & 0xFFFFFFFFFFFFFFEFuLL) != 0 )
          return 3221225485LL;
        if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a3) )
          return 3221225569LL;
        if ( v7 != &MiSystemPartition )
        {
          MiPartitionUpdateFlags((__int64)v7, 0x40u, a4);
          return 0LL;
        }
      }
      else
      {
        if ( (v4 & 0x20) == 0 )
          return 0LL;
        if ( (v4 & 0xFFFFFFFFFFFFFFDFuLL) != 0 )
          return 3221225485LL;
      }
    }
  }
  return 3221225659LL;
}
