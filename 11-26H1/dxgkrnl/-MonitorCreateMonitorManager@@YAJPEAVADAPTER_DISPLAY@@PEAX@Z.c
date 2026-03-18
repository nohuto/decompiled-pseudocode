/*
 * XREFs of ?MonitorCreateMonitorManager@@YAJPEAVADAPTER_DISPLAY@@PEAX@Z @ 0x140191D64
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x14038FCD0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x140005A40 (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_EMONITOR_MGR@@UEAAPEAXI@Z @ 0x140098620 (--_EMONITOR_MGR@@UEAAPEAXI@Z.c)
 *     ?_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ @ 0x140274F2C (-_InitializeMonitorManager@MONITOR_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2)
{
  MONITOR_MGR *v4; // rax
  MONITOR_MGR *v5; // rax
  MONITOR_MGR *v6; // rsi
  __int64 result; // rax
  unsigned int v8; // edi

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  WdLogGlobalForLineNumber = 263;
  if ( !a1 || !a2 )
  {
    WdLogSingleEntry2(2LL, a1, a2);
    WdLogGlobalForLineNumber = 275;
    return 3221225485LL;
  }
  *a2 = 0LL;
  v4 = (MONITOR_MGR *)operator new(0x2B8uLL, 0x4D677844u, 64LL);
  if ( !v4 || (v5 = MONITOR_MGR::MONITOR_MGR(v4, a1), (v6 = v5) == 0LL) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 295;
    return 3221225485LL;
  }
  result = MONITOR_MGR::_InitializeMonitorManager(v5);
  v8 = result;
  if ( (int)result >= 0 )
  {
    *a2 = v6;
  }
  else
  {
    MONITOR_MGR::`vector deleting destructor'(v6, 1);
    return v8;
  }
  return result;
}
