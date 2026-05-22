/*
 * XREFs of ?IsMPCGamepadDevice@MPCGamepadProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18007C270
 * Callers:
 *     ?CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z @ 0x180021320 (-CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180021560 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 * Callees:
 *     IsGetMPCInputPostProcessorPresent @ 0x18009BACC (IsGetMPCInputPostProcessorPresent.c)
 */

__int64 __fastcall MPCGamepadProcessor::IsMPCGamepadDevice(const struct DeviceInfo *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*((_BYTE *)a1 + 4) & 0x40) != 0 )
    return (unsigned __int8)IsGetMPCInputPostProcessorPresent(a1) != 0;
  return v1;
}
