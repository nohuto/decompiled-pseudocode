/*
 * XREFs of AcpiAddTriageNSTree @ 0x14005F980
 * Callers:
 *     AcpiAddTriageAcpiDeviceExtension @ 0x14005EE94 (AcpiAddTriageAcpiDeviceExtension.c)
 *     AcpiAddTriageAcpiGlobal @ 0x14005EFD0 (AcpiAddTriageAcpiGlobal.c)
 *     AcpiAddTriageAmliContext @ 0x14005F7A8 (AcpiAddTriageAmliContext.c)
 * Callees:
 *     AMLIGetParentNoLock @ 0x14001E8F4 (AMLIGetParentNoLock.c)
 *     AMLIGetNextSiblingNoLock @ 0x14003DBD4 (AMLIGetNextSiblingNoLock.c)
 *     AMLIGetFirstChildNoLock @ 0x14003DC58 (AMLIGetFirstChildNoLock.c)
 *     ACPI_ADD_TRIAGE_DUMP_DATA @ 0x14005EE44 (ACPI_ADD_TRIAGE_DUMP_DATA.c)
 */

char __fastcall AcpiAddTriageNSTree(void **a1)
{
  void **v1; // rbx
  __int64 v2; // rax
  void *v3; // rdi
  unsigned int v4; // eax
  void **i; // rax
  void *v6; // rsi
  unsigned int v7; // eax
  __int64 **v8; // rdi

  v1 = a1;
  LOBYTE(v2) = MmIsAddressValid(a1);
  if ( (_BYTE)v2 && v1 )
  {
    do
    {
      v3 = *v1;
      ACPI_ADD_TRIAGE_DUMP_DATA(*v1, (PVOID)0xA0);
      if ( MmIsAddressValid(v3) )
      {
        v4 = *((_DWORD *)v3 + 22);
        if ( v4 )
          ACPI_ADD_TRIAGE_DUMP_DATA(*((void **)v3 + 12), (PVOID)v4);
      }
      for ( i = (void **)AMLIGetFirstChildNoLock(v1); ; i = (void **)AMLIGetNextSiblingNoLock(v8) )
      {
        v8 = (__int64 **)i;
        if ( !i )
          break;
        v6 = *i;
        ACPI_ADD_TRIAGE_DUMP_DATA(*i, (PVOID)0xA0);
        if ( MmIsAddressValid(v6) )
        {
          v7 = *((_DWORD *)v6 + 22);
          if ( v7 )
            ACPI_ADD_TRIAGE_DUMP_DATA(*((void **)v6 + 12), (PVOID)v7);
        }
      }
      v2 = AMLIGetParentNoLock((__int64)v1);
      v1 = (void **)v2;
    }
    while ( v2 );
  }
  return v2;
}
