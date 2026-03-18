/*
 * XREFs of ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ADC38
 * Callers:
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CF2D8 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ABFD4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403AC52C (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     DxgkInvalidateMonitorConnections @ 0x1403ADA10 (DxgkInvalidateMonitorConnections.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401CDCB0 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x14033D68C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1403ADEB8 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ??0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ @ 0x1403ADF00 (--0MONITORSCOUNT_CALLBACK_CONTEXT@@QEAA@XZ.c)
 */

__int64 __fastcall DisplayConfigHandleMonitorInvalidation(
        __int64 a1,
        struct MONITORSCOUNT_CALLBACK_CONTEXT *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  struct MONITORSCOUNT_CALLBACK_CONTEXT *v6; // rbx
  struct DXGGLOBAL *Global; // rax
  signed int v8; // eax
  unsigned int v9; // r14d
  struct DXGGLOBAL *v10; // rax
  __int64 result; // rax
  struct DXGGLOBAL *v12; // rax
  unsigned int v13; // edx
  char v14; // r9
  struct DXGGLOBAL *v15; // rax
  int v16; // [rsp+50h] [rbp-9h] BYREF
  char v17; // [rsp+54h] [rbp-5h]
  __int16 v18; // [rsp+55h] [rbp-4h]
  char v19; // [rsp+57h] [rbp-2h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v20; // [rsp+58h] [rbp-1h]
  _BYTE v21[48]; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int8 v22; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors() )
    return 0LL;
  MONITORSCOUNT_CALLBACK_CONTEXT::MONITORSCOUNT_CALLBACK_CONTEXT((MONITORSCOUNT_CALLBACK_CONTEXT *)v21);
  v6 = (struct MONITORSCOUNT_CALLBACK_CONTEXT *)v21;
  if ( a2 )
    v6 = a2;
  if ( a3 )
    *((_BYTE *)a3 + 44) = *((_BYTE *)v6 + 26);
  v16 = 4;
  if ( (a1 & 2) != 0 )
  {
    *((_DWORD *)v6 + 8) |= 4u;
    v17 = 0;
  }
  else
  {
    v17 = 1;
  }
  v20 = a3;
  v18 = 0;
  v19 = 0;
  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)Global,
         (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
         (__int64)&v16,
         4);
  v9 = v8;
  if ( (a1 & 1) == 0 )
  {
    WdLogSingleEntry2(4LL, a1, v8);
    WdLogGlobalForLineNumber = 2703;
    return v9;
  }
  *(_QWORD *)v6 = 0LL;
  *((_DWORD *)v6 + 2) = 0;
  v10 = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::IterateAdaptersWithCallback(
         (__int64)v10,
         (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigCountMonitorsCallback,
         (__int64)v6,
         4);
  if ( (v9 & 0x80000000) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2728;
    return v9;
  }
  if ( *(_DWORD *)v6 )
  {
    if ( *(_DWORD *)v6 > 1u )
    {
      if ( *((_DWORD *)v6 + 2) )
        *((_DWORD *)v6 + 8) |= 2u;
      v16 = 5;
      v18 = 0;
      v19 = 0;
      v17 = 0;
      v20 = a3;
      v12 = DXGGLOBAL::GetGlobal();
      return (unsigned int)DXGGLOBAL::IterateAdaptersWithCallback(
                             (__int64)v12,
                             (__int64 (__fastcall *)(_QWORD *, __int64))DisplayConfigDestroySimulatedMonitors,
                             (__int64)&v16,
                             4);
    }
    return v9;
  }
  if ( *((_DWORD *)v6 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2737;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"io_pOptionalEmergencyContext->m_NumEmergencyMonitors == 0",
      2737LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_DWORD *)v6 + 8) |= 1u;
  v13 = *((_DWORD *)v6 + 5);
  if ( v13 != -1 )
  {
    v14 = *((_BYTE *)v6 + 30);
    v22 = 0;
    v9 = DisplayConfigHelperCreateSimulateMonitor((struct _LUID *)((char *)v6 + 12), v13, 5u, v14, &v22);
    if ( (v9 & 0x80000000) == 0 && v22 )
    {
      if ( (a1 & 4) == 0 )
        return v9;
      *((_BYTE *)v6 + 26) = 0;
    }
    else if ( (a1 & 4) == 0 )
    {
      return v9;
    }
    v15 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v15,
      (__int64 (__fastcall *)(_QWORD *, __int64))InvalidateChildRelationsOnAdapterCallback,
      0LL,
      4);
    return v9;
  }
  WdLogSingleEntry1(3LL);
  result = 3223191554LL;
  WdLogGlobalForLineNumber = 2744;
  return result;
}
