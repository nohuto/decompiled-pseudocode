/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x14094B4B8
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140947228 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14094AFAC (VrpLoadDifferencingHive.c)
 * Callees:
 *     VrpUnlockDiffHiveTable @ 0x14094B5B8 (VrpUnlockDiffHiveTable.c)
 *     VrpLockDiffHiveTableExclusive @ 0x14094B720 (VrpLockDiffHiveTableExclusive.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14094BC80 (VrpDereferenceDiffHiveEntryWithLock.c)
 */

__int64 __fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  __int64 result; // rax
  __int64 v3; // rtt

  _m_prefetchw(P + 2);
  result = P[2];
  while ( result - 1 > 0 )
  {
    v3 = result;
    result = _InterlockedCompareExchange64(P + 2, result - 1, result);
    if ( v3 == result )
      return result;
  }
  if ( result != 1 )
    __fastfail(0xEu);
  VrpLockDiffHiveTableExclusive();
  VrpDereferenceDiffHiveEntryWithLock(P);
  return VrpUnlockDiffHiveTable();
}
