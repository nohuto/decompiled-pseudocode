/*
 * XREFs of DxgkHandleForceProjectionMonitor @ 0x1401CFE80
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x140033570 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DF04 (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E2BC (-MonitorDestroySimulatedMonitor@@YAJPEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z @ 0x1402CA36C (-MonitorGetMonitorHandle@@YAJPEAXIE0PEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403409F4 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x140345E94 (-MonitorGetMonitorType@@YAJPEAUHDXGMONITOR__@@PEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     DxgkInvalidateMonitorConnections @ 0x1403ADA10 (DxgkInvalidateMonitorConnections.c)
 */

__int64 __fastcall DxgkHandleForceProjectionMonitor(struct _LUID a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // r12d
  __int64 v11; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  int v14; // ebx
  DXGADAPTER *v15; // r15
  __int64 v16; // rcx
  bool v17; // zf
  int v18; // r8d
  __int64 v19; // rsi
  __int64 v20; // rcx
  bool v21; // zf
  int IsTargetForceable; // eax
  int MonitorHandle; // eax
  int MonitorType; // eax
  void *v25; // r8
  int SimulatedMonitor; // eax
  _BYTE v28[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+54h] [rbp-ACh] BYREF
  struct HDXGMONITOR__ *v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h]
  char v33; // [rsp+70h] [rbp-90h]
  unsigned int v34; // [rsp+78h] [rbp-88h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v35; // [rsp+80h] [rbp-80h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v36[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[144]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a4;
  v5 = a3;
  v7 = a2;
  v30 = (struct HDXGMONITOR__ *)a1;
  LOBYTE(v36[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v36, 0LL, 0x29u, 0);
  v35 = v36[1];
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2179;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerEnter);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v31, 2179);
  WdLogSingleEntry5(4LL, v5, v7, v4, SHIDWORD(v30), a1.LowPart);
  WdLogGlobalForLineNumber = 1977;
  v9 = (unsigned int)v5 >> 31;
  v10 = v5 & 0x7FFFFFFF;
  v34 = v9;
  if ( v10 > 2 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1987;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified an invalid force projection monitor action %I64u.",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_57:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    v17 = v33 == 0;
LABEL_58:
    if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, (__int64)&EventProfilerExit);
    LODWORD(v19) = -1073741811;
    goto LABEL_62;
  }
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 == 1 )
    {
      v11 = 3LL;
    }
    else
    {
      if ( (_DWORD)v4 != 2 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2001;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified an invalid force projection monitor type %I64u.",
          v4,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_57;
      }
      v11 = 4LL;
    }
  }
  else
  {
    v11 = 2LL;
  }
  Global = DXGGLOBAL::GetGlobal();
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, (unsigned __int64 *)&v30);
  v14 = 0;
  v15 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 2015;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    v17 = v33 == 0;
    goto LABEL_58;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v13, 0LL);
  v19 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v37, (unsigned int)(v18 + 1));
  DXGADAPTER::ReleaseReference(v15);
  if ( (int)v19 >= 0 )
  {
    v28[0] = 0;
    IsTargetForceable = DmmIsTargetForceable(v15, (unsigned int)v7, v28, 0LL);
    LODWORD(v19) = IsTargetForceable;
    if ( IsTargetForceable >= 0 && !v28[0] )
    {
      WdLogSingleEntry2(4LL, v7, v15);
      WdLogGlobalForLineNumber = 2046;
LABEL_49:
      LODWORD(v19) = -1073741811;
      goto LABEL_52;
    }
    v29 = 0;
    if ( IsTargetForceable < 0 )
      goto LABEL_52;
    v30 = 0LL;
    MonitorHandle = MonitorGetMonitorHandle(v15, v7, 0, DxgkHandleForceProjectionMonitor, &v30);
    LODWORD(v19) = MonitorHandle;
    if ( MonitorHandle < 0 )
    {
      if ( MonitorHandle != -1073741275 )
        goto LABEL_52;
      if ( v30 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2082;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"hOldMonitor == NULL", 2082LL, 0LL, 0LL, 0LL, 0LL);
      }
      LODWORD(v19) = 0;
    }
    else
    {
      MonitorType = MonitorGetMonitorType(v30, (enum _DMM_VIDPN_MONITOR_TYPE *)&v29);
      v14 = v29;
      LODWORD(v19) = MonitorType;
      if ( MonitorType >= 0 && !v29 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2071;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(!NT_SUCCESS(ntStatus)) || (OldMonitorType != DMM_VMT_UNINITIALIZED)",
          2071LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (int)MonitorReleaseMonitorHandle(v15, v30, v25) < 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2076;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_ntStatus)", 2076LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (int)v19 < 0 )
        goto LABEL_52;
    }
    if ( v10 != 2 )
    {
      if ( v10 )
      {
        if ( !v14 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2138;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Caller specified traget %I64u does not have any monitor connected.\n",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_49;
        }
        if ( (_DWORD)v11 != v14 )
        {
          WdLogSingleEntry2(3LL, (unsigned int)v11, v14);
          WdLogGlobalForLineNumber = 2146;
          goto LABEL_49;
        }
        SimulatedMonitor = MonitorDestroySimulatedMonitor(v15, v7, v35);
      }
      else
      {
        if ( v14 && (v14 != 1 || (_DWORD)v11 == 4) && v14 != 5 && (int)v11 >= v14 )
        {
          WdLogSingleEntry2(2LL, v11, v14);
          WdLogGlobalForLineNumber = 2129;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"The new force porjection monitor type %I64u has lower priority than old one %I64u.\n",
            v11,
            v14,
            0LL,
            0LL,
            0LL);
          goto LABEL_52;
        }
        SimulatedMonitor = MonitorCreateSimulatedMonitor(v15, (unsigned int)v7, (unsigned int)v11);
      }
      LODWORD(v19) = SimulatedMonitor;
    }
LABEL_52:
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v37);
    if ( (_BYTE)v34 && (int)DxgkInvalidateMonitorConnections(1uLL) < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2170;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    v21 = v33 == 0;
    goto LABEL_17;
  }
  WdLogSingleEntry2(3LL, v15, v19);
  WdLogGlobalForLineNumber = 2030;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  v21 = v33 == 0;
LABEL_17:
  if ( !v21 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, (__int64)&EventProfilerExit);
LABEL_62:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v36);
  return (unsigned int)v19;
}
