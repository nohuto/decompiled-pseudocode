/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140C4CCAC
 * Callers:
 *     IoAllocateIrpEx @ 0x14026BAA0 (IoAllocateIrpEx.c)
 *     PipDmgIsDmaVerifierEnabled @ 0x1407AA5F0 (PipDmgIsDmaVerifierEnabled.c)
 *     IovCheckAddressForIrp @ 0x140C308F0 (IovCheckAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140C3605C (VfPendingShouldForce.c)
 *     ViWdBeforeCallDriver @ 0x140C400D8 (ViWdBeforeCallDriver.c)
 *     VfCheckUserHandle @ 0x140C4DC48 (VfCheckUserHandle.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140C4CB68 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
