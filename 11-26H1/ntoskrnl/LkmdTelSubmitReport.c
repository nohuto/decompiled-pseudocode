/*
 * XREFs of LkmdTelSubmitReport @ 0x1408B1CC4
 * Callers:
 *     WheapReportLiveDump @ 0x14084FACC (WheapReportLiveDump.c)
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     LkmdTelpWriteDumpFile @ 0x1408B1DC0 (LkmdTelpWriteDumpFile.c)
 */

__int64 __fastcall LkmdTelSubmitReport(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  _QWORD *v4; // rdi
  int v5; // eax
  int v6; // eax
  int v7; // eax

  v2 = LkmdTelpWriteDumpFile();
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = (_QWORD *)(a1 + 96);
    v5 = WerLiveKernelSubmitReport(*v4, 0LL);
    v3 = v5;
    if ( v5 < 0 )
      DbgPrintEx(5u, 0, "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelSubmitReport failed, status 0x%X\n", v5);
  }
  else
  {
    DbgPrintEx(5u, 0, "LKMDTEL: LkmdTelSubmitReport: LkmdTelpWriteDumpFile failed, status 0x%X\n", v2);
    v4 = (_QWORD *)(a1 + 96);
  }
  if ( *v4 )
  {
    if ( v3 < 0 )
    {
      v6 = WerLiveKernelCancelReport();
      if ( v6 < 0 )
        DbgPrintEx(5u, 1u, "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelCancelReport failed, status 0x%X\n", v6);
    }
    v7 = WerLiveKernelCloseHandle(*v4);
    if ( v7 < 0 )
      DbgPrintEx(5u, 1u, "LKMDTEL: LkmdTelSubmitReport: WerLiveKernelCloseHandle failed, status 0x%X\n", v7);
    *v4 = 0LL;
  }
  return (unsigned int)v3;
}
