/*
 * XREFs of DxgkMiracastQueryMiracastStatus @ 0x14024D658
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1401B74E0 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x140192584 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastStatus(const WCHAR *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 DeviceContextFromName; // rax
  __int64 v6; // rdi
  __int64 result; // rax

  DeviceContextFromName = DpiMiracastGetDeviceContextFromName(a1);
  v6 = DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
    *a2 = *(_DWORD *)(v6 + 408);
    *a3 = *(_DWORD *)(v6 + 416);
    *(_QWORD *)(v6 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v6 + 32);
    DpiMiracastReleaseMiracastDeviceContext((int *)v6, v6);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    result = 3221226021LL;
    WdLogGlobalForLineNumber = 4798;
    *a3 = -2147483642;
  }
  return result;
}
