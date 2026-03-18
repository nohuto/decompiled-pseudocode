/*
 * XREFs of AcpiAddTriageAcpiList @ 0x14005F718
 * Callers:
 *     AcpiAddTriageAcpiGlobal @ 0x14005EFD0 (AcpiAddTriageAcpiGlobal.c)
 * Callees:
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EE44 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall AcpiAddTriageAcpiList(_QWORD **MaxDataSize, PVOID Address, void (__fastcall *a3)(_QWORD *))
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rsi
  _QWORD *i; // rbx

  v4 = (unsigned int)Address;
  if ( MmIsAddressValid(MaxDataSize) )
  {
    v6 = v4;
    ACPI_ADD_TRIAGE_DUMP_DATA(MaxDataSize, (PVOID)v4);
    for ( i = *MaxDataSize; i != MaxDataSize && MmIsAddressValid(i); i = (_QWORD *)*i )
    {
      ACPI_ADD_TRIAGE_DUMP_DATA(i, (PVOID)v6);
      if ( a3 )
        a3(i);
    }
  }
}
