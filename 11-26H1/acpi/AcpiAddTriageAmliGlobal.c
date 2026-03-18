/*
 * XREFs of AcpiAddTriageAmliGlobal @ 0x14005F8DC
 * Callers:
 *     AcpiDumpRoutine @ 0x14005FA80 (AcpiDumpRoutine.c)
 * Callees:
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EE44 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 *     AcpiAddTriageAmliContext @ 0x14005F7A8 (AcpiAddTriageAmliContext.c)
 */

void __fastcall AcpiAddTriageAmliGlobal(void **a1)
{
  _QWORD **v2; // rax
  _QWORD *v3; // rbx

  ACPI_ADD_TRIAGE_DUMP_DATA(a1, (PVOID)0x58);
  ACPI_ADD_TRIAGE_DUMP_DATA(*a1, (PVOID)8);
  if ( MmIsAddressValid(a1[1]) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(a1[1], (PVOID)8);
    v2 = (_QWORD **)a1[1];
    v3 = *v2;
    if ( *v2 != v2 )
    {
      do
      {
        if ( !MmIsAddressValid(v3) )
          break;
        AcpiAddTriageAmliContext((unsigned int *)a1, v3 - 2);
        v3 = (_QWORD *)*v3;
      }
      while ( v3 != a1[1] );
    }
    ACPI_ADD_TRIAGE_DUMP_DATA(a1[2], (PVOID)8);
  }
}
