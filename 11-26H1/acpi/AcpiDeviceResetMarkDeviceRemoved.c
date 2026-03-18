/*
 * XREFs of AcpiDeviceResetMarkDeviceRemoved @ 0x14005DDFC
 * Callers:
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400CA9C0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiDeviceResetMarkDeviceRemoved(__int64 a1)
{
  char v2; // di
  KIRQL v3; // r8
  _QWORD **v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rax

  v2 = 1;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v4 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 952) + 72LL) + 48LL);
  v5 = *v4;
  while ( 1 )
  {
    v6 = v5;
    if ( v5 == v4 )
      break;
    v5 = (_QWORD *)*v5;
    v7 = *(_QWORD *)(*(v6 - 1) + 784LL);
    if ( v7 && (*(_DWORD *)(v7 + 48) & 0x4000000) == 0 )
    {
      v2 = 0;
      break;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  return v2;
}
