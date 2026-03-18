/*
 * XREFs of ACPIThermalReevaluateConstraints @ 0x14004549C
 * Callers:
 *     ACPIThermalUpdateConstraints @ 0x140045350 (ACPIThermalUpdateConstraints.c)
 *     ACPIThermalReleaseCoolingInterfaces @ 0x140046BE8 (ACPIThermalReleaseCoolingInterfaces.c)
 *     ACPIThermalAssocaiteConstraint @ 0x140069DD4 (ACPIThermalAssocaiteConstraint.c)
 *     AcpiThermalDestroyContraints @ 0x14006A958 (AcpiThermalDestroyContraints.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIThermalReevaluateConstraints(PVOID Context)
{
  bool v1; // zf

  v1 = *((_BYTE *)Context + 45) == 0;
  *((_BYTE *)Context + 44) = 1;
  if ( v1 )
  {
    IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 6), ACPIThermalReevaluateConstraintsWorker, DelayedWorkQueue, Context);
    *((_BYTE *)Context + 45) = 1;
  }
}
