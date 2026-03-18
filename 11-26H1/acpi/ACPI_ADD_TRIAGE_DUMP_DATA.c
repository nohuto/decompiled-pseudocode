/*
 * XREFs of ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EE44
 * Callers:
 *     AcpiAddTriageAcpiDeviceExtension @ 0x14005EE94 (AcpiAddTriageAcpiDeviceExtension.c)
 *     AcpiAddTriageAcpiGlobal @ 0x14005EFD0 (AcpiAddTriageAcpiGlobal.c)
 *     AcpiAddTriageAcpiGpe @ 0x14005F334 (AcpiAddTriageAcpiGpe.c)
 *     AcpiAddTriageAcpiList @ 0x14005F718 (AcpiAddTriageAcpiList.c)
 *     AcpiAddTriageAmliContext @ 0x14005F7A8 (AcpiAddTriageAmliContext.c)
 *     AcpiAddTriageAmliGlobal @ 0x14005F8DC (AcpiAddTriageAmliGlobal.c)
 *     AcpiAddTriageNSTree @ 0x14005F980 (AcpiAddTriageNSTree.c)
 *     AcpiDumpRoutine @ 0x14005FA80 (AcpiDumpRoutine.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPI_ADD_TRIAGE_DUMP_DATA(void *MaxDataSize, PVOID Address)
{
  ULONG v3; // ebx
  SIZE_T v4; // r9

  if ( MaxDataSize )
  {
    v3 = (unsigned int)MaxDataSize;
    if ( MmIsAddressValid(MaxDataSize) )
      KeAddTriageDumpDataBlock(KtriageDumpDataArray, v3, Address, v4);
  }
}
