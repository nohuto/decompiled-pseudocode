/*
 * XREFs of VrpDereferenceDiffHiveEntry @ 0x14093BCC0
 * Callers:
 *     VrpUnloadDifferencingHive @ 0x14093B458 (VrpUnloadDifferencingHive.c)
 *     VrpLoadDifferencingHive @ 0x14093B56C (VrpLoadDifferencingHive.c)
 * Callees:
 *     VrpUnlockDiffHiveTable @ 0x14093BAA8 (VrpUnlockDiffHiveTable.c)
 *     VrpLockDiffHiveTableExclusive @ 0x14093BE54 (VrpLockDiffHiveTableExclusive.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140B060EC (VrpDereferenceDiffHiveEntryWithLock.c)
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
