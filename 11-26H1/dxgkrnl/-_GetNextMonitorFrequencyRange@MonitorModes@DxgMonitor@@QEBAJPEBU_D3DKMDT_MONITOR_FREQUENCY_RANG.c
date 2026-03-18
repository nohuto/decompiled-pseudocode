/*
 * XREFs of ?_GetNextMonitorFrequencyRange@MonitorModes@DxgMonitor@@QEBAJPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1402DFB88
 * Callers:
 *     ?MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1402DFAF0 (-MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorFrequencyRange(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v3; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v4; // rcx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v6; // r8
  __int64 result; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v8; // rax

  v3 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)((char *)this + 176);
  v4 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)*((_QWORD *)this + 22);
  if ( a2 )
  {
    if ( v4 == v3 )
    {
LABEL_7:
      WdLogSingleEntry1(2LL);
      result = 3223192368LL;
      WdLogGlobalForLineNumber = 2901;
      return result;
    }
    v6 = a2 + 1;
    while ( v4 != v6 )
    {
      if ( v3 == v4 )
        goto LABEL_7;
      v4 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&v4->Origin;
    }
    v4 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&v6->Origin;
  }
  if ( v4 == v3 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = v4 - 1;
    if ( !v4 )
      v8 = 0LL;
  }
  if ( !v8 )
    return 1075708748LL;
  *a3 = v8;
  return 0LL;
}
