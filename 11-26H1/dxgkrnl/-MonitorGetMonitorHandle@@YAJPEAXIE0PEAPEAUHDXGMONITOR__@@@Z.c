/*
 * XREFs of ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA36C
 * Callers:
 *     DxgkIsMonitorConnected @ 0x1401B6B20 (DxgkIsMonitorConnected.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1401CFE80 (DxgkHandleForceProjectionMonitor.c)
 *     ?AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOURCEMODESET__@@PEAPEBU_DXGK_MONITORSOURCEMODESET_INTERFACE@@@Z @ 0x140271550 (-AcquireMonitorSourceModeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORSOUR.c)
 *     ?GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPTORSET__@@PEAPEBU_DXGK_MONITORDESCRIPTORSET_INTERFACE@@@Z @ 0x140272450 (-GetMonitorDescriptorSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORDESCRIPT.c)
 *     ?GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_DXGK_MONITORFREQUENCYRANGESET_INTERFACE@@@Z @ 0x140272780 (-GetMonitorFrequencyRangeSet@DXGK_MONITOR_INTERFACE_V1_IMPL@@KAJQEAXIPEAPEAUD3DKMDT_HMONITORFREQ.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x140347990 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x140348E64 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1403F22B4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 *     DxgkGetMonitorInternalInfo @ 0x140437F40 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MonitorGetMonitorHandle(_QWORD *a1, __int64 a2, char a3, void *a4, struct HDXGMONITOR__ **a5)
{
  __int64 v6; // r13
  __int64 v8; // rax
  struct HDXGMONITOR__ **v9; // r15
  __int64 v10; // r14
  struct HDXGMONITOR__ *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // ebx
  __int64 v18; // rax
  __int64 v20; // rax
  void *v21; // [rsp+20h] [rbp-20h] BYREF
  __int64 v22; // [rsp+28h] [rbp-18h]
  void *v23; // [rsp+30h] [rbp-10h] BYREF
  __int64 v24; // [rsp+38h] [rbp-8h]
  void *retaddr; // [rsp+78h] [rbp+38h]
  char v26; // [rsp+80h] [rbp+40h] BYREF
  char v27; // [rsp+90h] [rbp+50h]

  v27 = a3;
  v6 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v8 + 24) = v6;
  *(_QWORD *)(v8 + 32) = a1;
  WdLogGlobalForLineNumber = 2340;
  if ( !a1 )
    return 3221225485LL;
  v9 = a5;
  if ( !a5 || (_DWORD)v6 == -1 )
    return 3221225485LL;
  *a5 = 0LL;
  if ( !a1[395] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2361;
  }
  v10 = *(_QWORD *)(a1[395] + 112LL);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2371;
    return 3221225485LL;
  }
  v23 = a4;
  v11 = 0LL;
  v24 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v23);
  v21 = retaddr;
  v22 = v12;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v21);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v26, (struct DXGFASTMUTEX *)(v10 + 104));
  v13 = *(_QWORD *)(v10 + 40);
  if ( v13 == v10 + 40 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v13 - 152;
    if ( !v13 )
      v14 = 0LL;
  }
  while ( 1 )
  {
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
    v22 = v14;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v21);
    v16 = 0LL;
    if ( !v14 )
      break;
    if ( *(_DWORD *)(v14 + 180) == (_DWORD)v6 )
    {
      if ( v27 && *(_DWORD *)(v14 + 280) != 1 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
        v14 = *(_QWORD *)(v14 + 296);
        v21 = retaddr;
        v22 = v14;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v21);
      }
      if ( v14 )
      {
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
        v24 = v14;
        v11 = (struct HDXGMONITOR__ *)v14;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v23);
        v17 = 0;
        goto LABEL_17;
      }
      break;
    }
    v20 = *(_QWORD *)(v14 + 152);
    if ( v20 == v10 + 40 )
    {
      v14 = 0LL;
    }
    else
    {
      v14 = v20 - 152;
      if ( !v20 )
        v14 = 0LL;
    }
  }
  v18 = WdLogNewEntry5_WdTrace(v15, v16);
  v17 = -1073741275;
  *(_QWORD *)(v18 + 24) = (unsigned int)v6;
  *(_QWORD *)(v18 + 32) = v10;
  WdLogGlobalForLineNumber = 2734;
LABEL_17:
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v26);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
  if ( v17 == -1073741275 )
  {
    WdLogSingleEntry2(7LL, (unsigned int)v6, v10);
    WdLogGlobalForLineNumber = 2386;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
    return 3221226021LL;
  }
  else
  {
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2398;
    }
    v24 = 0LL;
    if ( !v11 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 661;
    }
    *v9 = v11;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
    return 0LL;
  }
}
