/*
 * XREFs of RaidAdapterFreeDriverInfo @ 0x140061244
 * Callers:
 *     RaUnitStorageFreeDumpInfo @ 0x1400A3064 (RaUnitStorageFreeDumpInfo.c)
 *     RaidAdapterCreateDumpInfo @ 0x1401842F0 (RaidAdapterCreateDumpInfo.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x14018C2D8 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidAdapterCreateDriverInfo @ 0x1401BD5E4 (RaidAdapterCreateDriverInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterFreeDriverInfo(PVOID *a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx

  v2 = (void *)*((_QWORD *)*a1 + 4);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x44436152u);
  v3 = (void *)*((_QWORD *)*a1 + 5);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x44436152u);
  v4 = (void *)*((_QWORD *)*a1 + 6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44436152u);
  v5 = (void *)*((_QWORD *)*a1 + 7);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x44436152u);
  v6 = (void *)*((_QWORD *)*a1 + 9);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x44436152u);
  v7 = (void *)*((_QWORD *)*a1 + 17);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  ExFreePoolWithTag(*a1, 0x44436152u);
}
