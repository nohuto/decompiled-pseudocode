/*
 * XREFs of IommupDeviceDisableSvm @ 0x140B679EC
 * Callers:
 *     HalpIommuCreateDevice @ 0x140514688 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140589F30 (HalpIommuDeleteDevice.c)
 * Callees:
 *     HalpIommuBusInterfaceDisableSvmCapabilities @ 0x14058E360 (HalpIommuBusInterfaceDisableSvmCapabilities.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     IommupDeviceDisablePasidTaggedDma @ 0x140785058 (IommupDeviceDisablePasidTaggedDma.c)
 */

__int64 __fastcall IommupDeviceDisableSvm(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  bool v4; // si
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebp

  v2 = 0;
  v4 = 0;
  if ( *(_BYTE *)(a1 + 266) )
  {
    if ( *(_BYTE *)(a1 + 265) )
      v4 = (*(_BYTE *)(a1 + 376) & 4) == 0;
    if ( (*(_DWORD *)(a1 + 376) & 5) != 0 && (int)HalpIommuBusInterfaceDisableSvmCapabilities(a1) < 0 )
      v4 = 1;
    v5 = IommupDeviceDisablePasidTaggedDma(a1, a2);
    *(_WORD *)(a1 + 265) = 0;
    v7 = v5;
    *(_BYTE *)(a1 + 264) = 0;
    if ( v5 < 0 )
      v4 = 1;
    if ( *(_QWORD *)(a1 + 296) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 280), v6);
    if ( v4 )
      return (unsigned int)-1073741823;
    return v7;
  }
  return v2;
}
