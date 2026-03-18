/*
 * XREFs of AcpiAddTriageAcpiGlobal @ 0x14005EFD0
 * Callers:
 *     AcpiDumpRoutine @ 0x14005FA80 (AcpiDumpRoutine.c)
 * Callees:
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EE44 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 *     AcpiAddTriageAcpiGpe @ 0x14005F334 (AcpiAddTriageAcpiGpe.c)
 *     AcpiAddTriageAcpiList @ 0x14005F718 (AcpiAddTriageAcpiList.c)
 *     AcpiAddTriageNSTree @ 0x14005F980 (AcpiAddTriageNSTree.c)
 */

void __fastcall AcpiAddTriageAcpiGlobal(void **a1)
{
  _QWORD *v2; // rbx
  _QWORD *i; // rbx
  void *v4; // rcx

  ACPI_ADD_TRIAGE_DUMP_DATA(a1, (PVOID)0x2A8);
  ACPI_ADD_TRIAGE_DUMP_DATA(*a1, (PVOID)0x798);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[1], (PVOID)0x3F8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[2], (PVOID)0x88);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[3], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[4], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[5], (PVOID)8);
  AcpiAddTriageAcpiList((ULONG)a1[6], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[7], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[8], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[9], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[10], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[11], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[12], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[13], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[14], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[15], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[16], (PVOID)0x108);
  AcpiAddTriageAcpiList((ULONG)a1[17], (PVOID)0x108);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[19], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[20], (PVOID)8);
  AcpiAddTriageAcpiList((ULONG)a1[21], (PVOID)0x88);
  AcpiAddTriageAcpiList((ULONG)a1[22], (PVOID)0x88);
  AcpiAddTriageAcpiList((ULONG)a1[23], (PVOID)0x88);
  AcpiAddTriageAcpiList((ULONG)a1[24], (PVOID)0x88);
  AcpiAddTriageAcpiList((ULONG)a1[25], (PVOID)0x88);
  AcpiAddTriageAcpiList((ULONG)a1[26], (PVOID)0x88);
  AcpiAddTriageAcpiList((ULONG)a1[27], (PVOID)0x88);
  AcpiAddTriageAcpiList((ULONG)a1[28], (PVOID)0x88);
  AcpiAddTriageAcpiList((ULONG)a1[29], (PVOID)0x88);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[30], (PVOID)1);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[31], (PVOID)8);
  AcpiAddTriageAcpiList((ULONG)a1[32], (PVOID)0x20);
  AcpiAddTriageAcpiList((ULONG)a1[33], (PVOID)0x20);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[34], (PVOID)1);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[35], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[36], (PVOID)1);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[37], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[38], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[39], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[40], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[41], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[43], (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[44], (PVOID)8);
  v2 = a1[44];
  if ( MmIsAddressValid(v2) )
  {
    for ( i = (_QWORD *)*v2; i; i = (_QWORD *)i[1] )
    {
      ACPI_ADD_TRIAGE_DUMP_DATA(i, (PVOID)0x918);
      if ( MmIsAddressValid(i) )
      {
        v4 = (void *)i[7];
        if ( v4 )
        {
          ACPI_ADD_TRIAGE_DUMP_DATA(v4, (PVOID)0x10);
          AcpiAddTriageNSTree(i[7]);
        }
      }
    }
  }
  AcpiAddTriageAcpiGpe(a1);
  ACPI_ADD_TRIAGE_DUMP_DATA(a1[84], (PVOID)0xC00);
}
