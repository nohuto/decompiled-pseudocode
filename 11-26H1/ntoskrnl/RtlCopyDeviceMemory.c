/*
 * XREFs of RtlCopyDeviceMemory @ 0x14055BC1C
 * Callers:
 *     HalpPreserveNvsArea @ 0x1404F34A8 (HalpPreserveNvsArea.c)
 *     HalpAcpiCopyBiosTable @ 0x140527B1C (HalpAcpiCopyBiosTable.c)
 *     HalpRestoreNvsArea @ 0x14052B520 (HalpRestoreNvsArea.c)
 *     WmipGetSMBiosEventlog @ 0x140828BC8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSMBiosTableData @ 0x140AC6900 (WmipGetSMBiosTableData.c)
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
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
