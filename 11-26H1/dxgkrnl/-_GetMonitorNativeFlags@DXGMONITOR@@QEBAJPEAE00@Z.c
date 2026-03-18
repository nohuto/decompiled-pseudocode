/*
 * XREFs of ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1403C9028
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1402AD2E0 (DxgkGetAdapterDeviceDesc.c)
 *     ?MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z @ 0x1403C8F88 (-MonitorGetNativeFlags@@YAJPEAUHDXGMONITOR__@@PEAE11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetMonitorNativeFlags(
        DXGMONITOR *this,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        bool *a4)
{
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 468;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 469;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 470;
  }
  *a2 = *((_BYTE *)this + 176) >> 7;
  *a3 = *((_BYTE *)this + 177) & 1;
  *a4 = *(_QWORD *)(*((_QWORD *)this + 27) + 160LL) == 0LL;
  return 0LL;
}
