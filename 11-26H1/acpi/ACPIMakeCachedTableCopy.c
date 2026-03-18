/*
 * XREFs of ACPIMakeCachedTableCopy @ 0x140068864
 * Callers:
 *     ACPIRegDumpAcpiTables @ 0x1400DBB08 (ACPIRegDumpAcpiTables.c)
 * Callees:
 *     RtlCopyDeviceMemory @ 0x140055E90 (RtlCopyDeviceMemory.c)
 */

char __fastcall ACPIMakeCachedTableCopy(PVOID *a1, size_t *a2, char *a3, unsigned int a4)
{
  char *Pool2; // rax
  size_t v6; // rbx

  Pool2 = (char *)*a1;
  v6 = a4;
  if ( *a2 >= a4 )
    goto LABEL_7;
  if ( Pool2 )
    ExFreePoolWithTag(*a1, 0);
  Pool2 = (char *)ExAllocatePool2(256LL, v6, 1768973121LL);
  if ( Pool2 )
  {
    *a1 = Pool2;
    *a2 = v6;
LABEL_7:
    RtlCopyDeviceMemory(Pool2, a3, v6);
    LOBYTE(Pool2) = 1;
    return (char)Pool2;
  }
  *a1 = 0LL;
  *a2 = 0LL;
  return (char)Pool2;
}
