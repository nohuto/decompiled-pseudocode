/*
 * XREFs of ?GetDriverMonitorNativeTimingOverride@KernelDriver@@UEBAJPEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14027E900
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetMonitorNativeTimingOverride @ 0x140255E44 (DpiGetMonitorNativeTimingOverride.c)
 */

__int64 __fastcall KernelDriver::GetDriverMonitorNativeTimingOverride(
        KernelDriver *this,
        struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    return DpiGetMonitorNativeTimingOverride(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 216LL), *((_DWORD *)this + 8), a2);
  WdLogSingleEntry1(2LL);
  result = 3221225664LL;
  WdLogGlobalForLineNumber = 60;
  return result;
}
