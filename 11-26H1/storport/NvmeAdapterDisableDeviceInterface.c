/*
 * XREFs of NvmeAdapterDisableDeviceInterface @ 0x1400D4E90
 * Callers:
 *     NvmeAdapterRemoveDeviceIrp @ 0x14019E4E8 (NvmeAdapterRemoveDeviceIrp.c)
 *     NvmeAdapterSurpriseRemovalIrp @ 0x1401A0664 (NvmeAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorDeleteSymbolicLink @ 0x1400970DC (StorDeleteSymbolicLink.c)
 */

int __fastcall NvmeAdapterDisableDeviceInterface(__int64 a1)
{
  int result; // eax
  unsigned int v3; // ecx

  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 904) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 896), 0);
  if ( *(_QWORD *)(a1 + 888) )
    result = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 880), 0);
  if ( (*(_BYTE *)(a1 + 144) & 8) != 0 )
  {
    result = IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_QWORD *)(a1 + 144) &= 0xFFFFFFFFFFFFFFF3uLL;
  }
  v3 = *(_DWORD *)(a1 + 56);
  if ( v3 != -1 )
  {
    result = StorDeleteSymbolicLink(v3, 1, (int *)a1);
    *(_DWORD *)(a1 + 56) = -1;
  }
  return result;
}
