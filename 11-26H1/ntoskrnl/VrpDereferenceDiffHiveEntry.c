/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x140979CB0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x140979448 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14097955C (VrpLoadDifferencingHive.c)
 * Callees:
 *     VrpUnlockDiffHiveTable @ 0x140979A98 (VrpUnlockDiffHiveTable.c)
 *     VrpLockDiffHiveTableExclusive @ 0x140979E44 (VrpLockDiffHiveTableExclusive.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140B044DC (VrpDereferenceDiffHiveEntryWithLock.c)
 */

void __fastcall VrpDereferenceDiffHiveEntry(_QWORD *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw(P + 2);
  v2 = P[2];
  while ( v2 - 1 > 0 )
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange64(P + 2, v2 - 1, v2);
    if ( v3 == v2 )
      return;
  }
  if ( v2 != 1 )
    __fastfail(0xEu);
  VrpLockDiffHiveTableExclusive();
  VrpDereferenceDiffHiveEntryWithLock(P);
  VrpUnlockDiffHiveTable();
}
