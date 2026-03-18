/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140B97F50
 * Callers:
 *     IoAllocateIrpEx @ 0x140253CC0 (IoAllocateIrpEx.c)
 *     PipDmgIsDmaVerifierEnabled @ 0x14071B6A4 (PipDmgIsDmaVerifierEnabled.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140B7E248 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140B81BE8 (VfPendingShouldForce.c)
 *     ViWdBeforeCallDriver @ 0x140B8CA30 (ViWdBeforeCallDriver.c)
 *     VfCheckUserHandle @ 0x140B99248 (VfCheckUserHandle.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140B97E9C (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v4) = VfTargetDriversGetVerifierData(a1, (unsigned int)ViTargetInitialized, a3, a4) != 0;
  return v4;
}
