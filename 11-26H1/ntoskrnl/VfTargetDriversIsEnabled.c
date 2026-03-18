/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140C46C9C
 * Callers:
 *     IoAllocateIrpEx @ 0x14026C530 (IoAllocateIrpEx.c)
 *     PipDmgIsDmaVerifierEnabled @ 0x1407A7A40 (PipDmgIsDmaVerifierEnabled.c)
 *     IovCheckAddressForIrp @ 0x140C2A8E0 (IovCheckAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140C3004C (VfPendingShouldForce.c)
 *     ViWdBeforeCallDriver @ 0x140C3A0C8 (ViWdBeforeCallDriver.c)
 *     VfCheckUserHandle @ 0x140C47C38 (VfCheckUserHandle.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140C46B58 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
