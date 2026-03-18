/*
 * XREFs of DxgkPowerOnOffMonitor @ 0x14024A2EC
 * Callers:
 *     ?SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z @ 0x140203610 (-SetDisplayStateCallback@CTTMDEVICE@@CAJ_KW4_TERMINAL_DISPLAY_STATE@@K@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x140257550 (DpiGdoDispatchInternalIoctl.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140439834 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     DxgkReportMonitorPowerRapidHpdTriggerEvent @ 0x140046F48 (DxgkReportMonitorPowerRapidHpdTriggerEvent.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14004A500 (--1-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@deta.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x140086EE4 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E6F0 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_KEVENT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x140277F9C (-GetUsb4PowerFlushEvent@USB4_POWERON_WORK_QUEUE@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DpiFdoInvalidateChildRelations @ 0x14031B740 (DpiFdoInvalidateChildRelations.c)
 *     DpiPdoSetDevicePower @ 0x1403B9898 (DpiPdoSetDevicePower.c)
 *     DpiPdoSetMonitorDriverInterfaceState @ 0x140422658 (DpiPdoSetMonitorDriverInterfaceState.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C640 (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall DxgkPowerOnOffMonitor(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        int *a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  __int64 v6; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v7; // r13
  int *v8; // r12
  bool v9; // zf
  NTSTATUS v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdx
  _DWORD *v17; // rbx
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // rax
  char *v21; // r15
  _QWORD *v22; // r8
  _QWORD *v23; // r14
  unsigned int v24; // r13d
  _QWORD *v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rcx
  PVOID v28; // rbx
  int v29; // ecx
  struct _DEVICE_OBJECT *v30; // rcx
  __int64 DeviceExtension; // rbx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  PIRP v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r14d
  __int64 v38; // r12
  unsigned int v39; // ebx
  ULONG v40; // r15d
  unsigned int v41; // eax
  __int64 v42; // rdx
  _QWORD *v43; // rbx
  _QWORD *v44; // r14
  _QWORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rdx
  PVOID v49; // r14
  unsigned int v50; // edi
  _QWORD *v51; // rbx
  __int64 v52; // rax
  unsigned int InputBuffer; // [rsp+50h] [rbp-79h] BYREF
  PVOID Object[2]; // [rsp+58h] [rbp-71h] BYREF
  int *v56; // [rsp+68h] [rbp-61h]
  unsigned int v57; // [rsp+70h] [rbp-59h]
  PVOID P; // [rsp+78h] [rbp-51h]
  __int64 v59; // [rsp+80h] [rbp-49h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+88h] [rbp-41h]
  _DWORD *v61; // [rsp+90h] [rbp-39h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v62; // [rsp+98h] [rbp-31h]
  struct _KEVENT Event; // [rsp+A0h] [rbp-29h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-11h] BYREF

  v6 = *(_QWORD *)(a1 + 64);
  v7 = a6;
  v64 = 0LL;
  v8 = a4;
  v56 = a4;
  v9 = *(_DWORD *)(v6 + 3620) == -1;
  v61 = a3;
  v57 = a2;
  v59 = a1;
  v13 = 0;
  v62 = a6;
  InputBuffer = 0;
  P = 0LL;
  WaitBlockArray = 0LL;
  if ( !v9 )
    KeWaitForSingleObject(&::Event, Executive, 0, 0, 0LL);
  if ( *v8 <= 1 )
  {
    if ( !(unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
    {
      v17 = MONITOR_MGR::_pUsb4Manager;
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)Object, (struct DXGFASTMUTEX *)((char *)MONITOR_MGR::_pUsb4Manager + 80));
      while ( v17[18] )
      {
        MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)Object);
        KeWaitForSingleObject(v17 + 32, Executive, 0, 0, 0LL);
        MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)Object, (struct DXGFASTMUTEX *)(v17 + 20));
      }
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)Object);
    }
    a5 = 1;
  }
  else
  {
    DisplayLogSetMonitorPowerStage(a6, 1LL, 0LL, &v64);
    LOBYTE(v14) = 1;
    v13 = DpiAcquireCoreSyncAccessSafe(a1, v14);
    if ( v13 >= 0 )
    {
      DxgkReportMonitorPowerRapidHpdTriggerEvent(*(_QWORD *)(v6 + 4032), 1u);
      MonitorEnableDisableMonitor(*(_QWORD *)(v6 + 4032), a2, a3, 0LL);
      LOBYTE(v15) = 1;
      DpiReleaseCoreSyncAccessSafe(a1, v15);
    }
    DisplayLogSetMonitorPowerStage(a6, 2147483649LL, (unsigned int)v13, &v64);
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v6 + 484) )
    DpiCheckForOutstandingD3Requests(v6);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
  v18 = *(_DWORD *)(v6 + 236);
  if ( v18 != 2 && (*(_DWORD *)(v6 + 240) != 2 || ((v18 - 3) & 0xFFFFFFFC) != 0 || v18 == 4) )
  {
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
    goto LABEL_96;
  }
  if ( (unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 4032) + 3160LL) + 112LL);
    if ( v19 )
    {
      v27 = *(_QWORD *)(v19 + 96);
      if ( v27 )
      {
        USB4_POWERON_WORK_QUEUE::GetUsb4PowerFlushEvent(v27, Object);
        v28 = Object[0];
      }
      else
      {
        v28 = 0LL;
        Object[0] = 0LL;
      }
      if ( v28 )
      {
        if ( *(_BYTE *)(v6 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
        KeLeaveCriticalRegion();
        KeWaitForSingleObject(v28, Executive, 0, 0, 0LL);
        KeEnterCriticalRegion();
        if ( *(_BYTE *)(v6 + 484) )
          DpiCheckForOutstandingD3Requests(v6);
        ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
        v29 = *(_DWORD *)(v6 + 236);
        if ( v29 != 2 && (*(_DWORD *)(v6 + 240) != 2 || ((v29 - 3) & 0xFFFFFFFC) != 0 || v29 == 4) )
        {
          if ( *(_BYTE *)(v6 + 484) )
            DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
          KeLeaveCriticalRegion();
          wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)Object);
          goto LABEL_96;
        }
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1755;
      Object[0] = 0LL;
    }
    wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>((DxgkCompositionObject **)Object);
  }
  if ( *(_BYTE *)(v6 + 3649) && *v8 == 1 )
  {
    DisplayLogSetMonitorPowerStage(a6, 2LL, 0LL, &v64);
    DpiFdoInvalidateChildRelations(a1, 6LL, a6);
    DisplayLogSetMonitorPowerStage(a6, 2147483650LL, 0LL, &v64);
  }
  DisplayLogSetMonitorPowerStage(a6, 4LL, 0LL, &v64);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3440), 1u);
  if ( a5 )
  {
    v20 = *(unsigned int *)(v6 + 3800);
    if ( (_DWORD)v20 )
    {
      P = (PVOID)ExAllocatePool2(64LL, 56 * v20, 1953656900LL);
      v21 = (char *)P;
      if ( !P )
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 12303;
      }
      WaitBlockArray = (PKWAIT_BLOCK)&v21[8 * *(unsigned int *)(v6 + 3800)];
    }
  }
  v22 = (_QWORD *)(v6 + 3600);
  v23 = *(_QWORD **)(v6 + 3600);
  if ( v23 != (_QWORD *)(v6 + 3600) )
  {
    v24 = InputBuffer;
    while ( 1 )
    {
      v9 = *((_DWORD *)v23 - 8) == 1;
      v25 = v23;
      v23 = (_QWORD *)*v23;
      if ( v9 )
      {
        if ( *v61 == -1 )
          goto LABEL_56;
        v26 = 0LL;
        if ( v57 )
          break;
      }
LABEL_77:
      if ( v23 == v22 )
      {
        InputBuffer = v24;
        v7 = v62;
        goto LABEL_79;
      }
    }
    while ( v61[v26] != *((_DWORD *)v25 - 2) )
    {
      v26 = (unsigned int)(v26 + 1);
      if ( (unsigned int)v26 >= v57 )
        goto LABEL_77;
    }
LABEL_56:
    v30 = (struct _DEVICE_OBJECT *)v25[2];
    if ( v30 )
    {
      DeviceExtension = (__int64)v30->DeviceExtension;
      AttachedDeviceReference = IoGetAttachedDeviceReference(v30);
      if ( AttachedDeviceReference )
      {
        memset(&Event, 0, sizeof(Event));
        *(_OWORD *)Object = 0LL;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        InputBuffer = *v56;
        v33 = IoBuildDeviceIoControlRequest(
                0x23242Fu,
                AttachedDeviceReference,
                &InputBuffer,
                4u,
                0LL,
                0,
                1u,
                &Event,
                (PIO_STATUS_BLOCK)Object);
        if ( v33 )
        {
          v33->IoStatus.Status = -1073741637;
          v13 = IofCallDriver(AttachedDeviceReference, v33);
          if ( v13 == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            v13 = (NTSTATUS)Object[0];
          }
          if ( v13 < 0 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(DeviceExtension + 484) )
              DpiCheckForOutstandingD3Requests(DeviceExtension);
            ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
            v13 = DpiPdoSetDevicePower(v25[2], (unsigned int)*v56, 0LL);
            if ( *(_BYTE *)(DeviceExtension + 484) )
              DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
            KeLeaveCriticalRegion();
          }
          else if ( P )
          {
            ObfReferenceObject(*(PVOID *)(DeviceExtension + 24));
            if ( *v56 == 1 )
              v34 = DeviceExtension + 1008;
            else
              v34 = DeviceExtension + 984;
            v35 = v24++;
            *((_QWORD *)P + v35) = v34;
          }
        }
        else
        {
          v13 = -1073741670;
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 12458;
        }
        ObfDereferenceObject(AttachedDeviceReference);
      }
      else
      {
        v13 = -1073741823;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 12475;
      }
      v22 = (_QWORD *)(v6 + 3600);
    }
    *((_DWORD *)v25 + 9) = *v56;
    goto LABEL_77;
  }
LABEL_79:
  ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v6 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
  KeLeaveCriticalRegion();
  v36 = InputBuffer;
  if ( InputBuffer )
  {
    v37 = 10;
    do
    {
      v38 = 0LL;
      Object[0] = 0LL;
      --v37;
      v39 = v36;
      while ( v39 )
      {
        v40 = v39;
        if ( v39 > 0x40 )
          v40 = 64;
        Object[0] = (PVOID)(-1000000 * v36);
        v41 = KeWaitForMultipleObjects(
                v40,
                (PVOID *)P + v38,
                WaitAll,
                Executive,
                0,
                0,
                (PLARGE_INTEGER)Object,
                WaitBlockArray);
        v13 = v41;
        if ( v41 == 258 )
        {
          if ( v37 )
          {
            WdLogSingleEntry1(3LL);
            WdLogGlobalForLineNumber = 12545;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 12557;
          }
        }
        else if ( v41 )
        {
          DisplayLogSetMonitorPowerStage(v7, 2147483652LL, v41, &v64);
          WdLogSingleEntry1(2LL);
          v8 = v56;
          WdLogGlobalForLineNumber = 12566;
          goto LABEL_115;
        }
        v36 = InputBuffer;
        v39 -= v40;
        v38 = v40 + (unsigned int)v38;
      }
    }
    while ( v13 == 258 && v37 );
  }
  DisplayLogSetMonitorPowerStage(v7, 2147483652LL, (unsigned int)v13, &v64);
  v8 = v56;
LABEL_96:
  if ( *v8 == 1 )
  {
    DisplayLogSetMonitorPowerStage(v7, 8LL, 0LL, &v64);
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiCheckForOutstandingD3Requests(v6);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v6 + 168), 1u);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v6 + 3440), 1u);
    LOBYTE(v42) = 1;
    v13 = DpiAcquireCoreSyncAccessSafe(v59, v42);
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 12709;
    }
    else
    {
      v43 = *(_QWORD **)(v6 + 3600);
      while ( v43 != (_QWORD *)(v6 + 3600) )
      {
        v44 = v43;
        v43 = (_QWORD *)*v43;
        if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v44 - 7)) && !*((_BYTE *)v44 + 34) )
        {
          MonitorRemovePhysicalMonitor(*(void **)(v6 + 4032), *((_DWORD *)v44 - 2), 0, 0LL, v7);
          v45 = (_QWORD *)v44[2];
          if ( v45 )
          {
            v46 = v45[8];
            if ( v46 )
            {
              if ( *(_BYTE *)(v46 + 944) )
              {
                v13 = DpiPdoSetMonitorDriverInterfaceState(v45);
                if ( v13 < 0 )
                {
                  WdLogSingleEntry1(3LL);
                  WdLogGlobalForLineNumber = 12667;
                }
              }
            }
          }
        }
      }
      DxgkReportMonitorPowerRapidHpdTriggerEvent(*(_QWORD *)(v6 + 4032), 0);
      LOBYTE(v47) = 1;
      MonitorEnableDisableMonitor(*(_QWORD *)(v6 + 4032), v57, v61, v47);
      LOBYTE(v48) = 1;
      DpiReleaseCoreSyncAccessSafe(v59, v48);
    }
    DisplayLogSetMonitorPowerStage(v7, 2147483656LL, (unsigned int)v13, &v64);
    ExReleaseResourceLite((PERESOURCE)(v6 + 3440));
    KeLeaveCriticalRegion();
    if ( *(_BYTE *)(v6 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
    KeLeaveCriticalRegion();
  }
LABEL_115:
  v49 = P;
  if ( P )
  {
    v50 = InputBuffer;
    if ( InputBuffer )
    {
      v51 = (char *)P + 8 * InputBuffer;
      do
      {
        --v51;
        v52 = -984LL;
        if ( *v8 != 1 )
          v52 = -960LL;
        ObfDereferenceObject(*(PVOID *)(v52 + *v51));
        --v50;
      }
      while ( v50 );
    }
    ExFreePoolWithTag(v49, 0);
  }
  return (unsigned int)v13;
}
