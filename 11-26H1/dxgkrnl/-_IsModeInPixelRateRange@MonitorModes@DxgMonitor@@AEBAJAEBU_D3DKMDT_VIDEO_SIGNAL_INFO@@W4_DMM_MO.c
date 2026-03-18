/*
 * XREFs of ?_IsModeInPixelRateRange@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140393FCC
 * Callers:
 *     ?_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x140393C2C (-_IsSupportedModeInternal@MonitorModes@DxgMonitor@@AEBAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_M.c)
 * Callees:
 *     SupportedPixelRate @ 0x140394420 (SupportedPixelRate.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_IsModeInPixelRateRange(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _BYTE *a4,
        _DWORD *a5)
{
  __int64 v9; // rcx
  __int64 i; // rax
  __int64 v11; // rbx
  char v12; // al
  __int64 result; // rax

  if ( a3 - 1 > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1399;
  }
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1400;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1401;
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
      *a4 = 1;
      return 0LL;
    }
    if ( *(_DWORD *)(v11 + 36) == 2 )
      break;
  }
  v12 = SupportedPixelRate(a2, v11, a3);
  *a4 = v12;
  if ( v12 )
    return 0LL;
  if ( *(_DWORD *)v11 == 2 )
  {
    *a5 = 3;
    return 0LL;
  }
  if ( *(_DWORD *)v11 == 3 )
  {
    *a5 = 5;
    return 0LL;
  }
  WdLogSingleEntry1(2LL);
  result = 3223192348LL;
  WdLogGlobalForLineNumber = 1425;
  return result;
}
