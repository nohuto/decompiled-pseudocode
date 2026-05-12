/*
 * XREFs of RaidUnitUnRegisterInterfaces @ 0x1400AA334
 * Callers:
 *     RaUnitDeleteDeviceIrp @ 0x14009A2C0 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitDisableDeviceIrp @ 0x14009B0F4 (RaUnitDisableDeviceIrp.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018EB54 (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     PortMapDeleteLunEntry @ 0x14012FD10 (PortMapDeleteLunEntry.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidUnitUnRegisterInterfaces(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rcx
  unsigned int v4; // edi
  void (*v5)(void); // rax

  v1 = *(_DWORD *)(a1 + 104);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0;
  if ( v3 )
    v4 = PortMapDeleteLunEntry(*(unsigned int *)(v3 + 56), (unsigned __int8)v1, BYTE1(v1), BYTE2(v1));
  if ( *(_QWORD *)(a1 + 3552) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 3544), 0);
  if ( *(_QWORD *)(a1 + 1968) && (*(_BYTE *)(a1 + 506) & 8) != 0 )
  {
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1960), 0);
    *(_BYTE *)(a1 + 506) &= ~8u;
  }
  if ( *(_QWORD *)(a1 + 2088) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2080), 0);
  v5 = *(void (**)(void))(a1 + 1024);
  if ( v5 && *(_QWORD *)(a1 + 952) )
  {
    v5();
    memset_0((void *)(a1 + 944), 0, 0x58uLL);
  }
  return v4;
}
