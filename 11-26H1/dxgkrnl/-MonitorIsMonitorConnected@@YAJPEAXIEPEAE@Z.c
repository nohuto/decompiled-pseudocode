/*
 * XREFs of ?MonitorIsMonitorConnected@@YAJPEAXIEPEAE@Z @ 0x1403F1AB0
 * Callers:
 *     ?PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z @ 0x14008D6DC (-PerformSwitch@DISPLAY_MUX_SWITCH_OPERATION@@QEAAXPEAU_D3DKMT_DISPLAYMUX_SWITCH_STATUS@@PEAH@Z.c)
 *     DxgkIsMonitorConnected @ 0x1401B6B20 (DxgkIsMonitorConnected.c)
 *     _lambda_13e7d7c24174763590f6bf26896d2285_::operator() @ 0x1401C66AC (_lambda_13e7d7c24174763590f6bf26896d2285_--operator().c)
 *     ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1403F1890 (-IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorIsMonitorConnected(_QWORD *a1, __int64 a2, char a3, unsigned __int8 *a4)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  unsigned int v9; // ebx
  MONITOR_MGR *v10; // r10
  int MonitorInstance; // eax
  void *v13; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  v9 = 0;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogGlobalForLineNumber = 2037;
  if ( !a1 || !a4 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  *a4 = 0;
  if ( !a1[395] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2059;
  }
  if ( !*(_QWORD *)(a1[395] + 112LL) )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2069;
    return 3221225485LL;
  }
  v13 = retaddr;
  v14 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v13);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v10, v5, a3, (struct MONITOR_REF_ACCESSOR *)&v13);
  if ( MonitorInstance == -1073741275 )
  {
    if ( v14 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2083;
    }
    *a4 = 0;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v13);
    return 0LL;
  }
  else
  {
    if ( MonitorInstance >= 0 )
    {
      if ( !v14 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2090;
      }
      *a4 = 1;
    }
    else
    {
      v9 = MonitorInstance;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v13);
    return v9;
  }
}
