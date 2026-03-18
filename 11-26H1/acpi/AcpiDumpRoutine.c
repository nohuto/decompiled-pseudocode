/*
 * XREFs of AcpiDumpRoutine @ 0x14005FA80
 * Callers:
 *     <none>
 * Callees:
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EE44 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 *     AcpiAddTriageAcpiGlobal @ 0x14005EFD0 (AcpiAddTriageAcpiGlobal.c)
 *     AcpiAddTriageAmliGlobal @ 0x14005F8DC (AcpiAddTriageAmliGlobal.c)
 */

void __fastcall AcpiDumpRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _DWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v4; // eax

  v4 = ReasonSpecificData[4];
  if ( v4 == 159 || v4 == 307 )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(&gAcpiTriageInfo, (PVOID)0x18);
    AcpiAddTriageAcpiGlobal((void **)off_14008C790[0]);
    AcpiAddTriageAmliGlobal((void **)off_14008C798);
    *(_QWORD *)ReasonSpecificData = KtriageDumpDataArray;
  }
}
