/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x14001C6D4
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x14005D320 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400C69F0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 */

__int64 __fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  __int64 i; // rax
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v8; // [rsp+48h] [rbp-18h]
  __int64 v9; // [rsp+50h] [rbp-10h]

  v9 = 2LL;
  v5[0] = RootDeviceExtension + 800;
  v5[1] = 0LL;
  SpinLock = &AcpiDeviceTreeLock;
  *(_OWORD *)NewIrql = 0LL;
  v8 = 816LL;
  for ( i = ACPIExtListStartEnum(v5); ; i = ACPIExtListEnumNext(v5) )
  {
    v3 = i;
    if ( *(_QWORD *)&NewIrql[8] + v8 == v5[0] )
    {
      if ( !(_DWORD)v9 )
        return v3;
      goto LABEL_9;
    }
    if ( (_DWORD)v9 == 1 )
    {
      ACPIInitReferenceDeviceExtension();
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    if ( !v3 || _bittest64((const signed __int64 *)(v3 + 8), 0x39u) && *(_QWORD *)(v3 + 184) == a1 )
      break;
  }
  if ( (_DWORD)v9 == 2 )
LABEL_9:
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
  return v3;
}
