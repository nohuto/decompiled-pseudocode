/*
 * XREFs of StringCbPrintfW @ 0x18002064C
 * Callers:
 *     CrmStateMonitorSystemDiskUsageIdleTimeGet @ 0x18001F830 (CrmStateMonitorSystemDiskUsageIdleTimeGet.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x18001FD00 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageIndexGet @ 0x180077098 (CrmStateMonitorSystemDiskUsageIndexGet.c)
 *     RtlpGetVolumeHandle @ 0x1800982C8 (RtlpGetVolumeHandle.c)
 *     RtlpQueryDiskSpacePolicy @ 0x1800983FC (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

HRESULT StringCbPrintfW(STRSAFE_LPWSTR pszDest, size_t cbDest, STRSAFE_LPCWSTR pszFormat, ...)
{
  size_t v3; // rdx
  unsigned __int64 v5; // rdi
  HRESULT v6; // ebx
  int v7; // eax
  HRESULT result; // eax
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
      return -2147024774;
    }
    else if ( v7 == v5 )
    {
      pszDest[v5] = 0;
    }
    return v6;
  }
  else
  {
    result = -2147024809;
    if ( v3 )
      *pszDest = 0;
  }
  return result;
}
