/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14051BDE4
 * Callers:
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1404D29C4 (PipRestoreDevNodeState.c)
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 *     PnpCheckForActiveDependencies @ 0x14090D0F0 (PnpCheckForActiveDependencies.c)
 *     PnpProcessDependencyRelations @ 0x1409141F8 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140914AF4 (PnpRequestDeviceRemovalWorker.c)
 *     PiDevCfgConfigureDevice @ 0x1409894D0 (PiDevCfgConfigureDevice.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1409A7808 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiControlGetDevicePowerData @ 0x140A8EAB8 (PiControlGetDevicePowerData.c)
 *     PiDevCfgLogDeviceStarted @ 0x140AD25CC (PiDevCfgLogDeviceStarted.c)
 *     PnpDriverLoadingFailed @ 0x140B4655C (PnpDriverLoadingFailed.c)
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
