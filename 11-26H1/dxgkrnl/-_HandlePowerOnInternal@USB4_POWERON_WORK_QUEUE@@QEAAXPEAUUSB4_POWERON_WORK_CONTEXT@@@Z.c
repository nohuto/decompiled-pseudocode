/*
 * XREFs of ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8
 * Callers:
 *     ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140278E10 (-_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x1400353BC (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AVMONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x14003BC64 (--0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004A500 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_DEVICE_OBJECT@@@Z @ 0x14006A830 (-reset@-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x14006E5C8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     _DXGKCALLONEXIT__lambda_0cf1f7547ea24b3f810b01f1b8e4dfad____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140098A58 (_DXGKCALLONEXIT__lambda_0cf1f7547ea24b3f810b01f1b8e4dfad____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ?Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z @ 0x140098B78 (-Assign@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXPEAVUsb4HostRouterPoFxRefv2@2@@Z.c)
 *     ?Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ @ 0x140098BAC (-Release@USB4POFXREF_REF_ACCESSOR@DxgMonitor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DxgkNotifyMonitorChange @ 0x1401933F4 (DxgkNotifyMonitorChange.c)
 *     ?DmmUpdateTargetConnectionId@@YAJQEAXI@Z @ 0x14025C4BC (-DmmUpdateTargetConnectionId@@YAJQEAXI@Z.c)
 *     ?AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z @ 0x140277BE4 (-AddUsb4HRPowerRef@Usb4HostRouterPoFxRefv2@DxgMonitor@@QEAAJU_LUID@@I@Z.c)
 *     ?_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ @ 0x1402797F8 (-_OnChangePowerOnStage2@MonitorUsb4State@DxgMonitor@@AEAAXXZ.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1402D3F90 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402D4AF8 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DpiPollDisplayChildren @ 0x1403E6480 (DpiPollDisplayChildren.c)
 */

