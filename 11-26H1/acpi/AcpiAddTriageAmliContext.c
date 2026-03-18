/*
 * XREFs of AcpiAddTriageAmliContext @ 0x14005F7A8
 * Callers:
 *     AcpiAddTriageAmliGlobal @ 0x14005F8DC (AcpiAddTriageAmliGlobal.c)
 * Callees:
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EE44 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 *     AcpiAddTriageNSTree @ 0x14005F980 (AcpiAddTriageNSTree.c)
 */

void __fastcall AcpiAddTriageAmliContext(unsigned int *a1, _QWORD *a2)
{
  _DWORD *i; // rbx
  __int64 v5; // rax
  __int64 j; // rdi
  void **v7; // rdi
  __int64 v8; // rbp
  void *v9; // rdx

  if ( MmIsAddressValid(a1) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(a2, (PVOID)a1[9]);
    for ( i = (_DWORD *)a2[52]; i && MmIsAddressValid(i); i = (_DWORD *)*((_QWORD *)i + 1) )
    {
      if ( *i == 1280065859 )
      {
        ACPI_ADD_TRIAGE_DUMP_DATA(i, (PVOID)a1[15]);
        AcpiAddTriageNSTree(*((_QWORD *)i + 6) + 120LL);
        v5 = (unsigned int)i[15];
        if ( (_DWORD)v5 )
        {
          ACPI_ADD_TRIAGE_DUMP_DATA(*((void **)i + 8), (PVOID)(40 * v5));
          for ( j = 0LL; (unsigned int)j < i[15]; j = (unsigned int)(j + 1) )
          {
            if ( MmIsAddressValid((PVOID)(*((_QWORD *)i + 8) + 40 * j)) )
              ACPI_ADD_TRIAGE_DUMP_DATA(
                *(void **)(*((_QWORD *)i + 8) + 40 * j + 32),
                (PVOID)*(unsigned int *)(*((_QWORD *)i + 8) + 40 * j + 24));
          }
        }
        v7 = (void **)(i + 26);
        v8 = 8LL;
        do
        {
          ACPI_ADD_TRIAGE_DUMP_DATA(*v7, (PVOID)*((unsigned int *)v7 - 2));
          v7 += 5;
          --v8;
        }
        while ( v8 );
      }
      else
      {
        if ( *i == 1347371859 )
          v9 = (void *)a1[14];
        else
          v9 = (void *)a1[11];
        ACPI_ADD_TRIAGE_DUMP_DATA(i, v9);
      }
    }
  }
}
