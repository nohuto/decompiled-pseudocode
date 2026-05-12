/*
 * XREFs of RaidAdapterFreeDumpInfo @ 0x1400494BC
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1400A3064 (RaUnitStorageFreeDumpInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1401842F0 (RaidAdapterCreateDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterFreeDumpInfo(PVOID *a1)
{
  _QWORD *v2; // rdi
  void *v3; // rcx

  v2 = (_QWORD *)*((_QWORD *)*a1 + 6);
  if ( v2 )
  {
    v3 = (void *)v2[7];
    if ( v3 )
      ExFreePoolWithTag(v3, 0x44436152u);
    ExFreePoolWithTag(v2, 0x44436152u);
  }
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
