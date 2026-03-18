/*
 * XREFs of RtlStringCbPrintfW @ 0x140031F60
 * Callers:
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x140031CF8 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhGetRegUsbClassFlags @ 0x140032188 (UsbhGetRegUsbClassFlags.c)
 *     UsbhGetPersistedUsbFlagsPath @ 0x140032614 (UsbhGetPersistedUsbFlagsPath.c)
 *     UsbhGetDeviceFlags @ 0x14005B0BC (UsbhGetDeviceFlags.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x14005DC8C (UsbhPdo_ReportPnPFailureProblem.c)
 *     UsbhBuildUxdDeviceKey @ 0x14005F52C (UsbhBuildUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x14005F704 (UsbhDeleteUxdPortSettings.c)
 *     UsbhGetUxdPortKey @ 0x14005FBEC (UsbhGetUxdPortKey.c)
 *     UsbhPropagateUxdState @ 0x14005FE94 (UsbhPropagateUxdState.c)
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
