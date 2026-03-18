/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x14027BBDC
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x140271870 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorFreqRangeEnumerator(
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ****this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v6; // rbx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v7; // rax
  __int64 v8; // rdx
  _QWORD **v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD **v12; // rax
  _OWORD *v13; // rdi
  __int64 v14; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v15; // rcx
  __int64 result; // rax
  __int128 v17; // xmm0
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***v18; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***v19; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2727;
  }
  if ( !a3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2728;
  }
  v6 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)(this + 24);
  if ( !a2 )
    goto LABEL_26;
  v7 = *v6;
  if ( *v6 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v6 )
    goto LABEL_26;
  while ( v7 != &a2[1] )
  {
    if ( v6 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v7 )
      goto LABEL_26;
    v7 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&v7->Origin;
  }
  v8 = *(_QWORD *)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v9 = this + 22;
  if ( !v8 || (v10 = *v9, *v9 == v9) )
  {
LABEL_26:
    WdLogSingleEntry2(2LL, a2, this);
    result = 3223192368LL;
    WdLogGlobalForLineNumber = 2745;
  }
  else
  {
    v11 = (_QWORD *)(v8 + 48);
    while ( v10 != v11 )
    {
      if ( v9 == v10 )
        goto LABEL_26;
      v10 = (_QWORD *)*v10;
    }
    v12 = (_QWORD **)*v11;
    if ( (_QWORD **)*v11 == v9 )
      goto LABEL_25;
    v13 = v12 - 6;
    if ( !v12 )
      v13 = 0LL;
    if ( !v13 )
    {
LABEL_25:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v11) + 24) = this;
      result = 1075708748LL;
      WdLogGlobalForLineNumber = 2759;
    }
    else
    {
      v14 = operator new(0x48uLL, 0x4D677844u, 256LL);
      v15 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v14;
      if ( v14 )
      {
        *(_OWORD *)v14 = *v13;
        *(_OWORD *)(v14 + 16) = v13[1];
        v17 = v13[2];
        *(_QWORD *)(v14 + 64) = v13;
        *(_OWORD *)(v14 + 32) = v17;
        v18 = this[25];
        v19 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***)(v14 + 48);
        if ( *v18 != v6 )
          __fastfail(3u);
        *v19 = v6;
        v19[1] = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v18;
        *v18 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v19;
        this[25] = v19;
        result = 0LL;
        *a3 = v15;
      }
      else
      {
        WdLogSingleEntry0(2LL);
        result = 3221225495LL;
        WdLogGlobalForLineNumber = 2777;
      }
    }
  }
  return result;
}
