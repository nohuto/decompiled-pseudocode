/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14090E1D4
 * Callers:
 *     PiSwIrpGetAttributes @ 0x1407B02D0 (PiSwIrpGetAttributes.c)
 *     PiSwIrpSetAttributes @ 0x1407B0370 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B04AC (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14090C58C (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140AF9430 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpPropertySet @ 0x140B055EC (PiSwIrpPropertySet.c)
 *     PiSwIrpGetLifetime @ 0x140B3927C (PiSwIrpGetLifetime.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwDeviceOperationsAllowed(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( !a1 || !*(_QWORD *)(a1 + 80) || (*(_DWORD *)(a1 + 4) & 4) == 0 || *(_QWORD *)(a1 + 88) )
    return 0;
  return v1;
}
