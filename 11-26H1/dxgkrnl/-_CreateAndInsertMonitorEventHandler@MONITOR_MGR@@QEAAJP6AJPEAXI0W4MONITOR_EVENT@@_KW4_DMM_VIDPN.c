/*
 * XREFs of ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x140273D34
 * Callers:
 *     ?MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z1PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x14026F918 (-MonitorRegisterMonitorEventCallback@@YAJPEAVADAPTER_DISPLAY@@P6AJPEAXI1W4MONITOR_EVENT@@_KW4_DM.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
        MONITOR_MGR *this,
        int (__high *a2)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *),
        void *a3,
        struct HDXGMONITOREVENT__ **a4)
{
  __int64 v6; // rbx
  __int64 result; // rax
  MONITOR_MGR **v8; // rcx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3225;
  }
  *a4 = 0LL;
  v6 = operator new(0x20uLL, 0x4D677844u, 256LL);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 16) = &VIDPN_MGR::_MonitorEventHandler;
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v9, (MONITOR_MGR *)((char *)this + 152));
    v8 = (MONITOR_MGR **)*((_QWORD *)this + 10);
    if ( *v8 != (MONITOR_MGR *)((char *)this + 72) )
      __fastfail(3u);
    *(_QWORD *)(v6 + 8) = v8;
    *(_QWORD *)v6 = (char *)this + 72;
    *v8 = (MONITOR_MGR *)v6;
    *((_QWORD *)this + 10) = v6;
    *a4 = (struct HDXGMONITOREVENT__ *)v6;
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v9);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 3238;
  }
  return result;
}
