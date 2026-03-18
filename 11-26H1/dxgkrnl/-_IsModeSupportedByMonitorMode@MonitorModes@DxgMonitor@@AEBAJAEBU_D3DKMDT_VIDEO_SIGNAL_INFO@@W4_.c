/*
 * XREFs of ?_IsModeSupportedByMonitorMode@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140394130
 * Callers:
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140393C2C (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x14004B4D4 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x140050A60 (-GdiHasNoGreaterFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeSupportedByMonitorMode(
        __int64 a1,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        int a3,
        char a4,
        bool *a5,
        _DWORD *a6)
{
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rbx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v13; // rdx
  bool v14; // al
  __int64 v15; // rax
  __int64 result; // rax
  int v17; // eax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1290;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1291;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1292;
  }
  v10 = a1 + 128;
  *a6 = 0;
  v11 = *(_QWORD *)(a1 + 128);
  if ( v11 == v10 || !v11 )
    goto LABEL_16;
  v12 = v11 - 96;
  while ( 1 )
  {
    if ( !v12 )
    {
      *a5 = 0;
      return 0LL;
    }
    if ( *(_DWORD *)(v12 + 84) != 5 )
    {
      v13 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 8);
      v14 = a3 == 2
          ? DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(a2, v13, a4)
          : DMMVIDEOSIGNALMODE::GdiHasNoGreaterFrequencyRequirements(a2, v13);
      *a5 = v14;
      if ( v14 )
        break;
    }
    v15 = *(_QWORD *)(v12 + 96);
    if ( v15 == v10 )
    {
LABEL_16:
      v12 = 0LL;
    }
    else
    {
      v12 = v15 - 96;
      if ( !v15 )
        v12 = 0LL;
    }
  }
  v17 = *(_DWORD *)(v12 + 84);
  switch ( v17 )
  {
    case 2:
      *a6 = 2;
      return 0LL;
    case 3:
      *a6 = 4;
      return 0LL;
    case 1:
      *a6 = 6;
      return 0LL;
  }
  WdLogSingleEntry1(2LL);
  result = 3223192354LL;
  WdLogGlobalForLineNumber = 1334;
  return result;
}
