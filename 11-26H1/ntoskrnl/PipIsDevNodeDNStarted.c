/*
 * XREFs of PipIsDevNodeDNStarted @ 0x140516374
 * Callers:
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404CC23C (PipRestoreDevNodeState.c)
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x140968268 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14096F560 (PnpRequestDeviceRemovalWorker.c)
 *     PnpCheckForActiveDependencies @ 0x1409AF220 (PnpCheckForActiveDependencies.c)
 *     PnpProcessDependencyRelations @ 0x1409B6868 (PnpProcessDependencyRelations.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiControlGetDevicePowerData @ 0x140A93788 (PiControlGetDevicePowerData.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AE9900 (PiDevCfgLogDeviceStarted.c)
 *     PnpDriverLoadingFailed @ 0x140B4858C (PnpDriverLoadingFailed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x307:
    case 0x308:
    case 0x309:
    case 0x30A:
    case 0x30B:
    case 0x30C:
    case 0x30D:
    case 0x30E:
    case 0x30F:
      result = 1LL;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
