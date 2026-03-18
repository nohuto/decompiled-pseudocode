/*
 * XREFs of ?MonitorAcquireMonitorPendingEvent@@YAJPEAXPEAPEAU_MONITOR_PENDING_EVENT@@@Z @ 0x1403E7D00
 * Callers:
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E5904 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140410DCC (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(DXGADAPTER *this, struct _MONITOR_PENDING_EVENT **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rax
  struct _MONITOR_PENDING_EVENT *v8; // rcx
  __int64 result; // rax

  v4 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 4834;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4857;
  }
  v5 = *((_QWORD *)this + 395);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 4861;
    return result;
  }
  v6 = *(_QWORD *)(v5 + 112);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4874;
    return 3221225485LL;
  }
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(*(ADAPTER_DISPLAY **)(v6 + 24)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 839;
  }
  v7 = *(_QWORD *)(v6 + 688);
  if ( v7 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 848;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 688) + 16LL));
  }
  v8 = *(struct _MONITOR_PENDING_EVENT **)(v6 + 688);
  *a2 = v8;
  if ( !v8 )
    return (unsigned int)-1073741823;
  return v4;
}
