/*
 * XREFs of PnpDisableDevice @ 0x1407A4630
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF6F40 (PnpIsDeviceInstanceEnabled.c)
 * Callees:
 *     IopRemoveDevice @ 0x14090FCA8 (IopRemoveDevice.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     IopReleaseDeviceResources @ 0x140A8AE94 (IopReleaseDeviceResources.c)
 *     PiIrpQueryRemoveDevice @ 0x140AE3FF4 (PiIrpQueryRemoveDevice.c)
 */

__int64 __fastcall PnpDisableDevice(__int64 a1, unsigned int a2)
{
  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x301:
    case 0x302:
    case 0x303:
    case 0x304:
      goto LABEL_4;
    case 0x305:
    case 0x306:
    case 0x307:
    case 0x308:
    case 0x309:
    case 0x30A:
    case 0x30B:
    case 0x30C:
    case 0x30D:
    case 0x30E:
    case 0x30F:
      if ( (int)PiIrpQueryRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32)) >= 0 )
      {
LABEL_4:
        IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32));
        IopReleaseDeviceResources(a1, 1LL);
      }
      else
      {
        IopRemoveDevice(*(PDEVICE_OBJECT *)(a1 + 32));
      }
      break;
    default:
      break;
  }
  if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    PipClearDevNodeProblem(a1);
  return PipSetDevNodeProblem(a1, a2, 0LL);
}
