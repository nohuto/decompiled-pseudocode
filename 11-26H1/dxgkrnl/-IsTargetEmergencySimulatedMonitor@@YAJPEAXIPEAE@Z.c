/*
 * XREFs of ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x140400D58
 * Callers:
 *     ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x140380F68 (-IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z.c)
 *     ?GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z @ 0x140400BC0 (-GetPreferredScaleFactorForMonitor@DpiInternal@@YA_NQEAXIHPEAI@Z.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x14004B600 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 */

__int64 __fastcall IsTargetEmergencySimulatedMonitor(_QWORD *a1, __int64 a2, bool *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  MONITOR_MGR *v8; // rbx
  int MonitorInstance; // eax
  unsigned int v10; // edi
  unsigned int v11; // r15d
  struct DXGMONITOR *v12; // rbx
  struct HDXGMONITOR__ *MonitorHandle; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *v16; // r8
  int v17; // ebx
  struct DXGMONITOR *v19[2]; // [rsp+20h] [rbp-10h] BYREF
  struct DXGMONITOR *retaddr; // [rsp+48h] [rbp+18h]

  v4 = (unsigned int)a2;
  *a3 = 0;
  v6 = WdLogNewEntry5_WdTrace(a1, a2);
  v7 = (unsigned int)v4;
  *(_QWORD *)(v6 + 24) = v4;
  *(_QWORD *)(v6 + 32) = a1;
  WdLogGlobalForLineNumber = 2340;
  if ( !a1 || (_DWORD)v4 == -1 )
    return (unsigned int)-1073741811;
  if ( !a1[395] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2361;
  }
  v8 = *(MONITOR_MGR **)(a1[395] + 112LL);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2371;
    return (unsigned int)-1073741811;
  }
  *(__m128i *)v19 = _mm_load_si128((const __m128i *)&_xmm);
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v19);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v8, v4, 0, (struct MONITOR_REF_ACCESSOR *)v19);
  v10 = -1073741275;
  v11 = MonitorInstance;
  if ( MonitorInstance == -1073741275 )
  {
    WdLogSingleEntry2(7LL, v7, v8);
    WdLogGlobalForLineNumber = 2386;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
  }
  else if ( MonitorInstance < 0 )
  {
    WdLogSingleEntry2(2LL, v7, v8);
    WdLogGlobalForLineNumber = 2393;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
    return v11;
  }
  else
  {
    v12 = v19[1];
    if ( !v19[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2398;
    }
    v19[1] = 0LL;
    MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v12);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14) + 24) = MonitorHandle;
    WdLogGlobalForLineNumber = 2514;
    if ( MonitorHandle )
    {
      v19[0] = retaddr;
      v19[1] = 0LL;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v19);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
      v19[1] = MonitorHandle;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v19);
      v17 = *((_DWORD *)MonitorHandle + 70);
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
      v10 = 0;
      *a3 = v17 == 5;
    }
    else
    {
      v10 = -1073741811;
    }
    MonitorReleaseMonitorHandle(a1, MonitorHandle, v16);
  }
  return v10;
}
