/*
 * XREFs of RaidAdapterDisableDeviceInterface @ 0x14004A524
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401B8714 (RaidAdapterSurpriseRemovalIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1401B9154 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterDeleteDevmapEntry @ 0x14005B6A4 (RaidAdapterDeleteDevmapEntry.c)
 *     StorDeleteSymbolicLink @ 0x1400970DC (StorDeleteSymbolicLink.c)
 */

NTSTATUS __fastcall RaidAdapterDisableDeviceInterface(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 v3; // rcx

  if ( *(_QWORD *)(a1 + 2048) )
    IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 2040), 0);
  result = RaidAdapterDeleteDevmapEntry(a1);
  if ( (*(_BYTE *)(a1 + 104) & 4) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 104) &= 0xF9u;
  }
  v3 = *(unsigned int *)(a1 + 56);
  if ( (_DWORD)v3 != -1 )
  {
    result = StorDeleteSymbolicLink(v3, 0LL, a1);
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}
