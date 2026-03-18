/*
 * XREFs of ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140393C2C
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403937B0 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x14004B4D4 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140393FCC (-_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MO.c)
 *     ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140394130 (-_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_.c)
 *     ?_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403942CC (-_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsSupportedModeInternal(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5,
        int *a6)
{
  char v6; // r15
  __int64 v10; // r11
  __int64 v11; // r11
  __int64 v12; // rax
  int IsModeInPixelRateRange; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax

  v6 = a4;
  if ( a3 - 1 > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1582;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1583;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1584;
  }
  *a6 = 0;
  if ( a3 - 1 > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1207;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1208;
  }
  *a6 = 0;
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 == a1 + 128 || !v10 )
    goto LABEL_18;
  v11 = v10 - 96;
  while ( v11 )
  {
    if ( *(_DWORD *)(v11 + 84) == 5
      && DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
           a2,
           (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v11 + 8),
           v6) )
    {
      *a6 = 7;
      *a5 = 1;
      return 0LL;
    }
    v12 = *(_QWORD *)(v11 + 96);
    if ( v12 == a1 + 128 )
    {
LABEL_18:
      v11 = 0LL;
    }
    else
    {
      v11 = v12 - 96;
      if ( !v12 )
        v11 = 0LL;
    }
  }
  *a5 = 0;
  if ( *a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1612;
  }
  if ( !v6 )
  {
    IsModeInPixelRateRange = DxgMonitor::MonitorModes::_IsModeInPixelRateRange(a1, a2, a3, a5, a6);
    if ( IsModeInPixelRateRange < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1628;
      return (unsigned int)IsModeInPixelRateRange;
    }
    v15 = *a6;
    if ( !*a5 )
    {
      if ( !v15 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1638;
      }
      return 0LL;
    }
    if ( v15 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1644;
    }
  }
  LOBYTE(a4) = v6;
  IsModeInPixelRateRange = DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(a1, a2, a3, a4, a5, a6);
  if ( IsModeInPixelRateRange < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1657;
  }
  else
  {
    v16 = *a6;
    if ( *a5 )
    {
      if ( !v16 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1667;
      }
      return 0LL;
    }
    if ( v16 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1673;
    }
    IsModeInPixelRateRange = DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(a1, a2, a3, a5, a6);
    if ( IsModeInPixelRateRange >= 0 )
    {
      v17 = *a6;
      if ( *a5 )
      {
        if ( !v17 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1696;
        }
      }
      else
      {
        if ( v17 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1702;
        }
        *a5 = 0;
        *a6 = 1;
      }
      return 0LL;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1686;
  }
  return (unsigned int)IsModeInPixelRateRange;
}
