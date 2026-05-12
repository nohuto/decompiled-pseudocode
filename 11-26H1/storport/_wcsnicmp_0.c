/*
 * XREFs of _wcsnicmp_0 @ 0x14005D08D
 * Callers:
 *     PortGetKeepAliveTimeoutValue @ 0x1401B0EC4 (PortGetKeepAliveTimeoutValue.c)
 *     PortpReadDriverParameterEntry @ 0x1401B1130 (PortpReadDriverParameterEntry.c)
 *     PortpReadLinkTimeoutValue @ 0x1401B12F8 (PortpReadLinkTimeoutValue.c)
 *     PortGetBusyRetryCountValue @ 0x1401B70C0 (PortGetBusyRetryCountValue.c)
 *     PortGetIoTimeoutValue @ 0x1401BE4E8 (PortGetIoTimeoutValue.c)
 *     PortGetBusyPauseTimeValue @ 0x1401BE608 (PortGetBusyPauseTimeValue.c)
 *     PortGetIoLatencyCapValue @ 0x1401BE720 (PortGetIoLatencyCapValue.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
