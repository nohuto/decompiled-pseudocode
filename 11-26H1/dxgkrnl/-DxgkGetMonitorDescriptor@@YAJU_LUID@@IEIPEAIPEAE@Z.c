/*
 * XREFs of ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x14031E890
 * Callers:
 *     DxgkGetMonitorDisplayId @ 0x1401CFB70 (DxgkGetMonitorDisplayId.c)
 *     DxgkGetMonitorEdid @ 0x14031E860 (DxgkGetMonitorEdid.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x14004B600 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z @ 0x1402CC114 (-MonitorReleaseMonitorHandle@@YAJPEAXPEAUHDXGMONITOR__@@0@Z.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x14031F6F0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x1403FF8A0 (-MonitorGetDisplayIDFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 *     ?MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z @ 0x1404059E4 (-MonitorGetEdidFromMonitor@@YAJPEAUHDXGMONITOR__@@IPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetMonitorDescriptor(
        struct _LUID a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned __int8 *a6)
{
  DWORD LowPart; // edi
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned int v10; // r15d
  int v11; // eax
  __int64 v12; // r13
  DXGGLOBAL *Global; // rax
  DWORD v14; // ebx
  struct DXGADAPTER *v15; // rax
  DXGADAPTER *v16; // r13
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // esi
  __int64 v21; // rcx
  __int64 v23; // rdi
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  unsigned int v27; // r14d
  __int64 v28; // rsi
  MONITOR_MGR *v29; // rbx
  int MonitorInstance; // eax
  struct DXGMONITOR *v31; // rbx
  struct HDXGMONITOR__ *MonitorHandle; // r15
  int EdidFromMonitor; // eax
  void *v34; // r8
  unsigned int v35; // ebx
  __int64 v36; // rcx
  bool v37; // zf
  int DisplayIDFromMonitor; // eax
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 HighPart; // rdi
  __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // rbx
  int v49; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+60h] [rbp-A0h]
  char v51; // [rsp+68h] [rbp-98h]
  unsigned int v52; // [rsp+70h] [rbp-90h]
  unsigned int v53; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v54; // [rsp+78h] [rbp-88h]
  struct _LUID v55; // [rsp+80h] [rbp-80h] BYREF
  struct _LUID v56; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v57; // [rsp+90h] [rbp-70h] BYREF
  struct DXGMONITOR *v58; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v59; // [rsp+A0h] [rbp-60h]
  unsigned int *v60; // [rsp+A8h] [rbp-58h]
  _BYTE v61[144]; // [rsp+B0h] [rbp-50h] BYREF

  v60 = a5;
  LowPart = a1.LowPart;
  v8 = a4;
  v9 = a2;
  v59 = a6;
  v54 = a4;
  v52 = a2;
  v56 = a1;
  v49 = -1;
  v50 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2187;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v49, 2187);
  v55 = 0LL;
  v10 = -1073741811;
  v53 = 0;
  if ( a3 && (v8 & 0x7F) != 0 )
  {
    WdLogSingleEntry2(3LL, v8, 128LL);
    WdLogGlobalForLineNumber = 8347;
LABEL_41:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    v37 = v51 == 0;
    goto LABEL_42;
  }
  v11 = DxgkConvertLegacyQDCAdapterAndIdToActual(&v56, (unsigned int)v9, &v55, &v53);
  v12 = v11;
  if ( v11 >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v14 = v55.LowPart;
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v55, &v57);
    v16 = v15;
    if ( !v15 )
    {
      HighPart = v55.HighPart;
      WdLogSingleEntry4(2LL, v55.HighPart, v14, -1073741811LL, 0LL);
      WdLogGlobalForLineNumber = 8380;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorDescriptor function, returning 0x%I64x.",
        HighPart,
        v14,
        -1073741811LL,
        0LL,
        0LL);
      goto LABEL_41;
    }
    if ( !*((_QWORD *)v15 + 395) )
    {
      DXGADAPTER::ReleaseReference(v15);
      v23 = v55.HighPart;
      WdLogSingleEntry4(2LL, v55.HighPart, v14, -1073741811LL, 1LL);
      WdLogGlobalForLineNumber = 8390;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x",
        v23,
        v14,
        -1073741811LL,
        1LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( v51 )
      {
        v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
        goto LABEL_16;
      }
      return v10;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v61, v15, 0LL);
    DXGADAPTER::ReleaseReference(v16);
    v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v61, 0LL);
    v20 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry3(3LL, v55.HighPart, v14, v17);
      WdLogGlobalForLineNumber = 8408;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
      if ( v51 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, (__int64)&EventProfilerExit);
      }
      return v20;
    }
    v26 = WdLogNewEntry5_WdTrace(v19, v18);
    v27 = v53;
    v28 = v53;
    *(_QWORD *)(v26 + 24) = v53;
    *(_QWORD *)(v26 + 32) = v16;
    WdLogGlobalForLineNumber = 2340;
    if ( v27 != -1 )
    {
      if ( !*((_QWORD *)v16 + 395) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2361;
      }
      v29 = *(MONITOR_MGR **)(*((_QWORD *)v16 + 395) + 112LL);
      if ( v29 )
      {
        v58 = 0LL;
        v57 = (unsigned __int64)DxgkGetMonitorDescriptor;
        MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v57);
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v29, v27, 0, (struct MONITOR_REF_ACCESSOR *)&v57);
        v10 = MonitorInstance;
        if ( MonitorInstance == -1073741275 )
        {
          WdLogSingleEntry2(7LL, v28, v29);
          WdLogGlobalForLineNumber = 2386;
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v57);
          v10 = -1073741275;
        }
        else
        {
          if ( MonitorInstance >= 0 )
          {
            v31 = v58;
            if ( !v58 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 2398;
            }
            v58 = 0LL;
            MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v31);
            MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v57);
            if ( !MonitorHandle )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8433;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 8433LL, 0LL, 0LL, 0LL, 0LL);
            }
            if ( a3 )
            {
              EdidFromMonitor = MonitorGetEdidFromMonitor(MonitorHandle, v54, v60, v59);
              if ( EdidFromMonitor < 0 )
              {
                v45 = v52;
                v46 = v56.HighPart;
                v47 = EdidFromMonitor;
                WdLogSingleEntry5(2LL, v56.HighPart, LowPart, v52, EdidFromMonitor, 1LL);
                WdLogGlobalForLineNumber = 8449;
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"Failed to get monitor EDID from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
                  v46,
                  LowPart,
                  v45,
                  v47,
                  1LL);
              }
              v35 = 0;
            }
            else
            {
              DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(MonitorHandle, v54, v60, v59);
              v35 = DisplayIDFromMonitor;
              if ( (int)(DisplayIDFromMonitor + 0x80000000) >= 0 && DisplayIDFromMonitor != -1073741789 )
              {
                WdLogSingleEntry4(3LL, v56.HighPart, LowPart, v52, DisplayIDFromMonitor);
                WdLogGlobalForLineNumber = 8468;
              }
            }
            if ( (int)MonitorReleaseMonitorHandle(v16, MonitorHandle, v34) < 0 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 8478;
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(Status2)", 8478LL, 0LL, 0LL, 0LL, 0LL);
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
            if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v36, (__int64)&EventProfilerExit);
            return v35;
          }
          WdLogSingleEntry2(2LL, v28, v29);
          WdLogGlobalForLineNumber = 2393;
          MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v57);
        }
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 2371;
      }
    }
    v39 = v52;
    v40 = v56.HighPart;
    WdLogSingleEntry5(2LL, v56.HighPart, LowPart, v52, (int)v10, 0LL);
    WdLogGlobalForLineNumber = 8429;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v40,
      LowPart,
      v39,
      (int)v10,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v61);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    v37 = v51 == 0;
LABEL_42:
    if ( !v37 )
    {
      v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) == 0;
LABEL_16:
      if ( !v25 )
        McTemplateK0q_EtwWriteTransfer(v24, (__int64)&EventProfilerExit);
      return v10;
    }
    return v10;
  }
  v41 = v9;
  v42 = v56.HighPart;
  WdLogSingleEntry4(2LL, v56.HighPart, LowPart, v41, v11);
  WdLogGlobalForLineNumber = 8364;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).",
    v42,
    LowPart,
    v41,
    v12,
    0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v43, (__int64)&EventProfilerExit);
  return (unsigned int)v12;
}
