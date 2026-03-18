/*
 * XREFs of ?_IsModeInActiveSizeRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1403942CC
 * Callers:
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140393C2C (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     SupportedVideoSignal @ 0x14027B764 (SupportedVideoSignal.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeInActiveSizeRange(
        __int64 a1,
        _DWORD *a2,
        int a3,
        char *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  __int64 i; // rax
  __int64 v11; // rbx
  __int64 result; // rax
  char v13; // al

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1490;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1491;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1492;
  }
  v9 = a1 + 176;
  *a5 = 0;
  for ( i = *(_QWORD *)(a1 + 176); ; i = *(_QWORD *)(v11 + 48) )
  {
    if ( i == v9 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = i - 48;
      if ( !i )
        v11 = 0LL;
    }
    if ( !v11 )
    {
      *a4 = 0;
      return 0LL;
    }
    if ( *(_DWORD *)(v11 + 36) == 1 )
      break;
  }
  v13 = SupportedVideoSignal(a2, (unsigned int *)v11, a3);
  *a4 = v13;
  if ( !v13 )
    return 0LL;
  if ( *(_DWORD *)v11 == 4 )
  {
    *a5 = 8;
    return 0LL;
  }
  WdLogSingleEntry1(2LL);
  result = 3223192348LL;
  WdLogGlobalForLineNumber = 1512;
  return result;
}
