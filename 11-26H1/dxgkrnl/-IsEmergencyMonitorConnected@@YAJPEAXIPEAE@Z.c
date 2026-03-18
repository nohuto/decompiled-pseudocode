/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x140380F68
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1403809B0 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1403826D4 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x140400D58 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3)
{
  int v3; // edi
  unsigned __int8 IsUsingSimulatedMonitor; // si
  int v5; // ebp
  unsigned int v7; // r15d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  MONITOR_MGR *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  IsUsingSimulatedMonitor = 0;
  *a3 = 0;
  v5 = 0;
  v16 = 0;
  v7 = a2;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  WdLogGlobalForLineNumber = 443;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 463;
    }
    v11 = *((_QWORD *)a1 + 395);
    if ( v11 )
    {
      v12 = *(MONITOR_MGR **)(v11 + 112);
      if ( v12 )
      {
        IsUsingSimulatedMonitor = MONITOR_MGR::_IsUsingSimulatedMonitor(v12);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 480;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 467;
    }
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = a1;
  WdLogGlobalForLineNumber = 514;
  if ( a1 )
  {
    v13 = *((_QWORD *)a1 + 395);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 112);
      if ( v14 )
      {
        v5 = *(_DWORD *)(v14 + 32);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 549;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 536;
    }
  }
  if ( IsUsingSimulatedMonitor )
  {
    if ( v5 == 1 )
    {
      v3 = DmmEnumClientVidPnPathTargetsFromSource(a1, v7, 0LL, &v16);
      if ( v3 >= 0 )
        return (unsigned int)IsTargetEmergencySimulatedMonitor(a1, v16, a3);
    }
  }
  return (unsigned int)v3;
}
