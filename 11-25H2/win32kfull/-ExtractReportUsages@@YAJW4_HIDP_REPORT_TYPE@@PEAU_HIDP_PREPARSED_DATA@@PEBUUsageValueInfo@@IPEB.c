/*
 * XREFs of ?ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEBXKPEAUUsageValue@@@Z @ 0x1402EC150
 * Callers:
 *     ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1402EC2D4 (-GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFe.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ExtractReportUsages(
        enum _HIDP_REPORT_TYPE a1,
        struct _HIDP_PREPARSED_DATA *a2,
        const struct UsageValueInfo *a3,
        __int64 a4,
        CHAR *Report,
        ULONG ReportLength,
        ULONG *a7)
{
  USHORT *v7; // rbx
  NTSTATUS result; // eax
  __int64 v9; // rsi
  ULONG *v10; // rdi

  v7 = (USHORT *)((char *)a3 + 10);
  result = 0;
  v9 = 0LL;
  v10 = a7;
  do
  {
    *(_BYTE *)v10 = 0;
    if ( *((_BYTE *)v7 - 10) )
    {
      result = HidP_GetUsageValue(HidP_Feature, *(v7 - 3), *v7, v7[25], &a7[2 * v9 + 1], a2, Report, ReportLength);
      if ( result < 0 )
        return result;
      *(_BYTE *)v10 = 1;
    }
    v9 = (unsigned int)(v9 + 1);
    v7 += 38;
    v10 += 2;
  }
  while ( (unsigned int)v9 < 7 );
  return result;
}
