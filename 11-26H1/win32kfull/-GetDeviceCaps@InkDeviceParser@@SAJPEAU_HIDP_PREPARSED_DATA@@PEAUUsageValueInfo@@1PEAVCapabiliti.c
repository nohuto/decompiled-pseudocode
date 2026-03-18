/*
 * XREFs of ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1402FBCEC
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FE680 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?ValidateReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageDescriptor@@IPEAUUsageValueInfo@@@Z @ 0x1402FBED0 (-ValidateReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageDescriptor@@IP.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceCaps(
        PHIDP_PREPARSED_DATA PreparsedData,
        struct UsageValueInfo *a2,
        struct UsageValueInfo *a3,
        struct InkDevice::Capabilities *a4)
{
  int v8; // r8d

  v8 = ValidateReportUsages(
         HidP_Feature,
         PreparsedData,
         (const struct UsageDescriptor *)&InkDeviceParser::DeviceFeaturesReport::Usages,
         7u,
         a2);
  if ( v8 >= 0 )
  {
    *(_BYTE *)a4 = *((_BYTE *)a2 + 6);
    *((_BYTE *)a4 + 2) = *((_BYTE *)a2 + 380);
    *((_BYTE *)a4 + 1) = *((_BYTE *)a2 + 456);
    v8 = ValidateReportUsages(
           HidP_Output,
           PreparsedData,
           (const struct UsageDescriptor *)&InkDeviceParser::PayloadReport::Usages,
           1u,
           a3);
    if ( v8 >= 0 )
    {
      if ( *((_WORD *)a3 + 11) == 8 )
      {
        *((_BYTE *)a4 + 4) = *((_BYTE *)a3 + 6);
        *((_DWORD *)a4 + 2) = *((unsigned __int16 *)a3 + 12);
      }
      else
      {
        return (unsigned int)-1073741762;
      }
    }
  }
  return (unsigned int)v8;
}
