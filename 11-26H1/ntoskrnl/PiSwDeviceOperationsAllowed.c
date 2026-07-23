/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x1409B0304
 * Callers:
 *     PiSwIrpGetAttributes @ 0x1407B3330 (PiSwIrpGetAttributes.c)
 *     PiSwIrpSetAttributes @ 0x1407B33D0 (PiSwIrpSetAttributes.c)
 *     PiSwIrpSetLifetime @ 0x1407B350C (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1409AE6BC (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpPropertySet @ 0x140B071FC (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140B12678 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140B3B48C (PiSwIrpGetLifetime.c)
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
