/*
 * XREFs of RtlStringCbPrintfW @ 0x14001D388
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x140017F18 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBMISC_GenerateControllerSuffix @ 0x140030358 (HUBMISC_GenerateControllerSuffix.c)
 *     HUBMISC_QueryKseDeviceFlags @ 0x140033308 (HUBMISC_QueryKseDeviceFlags.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x140086FF8 (HUBMISC_ReportPnPFailureProblem.c)
 * Callees:
 *     <none>
 */

NTSTATUS RtlStringCbPrintfW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rdi
  NTSTATUS v6; // ebx
  int v7; // eax
  NTSTATUS result; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, pszFormat);
  v3 = cbDest >> 1;
  if ( v3 && v3 <= 0x7FFFFFFF )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = _vsnwprintf(pszDest, v3 - 1, pszFormat, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      pszDest[v5] = 0;
      return -2147483643;
    }
    else if ( v7 == v5 )
    {
      pszDest[v5] = 0;
    }
    return v6;
  }
  else
  {
    result = -1073741811;
    if ( v3 )
      *pszDest = 0;
  }
  return result;
}
