/*
 * XREFs of RaUnitIsSMRDisabled @ 0x1400480C8
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1400A7264 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1400A7A78 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1401B4F4C (RaUnitQueryCapabilitiesIrp.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1401B847C (RaUnitQueryPnpDeviceStateIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIsSMRDisabled(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 112);
  if ( !v1 || (*v1 & 0x1F) != 0x14 )
    return 0LL;
  if ( IsSMREnabled && *(int *)(*(_QWORD *)(a1 + 24) + 4728LL) <= 1 )
    return *(_BYTE *)(a1 + 507) & 1;
  return 1LL;
}