void __fastcall USB4_POWERON_WORK_QUEUE::_HandlePowerOnInternal(
        USB4_POWERON_WORK_QUEUE *this,
        struct USB4_POWERON_WORK_CONTEXT *a2)
{
  struct DXGADAPTER *v2; // rdi
  struct USB4_POWERON_WORK_CONTEXT *v3; // rcx
  unsigned int i; // ebx
  __int64 v5; // r8
  DxgMonitor::Usb4HostRouterPoFxRefv2 *v6; // r15
  __int64 v7; // rcx
  unsigned int v8; // ebx
  DxgMonitor::MonitorUsb4State *v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  void *v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+58h] [rbp-B0h] BYREF
  int v20; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  struct USB4_POWERON_WORK_CONTEXT *v22; // [rsp+68h] [rbp-A0h] BYREF
  DxgkCompositionObject *v23; // [rsp+70h] [rbp-98h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // [rsp+78h] [rbp-90h] BYREF
  struct DXGADAPTER *v25[2]; // [rsp+80h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v26[2]; // [rsp+90h] [rbp-78h] BYREF
  void *v27; // [rsp+A0h] [rbp-68h] BYREF
  DxgMonitor::Usb4HostRouterPoFxRefv2 *v28; // [rsp+A8h] [rbp-60h]
  union _LARGE_INTEGER Interval; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v30[4]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v31; // [rsp+D8h] [rbp-30h] BYREF
  int *v32; // [rsp+E8h] [rbp-20h]
  struct USB4_POWERON_WORK_CONTEXT **v33; // [rsp+F0h] [rbp-18h]
  _BYTE v34[48]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v35[144]; // [rsp+128h] [rbp+20h] BYREF
  void *retaddr; // [rsp+1E0h] [rbp+D8h]

  v22 = a2;
  v21 = 0xFFFFFFFF00000000uLL;
  v20 = 0;
  v23 = 0LL;
  CDisplayScenarioContextScope::CDisplayScenarioContextScope(
    (CDisplayScenarioContextScope *)v26,
    (struct USB4_POWERON_WORK_CONTEXT *)((char *)a2 + 8));
  v24 = v26[1];
  *(_QWORD *)&v31 = &v21;
  *((_QWORD *)&v31 + 1) = &v24;
  v32 = &v20;
  v33 = &v22;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v34, &v31);
  v25[0] = 0LL;
  if ( DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v25, (const struct _LUID *)v22 + 3) )
  {
    v2 = v25[0];
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v31, v25[0], 1);
    if ( *((_DWORD *)v2 + 50) == 1 )
    {
      v3 = v22;
      for ( i = 0; i < *((_DWORD *)v22 + 8); ++i )
      {
        v5 = *((_QWORD *)v3 + 5);
        v27 = retaddr;
        v6 = 0LL;
        v28 = 0LL;
        MONITOR_MGR::AcquireMonitorExclusive(v30, (__int64)v2, *(_DWORD *)(v5 + 4LL * i), 0);
        if ( v30[0] )
        {
          DxgMonitor::USB4POFXREF_REF_ACCESSOR::Assign(
            (DxgMonitor::USB4POFXREF_REF_ACCESSOR *)&v27,
            *(struct DxgMonitor::Usb4HostRouterPoFxRefv2 **)(*(_QWORD *)(v30[0] + 264LL) + 80LL));
          v6 = v28;
        }
        else
        {
          WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v22 + 5) + 4LL * i), 1LL, v20);
          v7 = *((_QWORD *)v22 + 5);
          WdLogGlobalForLineNumber = 330;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Could not find target 0x%I64 for adapter 0x%I64, status 0x%I64",
            *(unsigned int *)(v7 + 4LL * i),
            1LL,
            v20,
            0LL,
            0LL);
          if ( !(_DWORD)v21 )
          {
            HIDWORD(v21) = *(_DWORD *)(*((_QWORD *)v22 + 5) + 4LL * i);
            LODWORD(v21) = 5;
          }
        }
        MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v30);
        if ( v6 )
          DxgMonitor::Usb4HostRouterPoFxRefv2::AddUsb4HRPowerRef(
            v6,
            *(struct _LUID *)((char *)v22 + 24),
            *(_DWORD *)(*((_QWORD *)v22 + 5) + 4LL * i));
        DxgMonitor::USB4POFXREF_REF_ACCESSOR::Release((DxgMonitor::USB4POFXREF_REF_ACCESSOR *)&v27);
        v3 = v22;
      }
      v8 = 0;
      if ( *((_DWORD *)v3 + 8) )
      {
        do
        {
          MONITOR_MGR::AcquireMonitorExclusive(v30, (__int64)v2, *(_DWORD *)(*((_QWORD *)v3 + 5) + 4LL * v8), 0);
          if ( v30[0] )
          {
            v9 = *(DxgMonitor::MonitorUsb4State **)(v30[0] + 264LL);
            if ( *((_BYTE *)v9 + 8) )
              DxgMonitor::MonitorUsb4State::_OnChangePowerOnStage2(v9);
          }
          else
          {
            WdLogSingleEntry3(2LL, *(unsigned int *)(*((_QWORD *)v22 + 5) + 4LL * v8), 1LL, v20);
            v10 = *((_QWORD *)v22 + 5);
            WdLogGlobalForLineNumber = 355;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Could not find target 0x%I64 for adapter 0x%I64, status 0x%I64",
              *(unsigned int *)(v10 + 4LL * v8),
              1LL,
              v20,
              0LL,
              0LL);
            if ( !(_DWORD)v21 )
            {
              HIDWORD(v21) = *(_DWORD *)(*((_QWORD *)v22 + 5) + 4LL * v8);
              LODWORD(v21) = 12;
            }
          }
          MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v30);
          v3 = v22;
          ++v8;
        }
        while ( v8 < *((_DWORD *)v22 + 8) );
      }
      v11 = 0;
      if ( *((_DWORD *)v3 + 8) )
      {
        do
        {
          DmmUpdateTargetConnectionId(v2, *(_DWORD *)(*((_QWORD *)v3 + 5) + 4LL * v11));
          v3 = v22;
          ++v11;
        }
        while ( v11 < *((_DWORD *)v22 + 8) );
      }
      DxgkNotifyMonitorChange((__int128 *)v24);
      Interval.QuadPart = -4000LL;
      KeDelayExecutionThread(0, 0, &Interval);
      v12 = (void *)*((_QWORD *)v2 + 27);
      ObfReferenceObject(v12);
      wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::reset(
        (__int64 *)&v23,
        (__int64)v12);
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v31);
      v13 = DpiPollDisplayChildren(v23, 12LL, v24);
      v20 = v13;
      if ( v13 >= 0 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v2, 0LL);
        v15 = COREADAPTERACCESS::AcquireExclusive((__int64)v35, 1LL);
        v20 = v15;
        if ( v15 >= 0 )
        {
          LOBYTE(v19) = 0;
          v16 = DmmPowerOnOffTargetsFromSourceIfNecessary(v2, 0, (struct _DMM_SET_TIMING_RESULT *)&v19);
          v20 = v16;
          if ( v16 >= 0 )
          {
            DmmHandleSetTimingsResult(v2, (struct _DMM_SET_TIMING_RESULT *)&v19, v24);
            v17 = v21;
            if ( !(_DWORD)v21 )
              v17 = 1;
          }
          else
          {
            WdLogSingleEntry2(2LL, 1LL, v16);
            WdLogGlobalForLineNumber = 416;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"DmmPowerOnOffTargetsFromSourceIfNecessary failed for adapter 0x%I64 after processing, status 0x%I64",
              1LL,
              v20,
              0LL,
              0LL,
              0LL);
            v17 = v21;
            if ( !(_DWORD)v21 )
              v17 = 7;
          }
          LODWORD(v21) = v17;
        }
        else
        {
          WdLogSingleEntry2(2LL, 1LL, v15);
          WdLogGlobalForLineNumber = 406;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire exclusive for adapter 0x%I64 after processing, status 0x%I64",
            1LL,
            v20,
            0LL,
            0LL,
            0LL);
          if ( !(_DWORD)v21 )
            LODWORD(v21) = 20;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
      }
      else
      {
        WdLogSingleEntry2(2LL, 1LL, v13);
        WdLogGlobalForLineNumber = 395;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire exclusive for adapter 0x%I64 after processing, status 0x%I64",
          1LL,
          v20,
          0LL,
          0LL,
          0LL);
        v14 = v21;
        if ( !(_DWORD)v21 )
          v14 = 19;
        LODWORD(v21) = v14;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, *((int *)v22 + 7), *((unsigned int *)v22 + 6));
      WdLogGlobalForLineNumber = 310;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter with luid 0x%08I64x%08I64x is not active",
        *((int *)v22 + 7),
        *((unsigned int *)v22 + 6),
        0LL,
        0LL,
        0LL);
      v18 = v21;
      if ( !(_DWORD)v21 )
        v18 = 13;
      LODWORD(v21) = v18;
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)&v31);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, *((int *)v22 + 7), *((unsigned int *)v22 + 6));
    WdLogGlobalForLineNumber = 297;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Could not find adapter with luid 0x%08I64x%08I64x",
      *((int *)v22 + 7),
      *((unsigned int *)v22 + 6),
      0LL,
      0LL,
      0LL);
    if ( !(_DWORD)v21 )
      LODWORD(v21) = 2;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)v25, 0LL);
  DXGKCALLONEXIT__lambda_0cf1f7547ea24b3f810b01f1b8e4dfad____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v34);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v26);
  wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>(&v23);
}
