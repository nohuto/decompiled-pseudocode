/*
 * XREFs of ACPIFilterRemoveNonPresentDevices @ 0x14001C520
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400C58A0 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400C67F8 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIBuildSurpriseRemovedExtension @ 0x14001C264 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIExtListEnumNext @ 0x14001D86C (ACPIExtListEnumNext.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIExtListStartEnum @ 0x140028384 (ACPIExtListStartEnum.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140046BE8 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPICleanupRemovedExtension @ 0x140059D48 (ACPICleanupRemovedExtension.c)
 *     ACPIInitStopDevice @ 0x1400C7F58 (ACPIInitStopDevice.c)
 *     IsPciBus @ 0x1400C827C (IsPciBus.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 */

void __fastcall ACPIFilterRemoveNonPresentDevices(__int64 a1, _DWORD *a2)
{
  __int64 i; // rax
  _BOOL8 v4; // rdx
  __int64 v5; // rbx
  __int64 j; // r8
  __int64 v7; // rdi
  bool v8; // si
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // eax
  _QWORD v12[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v16 = 1LL;
  v12[0] = a1 + 800;
  v12[1] = 0LL;
  SpinLock = &AcpiDeviceTreeLock;
  v15 = 816LL;
  *(_OWORD *)NewIrql = 0LL;
  for ( i = ACPIExtListStartEnum(v12); ; i = ACPIExtListEnumNext(v12) )
  {
    v5 = i;
    if ( *(_QWORD *)&NewIrql[8] + v15 == v12[0] )
      break;
    if ( (_DWORD)v16 == 1 )
    {
      ACPIInitReferenceDeviceExtension();
      KeReleaseSpinLock(SpinLock, NewIrql[0]);
    }
    LOBYTE(v4) = 0;
    if ( *(_QWORD *)(v5 + 944) )
      v4 = *(_DWORD *)(v5 + 368) == 4;
    if ( (*(_BYTE *)(v5 + 8) & 0x60) == 0x40 )
    {
      for ( j = 0LL; (unsigned int)j < *a2; j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD *)(v5 + 784) == *(_QWORD *)&a2[2 * j + 2] )
          goto LABEL_8;
      }
      v7 = *(_QWORD *)(v5 + 1008) & 0x8000LL;
      v8 = (*(_QWORD *)(v5 + 1008) & 0x8000) != 0;
      if ( (unsigned __int8)IsPciBus(*(_QWORD *)(v5 + 768), v4) || v7 )
      {
        LOBYTE(v10) = v8;
        EnableDisableRegions(*(_QWORD *)(v5 + 760), 0LL, v10);
      }
      v11 = *(_DWORD *)(v5 + 1008);
      *(_DWORD *)(v5 + 368) = 5;
      if ( (*(_QWORD *)&v11 & 0x800000LL) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 8), 0xFFFFFFFFFFFFF7FFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)(v5 + 8), 0x800uLL);
      LOBYTE(v9) = 1;
      ACPIInitStopDevice(v5, v9);
      ACPIThermalReleaseCoolingInterfaces(v5);
      ACPIBuildSurpriseRemovedExtension((_QWORD *)v5);
    }
    else
    {
LABEL_8:
      if ( v4 )
        ACPICleanupRemovedExtension(v5);
    }
  }
  if ( (_DWORD)v16 )
    KeReleaseSpinLock(SpinLock, NewIrql[0]);
}
