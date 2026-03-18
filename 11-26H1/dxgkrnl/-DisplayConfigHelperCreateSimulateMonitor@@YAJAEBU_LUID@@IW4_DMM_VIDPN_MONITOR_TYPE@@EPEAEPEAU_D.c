/*
 * XREFs of ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CDCB0
 * Callers:
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CF2D8 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ADC38 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DF04 (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403409F4 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1404275F4 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 */

__int64 __fastcall DisplayConfigHelperCreateSimulateMonitor(
        struct _LUID *a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5)
{
  __int64 v7; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGADAPTER *v13; // rbx
  __int64 v14; // rax
  __int64 result; // rax
  int v16; // r8d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int IsTargetInClientVidPnTopology; // edi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _BYTE v25[8]; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v27[144]; // [rsp+50h] [rbp-D8h] BYREF

  v7 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v26);
  v13 = v10;
  if ( v10 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v10, 0LL);
    v17 = COREADAPTERACCESS::AcquireExclusive((__int64)v27, (unsigned int)(v16 + 2));
    IsTargetInClientVidPnTopology = v17;
    if ( v17 >= 0 )
    {
      if ( a5 )
      {
        IsTargetInClientVidPnTopology = DmmIsTargetInClientVidPnTopology(v13, v7, a5);
        if ( IsTargetInClientVidPnTopology < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22);
          IsTargetInClientVidPnTopology = 0;
          v24[3] = v7;
          v24[4] = v13;
          v24[5] = *((int *)v13 + 104);
          v24[6] = *((unsigned int *)v13 + 103);
          WdLogGlobalForLineNumber = 2225;
        }
      }
      v25[0] = 0;
      if ( a4 || (int)DmmIsTargetForceable(v13, (unsigned int)v7, v25, a3) >= 0 && v25[0] )
        IsTargetInClientVidPnTopology = MonitorCreateSimulatedMonitor(v13, (unsigned int)v7, a3);
    }
    else
    {
      if ( v17 == -1073741130 )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
        v21[3] = v13;
        v21[4] = *((int *)v13 + 104);
        v21[5] = *((unsigned int *)v13 + 103);
        WdLogGlobalForLineNumber = 2209;
      }
      IsTargetInClientVidPnTopology = 0;
    }
    DXGADAPTER::ReleaseReference(v13);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    return (unsigned int)IsTargetInClientVidPnTopology;
  }
  else
  {
    v14 = WdLogNewEntry5_WdTrace(v12, v11);
    *(_QWORD *)(v14 + 24) = a1->HighPart;
    *(_QWORD *)(v14 + 32) = a1->LowPart;
    result = 3223191554LL;
    WdLogGlobalForLineNumber = 2195;
  }
  return result;
}
