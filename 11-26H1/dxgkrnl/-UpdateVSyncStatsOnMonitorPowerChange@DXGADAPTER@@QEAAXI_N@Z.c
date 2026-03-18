/*
 * XREFs of ?UpdateVSyncStatsOnMonitorPowerChange@DXGADAPTER@@QEAAXI_N@Z @ 0x140061E48
 * Callers:
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z @ 0x140061F18 (-MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::UpdateVSyncStatsOnMonitorPowerChange(DXGADAPTER *this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v3; // eax
  __int64 v5; // rdi
  int v6; // edx
  int v7; // r8d

  v3 = *((_DWORD *)this + 474);
  if ( a2 < v3 )
  {
    VSYNC_TIME_STATS::MonitorPowerStateChange(
      *((_QWORD *)this + 557) + 112LL * ((*((_DWORD *)this + 754) & 0x10) != 0 ? a2 : 0),
      (a3 ^ 1u) + 1);
  }
  else
  {
    v5 = a2;
    WdLogSingleEntry2(2LL, a2, v3);
    WdLogGlobalForLineNumber = 2531;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v6,
          v7,
          0LL,
          0,
          -1,
          (__int64)L"Invalid VidPnSourceId:%u. Should be less than :%u",
          v5,
          *((unsigned int *)this + 474),
          0LL,
          0LL,
          0LL);
    }
  }
}
