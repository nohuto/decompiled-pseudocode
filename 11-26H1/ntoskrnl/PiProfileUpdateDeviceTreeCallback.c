/*
 * XREFs of PiProfileUpdateDeviceTreeCallback @ 0x1407AFFD0
 * Callers:
 *     <none>
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x1404CC3D0 (IoInvalidateDeviceRelations.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF95E0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 */

__int64 __fastcall PiProfileUpdateDeviceTreeCallback(__int64 a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 300);
  if ( v2 == 778 )
  {
    if ( !(unsigned int)PnpIsDeviceInstanceEnabled(0LL, a1 + 40, 0LL) )
      PnpRequestDeviceRemoval(a1, 0LL, 22LL);
  }
  else if ( ((v2 - 771) & 0xFFFFFFEE) == 0
         && v2 != 787
         && (*(_DWORD *)(a1 + 396) & 0x2000) != 0
         && *(_DWORD *)(a1 + 404) == 22 )
  {
    PipClearDevNodeProblem(a1);
    if ( (unsigned int)PnpIsDeviceInstanceEnabled(0LL, a1 + 40, 0LL) )
    {
      PnpRestartDeviceNode(a1);
      IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 16) + 32LL), BusRelations);
    }
    else
    {
      PipSetDevNodeProblem(a1, 22LL, 0LL);
    }
  }
  return 0LL;
}
