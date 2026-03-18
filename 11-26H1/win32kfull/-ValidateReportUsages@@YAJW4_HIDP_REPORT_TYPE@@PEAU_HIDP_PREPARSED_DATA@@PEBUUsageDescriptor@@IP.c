/*
 * XREFs of ?ValidateReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageDescriptor@@IPEAUUsageValueInfo@@@Z @ 0x1402FBED0
 * Callers:
 *     ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1402FBCEC (-GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabiliti.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ValidateReportUsages(
        HIDP_REPORT_TYPE ReportType,
        PHIDP_PREPARSED_DATA PreparsedData,
        const struct UsageDescriptor *a3,
        unsigned int a4,
        struct UsageValueInfo *a5)
{
  struct UsageValueInfo *v5; // rbx
  NTSTATUS result; // eax
  __int64 i; // rsi
  __int64 v12; // rdi
  USHORT ValueCapsLength; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  result = 0;
  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    ValueCapsLength = 1;
    v12 = 76LL * (unsigned int)i;
    result = HidP_GetSpecificValueCaps(
               ReportType,
               *((_WORD *)a3 + 3 * i),
               0,
               *((_WORD *)a3 + 3 * i + 1),
               (PHIDP_VALUE_CAPS)((char *)v5 + v12 + 4),
               &ValueCapsLength,
               PreparsedData);
    if ( result < 0 )
    {
      *((_BYTE *)v5 + v12) = 0;
      if ( *((_BYTE *)a3 + 6 * i + 4) )
        return result;
      result = 0;
    }
    else
    {
      *((_BYTE *)v5 + v12) = 1;
      if ( *((_BYTE *)v5 + v12 + 6) != *((_BYTE *)v5 + 6) )
      {
        if ( *((_BYTE *)a3 + 6 * i + 4) )
          return -1073741762;
        *((_BYTE *)v5 + v12) = 0;
      }
    }
  }
  return result;
}
