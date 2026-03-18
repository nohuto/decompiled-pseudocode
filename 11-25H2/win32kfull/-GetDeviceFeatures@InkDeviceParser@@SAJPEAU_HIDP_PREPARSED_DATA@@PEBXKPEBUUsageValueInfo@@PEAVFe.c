/*
 * XREFs of ?GetDeviceFeatures@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEBXKPEBUUsageValueInfo@@PEAVFeatures@InkDevice@@@Z @ 0x1402EC2D4
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402EEF70 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEBXKPEAUUsageValue@@@Z @ 0x1402EC150 (-ExtractReportUsages@@YAJW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEBUUsageValueInfo@@IPEB.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceFeatures(
        struct _HIDP_PREPARSED_DATA *a1,
        CHAR *a2,
        ULONG a3,
        const struct UsageValueInfo *a4,
        struct InkDevice::Features *a5)
{
  NTSTATUS ReportUsages; // edx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  ULONG v11[9]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+64h] [rbp-24h]
  int v13; // [rsp+6Ch] [rbp-1Ch]
  int v14; // [rsp+74h] [rbp-14h]

  ReportUsages = ExtractReportUsages((enum _HIDP_REPORT_TYPE)a1, a1, a4, (__int64)a4, a2, a3, v11);
  if ( ReportUsages >= 0 )
  {
    v7 = (unsigned __int16)v12;
    *(_DWORD *)a5 = v11[1];
    *((_DWORD *)a5 + 1) = v11[3];
    *((_DWORD *)a5 + 2) = v11[5];
    *((_DWORD *)a5 + 3) = v11[7];
    v8 = HIWORD(v12);
    *((_DWORD *)a5 + 5) = v7;
    *((_DWORD *)a5 + 4) = v8;
    v9 = 1;
    *((_DWORD *)a5 + 7) = *((_BYTE *)a4 + 380) != 0 ? v13 : 0;
    if ( *((_BYTE *)a4 + 456) )
      v9 = v14;
    *((_DWORD *)a5 + 6) = v9;
  }
  return (unsigned int)ReportUsages;
}
