/*
 * XREFs of NvmeAdapterSendPowerToMiniport @ 0x140126054
 * Callers:
 *     NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine @ 0x1401244B0 (NvmeAdapterPowerDownDeviceNextStepWorkItemRoutine.c)
 *     NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine @ 0x1401253C0 (NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine.c)
 * Callees:
 *     NvmeCallMiniportAdapterControl @ 0x140078740 (NvmeCallMiniportAdapterControl.c)
 *     NvmeIsAdapterControlSupported @ 0x1400787E0 (NvmeIsAdapterControlSupported.c)
 */

__int64 __fastcall NvmeAdapterSendPowerToMiniport(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = a1 + 168;
  v2 = -1073741637;
  if ( NvmeIsAdapterControlSupported(a1 + 168, 6) )
    return (unsigned int)NvmeCallMiniportAdapterControl(v1);
  return v2;
}
