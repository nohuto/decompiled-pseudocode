/*
 * XREFs of RtlCopyDeviceMemory @ 0x14055978C
 * Callers:
 *     HalpPreserveNvsArea @ 0x1404F9E98 (HalpPreserveNvsArea.c)
 *     HalpAcpiCopyBiosTable @ 0x1405254AC (HalpAcpiCopyBiosTable.c)
 *     HalpRestoreNvsArea @ 0x140528F30 (HalpRestoreNvsArea.c)
 *     WmipGetSMBiosEventlog @ 0x1408229B8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSMBiosTableData @ 0x140AC4C90 (WmipGetSMBiosTableData.c)
 *     HaliQuerySystemInformation @ 0x140BED8E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 */

char *__fastcall RtlCopyDeviceMemory(char *a1, char *a2, size_t a3)
{
  char *v5; // rcx
  unsigned __int64 v6; // rax
  char *v7; // rcx

  if ( !a3 )
    return a1;
  v5 = a2;
  v6 = (unsigned __int64)a2;
  if ( a1 < a2 )
    v5 = a1;
  v7 = &v5[a3];
  if ( a1 >= a2 )
    v6 = (unsigned __int64)a1;
  if ( (unsigned __int64)v7 > v6 )
    __fastfail(5u);
  return (char *)RtlCopyVolatileMemory(a1, a2, a3);
}
