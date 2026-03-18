/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1400575CC
 * Callers:
 *     ACPIInitResetDeviceExtension @ 0x14003C110 (ACPIInitResetDeviceExtension.c)
 *     ACPIBuildPdo @ 0x14004FAEC (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x14004FE60 (ACPIDispatchIrpDepPdoQueryID.c)
 *     AcpiArblibInitializeArbiter @ 0x1400555EC (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1400BF0A4 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
