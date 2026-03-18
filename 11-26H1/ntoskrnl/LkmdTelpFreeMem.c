/*
 * XREFs of LkmdTelpFreeMem @ 0x1408AB95C
 * Callers:
 *     WheapReportLiveDump @ 0x1408497BC (WheapReportLiveDump.c)
 *     LkmdTelCreateReport @ 0x1408AB660 (LkmdTelCreateReport.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall LkmdTelpFreeMem(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x74614454u);
}
