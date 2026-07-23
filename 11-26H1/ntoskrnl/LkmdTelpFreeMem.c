/*
 * XREFs of LkmdTelpFreeMem @ 0x1408B1DA0
 * Callers:
 *     WheapReportLiveDump @ 0x14084FACC (WheapReportLiveDump.c)
 *     LkmdTelCreateReport @ 0x1408B1AA4 (LkmdTelCreateReport.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall LkmdTelpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
