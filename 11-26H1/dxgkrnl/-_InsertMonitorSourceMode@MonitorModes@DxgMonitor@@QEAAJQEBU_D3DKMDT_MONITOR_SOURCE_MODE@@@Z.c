/*
 * XREFs of ?_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403CC240
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1403CC030 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x140049E14 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_InsertMonitorSourceMode(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  int v4; // eax
  char *v5; // rsi
  char *i; // rcx
  char *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int128 v10; // xmm1
  char *v11; // rax
  char **v12; // rcx
  __int64 result; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2269;
  }
  v4 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(&a2->VideoSignalInfo);
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v4);
    WdLogGlobalForLineNumber = 2280;
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    WdLogSingleEntry1(2LL);
    result = 3223192330LL;
    WdLogGlobalForLineNumber = 2294;
  }
  else
  {
    v5 = (char *)this + 128;
    for ( i = (char *)*((_QWORD *)this + 16); ; i = (char *)*((_QWORD *)v7 + 12) )
    {
      if ( i == v5 )
      {
        v7 = 0LL;
      }
      else
      {
        v7 = i - 96;
        if ( !i )
          v7 = 0LL;
      }
      if ( !v7 )
        break;
      if ( a2->Id == *(_DWORD *)v7 )
      {
        WdLogSingleEntry2(2LL, a2, a2->Id);
        result = 3223192340LL;
        WdLogGlobalForLineNumber = 2311;
        return result;
      }
    }
    v8 = operator new(0x78uLL, 0x4D677844u, 256LL);
    v9 = v8;
    if ( v8 )
    {
      *(_OWORD *)v8 = *(_OWORD *)&a2->Id;
      *(_OWORD *)(v8 + 16) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
      *(_OWORD *)(v8 + 32) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
      *(_OWORD *)(v8 + 48) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
      *(_OWORD *)(v8 + 64) = *(_OWORD *)&a2->ColorBasis;
      v10 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
      *(_DWORD *)(v8 + 112) = 6;
      *(_OWORD *)(v8 + 80) = v10;
      *(_DWORD *)(v8 + 84) = 5;
      v11 = (char *)(v8 + 96);
      ++*((_DWORD *)this + 30);
      v12 = (char **)*((_QWORD *)this + 17);
      if ( *v12 != v5 )
        __fastfail(3u);
      *(_QWORD *)v11 = v5;
      *((_QWORD *)v11 + 1) = v12;
      *v12 = v11;
      *((_QWORD *)this + 17) = v11;
      if ( *(_DWORD *)(v9 + 88) == 1 )
      {
        WdLogSingleEntry1(7LL);
        WdLogGlobalForLineNumber = 2348;
        *((_QWORD *)this + 18) = v9;
      }
      return 0LL;
    }
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 2329;
  }
  return result;
}
