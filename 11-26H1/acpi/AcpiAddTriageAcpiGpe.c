/*
 * XREFs of AcpiAddTriageAcpiGpe @ 0x14005F334
 * Callers:
 *     AcpiAddTriageAcpiGlobal @ 0x14005EFD0 (AcpiAddTriageAcpiGlobal.c)
 * Callees:
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EE44 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 */

void __fastcall AcpiAddTriageAcpiGpe(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // r14
  void *v4; // rdi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void **v16; // rax
  char *v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rdi
  char *v20; // rcx
  void *v21; // rcx

  ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 360), (PVOID)1);
  ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 368), (PVOID)1);
  ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 376), (PVOID)1);
  ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 392), (PVOID)8);
  ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 400), (PVOID)8);
  v2 = *(void **)(a1 + 416);
  v3 = (unsigned int)GpeVectorTableSize;
  v4 = (void *)*((unsigned __int16 *)AcpiInformation + 51);
  if ( v2 && MmIsAddressValid(v2) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 416), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 416), (PVOID)(unsigned int)v4);
  }
  v5 = *(void **)(a1 + 424);
  if ( v5 && MmIsAddressValid(v5) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 424), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 424), v4);
  }
  v6 = *(void **)(a1 + 432);
  if ( v6 && MmIsAddressValid(v6) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 432), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 432), v4);
  }
  v7 = *(void **)(a1 + 440);
  if ( v7 && MmIsAddressValid(v7) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 440), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 440), v4);
  }
  v8 = *(void **)(a1 + 448);
  if ( v8 && MmIsAddressValid(v8) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 448), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 448), v4);
  }
  v9 = *(void **)(a1 + 456);
  if ( v9 && MmIsAddressValid(v9) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 456), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 456), v4);
  }
  v10 = *(void **)(a1 + 464);
  if ( v10 && MmIsAddressValid(v10) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 464), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 464), v4);
  }
  v11 = *(void **)(a1 + 472);
  if ( v11 && MmIsAddressValid(v11) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 472), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 472), v4);
  }
  v12 = *(void **)(a1 + 480);
  if ( v12 && MmIsAddressValid(v12) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 480), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 480), v4);
  }
  v13 = *(void **)(a1 + 488);
  if ( v13 && MmIsAddressValid(v13) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 488), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 488), v4);
  }
  v14 = *(void **)(a1 + 496);
  if ( v14 && MmIsAddressValid(v14) )
  {
    ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 496), (PVOID)8);
    ACPI_ADD_TRIAGE_DUMP_DATA(**(void ***)(a1 + 496), (PVOID)(unsigned int)(8 * (_DWORD)v4));
  }
  v15 = *(void **)(a1 + 384);
  if ( v15 )
  {
    if ( MmIsAddressValid(v15) )
    {
      ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 384), (PVOID)8);
      v16 = *(void ***)(a1 + 384);
      v17 = (char *)*v16;
      if ( *v16 )
      {
        v18 = v3;
        ACPI_ADD_TRIAGE_DUMP_DATA(*v16, (PVOID)(16 * v3));
        if ( (_DWORD)v3 )
        {
          v19 = 0LL;
          do
          {
            v20 = &v17[v19 + *(unsigned int *)(a1 + 644)];
            if ( v20 )
              ACPI_ADD_TRIAGE_DUMP_DATA(v20, (PVOID)*(unsigned int *)(a1 + 648));
            v19 += 16LL;
            --v18;
          }
          while ( v18 );
        }
      }
    }
  }
  v21 = *(void **)(a1 + 672);
  if ( v21 )
  {
    if ( MmIsAddressValid(v21) )
      ACPI_ADD_TRIAGE_DUMP_DATA(*(void **)(a1 + 672), (PVOID)0xC00);
  }
}
