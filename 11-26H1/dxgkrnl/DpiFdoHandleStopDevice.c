/*
 * XREFs of DpiFdoHandleStopDevice @ 0x140242E80
 * Callers:
 *     DpiFdoHandleSurpriseRemoval @ 0x140243240 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoHandleRemoveDevice @ 0x14041A370 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiFdoIsPostDevice @ 0x140056A38 (DpiFdoIsPostDevice.c)
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400624D8 (DpiFdoIsMsBddAnchoredDevice.c)
 *     DpiRemoveAdapter @ 0x1400859EC (DpiRemoveAdapter.c)
 *     DxgkCompletePnPTransition @ 0x140204E64 (DxgkCompletePnPTransition.c)
 *     DxgkStartPnPTransition @ 0x14020531C (DxgkStartPnPTransition.c)
 *     DpiFdoCloseDeviceFileObject @ 0x14023FC14 (DpiFdoCloseDeviceFileObject.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiEnableMsBddFallbackDriver @ 0x14024B32C (DpiEnableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x14024BC74 (DpiPnpEnableVga.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x140254E0C (DpiLdaStopAllAdaptersInChain.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 *     DpiRequestIoPowerState @ 0x1403BE7FC (DpiRequestIoPowerState.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1403E7368 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiFdoStopMiracastSession @ 0x1403FB020 (DpiFdoStopMiracastSession.c)
 */

__int64 __fastcall DpiFdoHandleStopDevice(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _GUID *v4; // r14
  __int64 DeviceExtension; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  NTSTATUS v8; // r12d
  char *started; // r15
  char v10; // r13
  int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  void *v14; // rcx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v20; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF

  LOBYTE(v22[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v22, 0LL, 5u, 0);
  v4 = (struct _GUID *)v22[1];
  DeviceExtension = (__int64)a1->DeviceExtension;
  LOBYTE(v6) = 1;
  v23 = -300000000LL;
  v7 = 0LL;
  v8 = 0;
  started = 0LL;
  v10 = 0;
  DpiFdoStopMiracastSession(a1, v6, &v23, 130LL);
  AcquireMiniportListMutex();
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  if ( !*(_DWORD *)(DeviceExtension + 504) || *(_BYTE *)(DeviceExtension + 508) )
  {
    if ( *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
      v7 = DeviceExtension;
  }
  else
  {
    v12 = *(_QWORD *)(DeviceExtension + 2832);
    if ( v12 )
      v7 = *(_QWORD *)(v12 + 64);
  }
  if ( *(_DWORD *)(DeviceExtension + 240) == 2 )
  {
    v13 = *(_DWORD *)(DeviceExtension + 236);
    v10 = 1;
    if ( v13 == 5 || v13 == 6 )
    {
      started = DxgkStartPnPTransition(v4, 0LL, 0x200000000LL, 0LL);
      if ( !started )
      {
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 8002;
      }
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 236) == 6 && v7 )
  {
    if ( *(_BYTE *)(v7 + 480) )
    {
      if ( *(_DWORD *)(v7 + 4120) != 3 && *(_QWORD *)(v7 + 4032) )
      {
        DpiRemoveAdapter((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v4, v7, 0LL, 0LL, 1);
        *(_DWORD *)(v7 + 4120) = 3;
      }
    }
    else
    {
      DpiRequestIoPowerState(*(_QWORD *)(v7 + 24), 3, v11, 0, 0LL);
    }
  }
  if ( *(_DWORD *)(DeviceExtension + 504) )
  {
    DpiLdaStopAllAdaptersInChain(a1, v4);
  }
  else if ( *(_DWORD *)(DeviceExtension + 240) == 2 )
  {
    DpiFdoStopAdapter(a1, v4);
  }
  DpiFdoCloseDeviceFileObject(DeviceExtension);
  v14 = *(void **)(DeviceExtension + 1312);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(DeviceExtension + 1312) = 0LL;
  }
  if ( *(_DWORD *)(DeviceExtension + 236) != 4 )
  {
    *(_DWORD *)(DeviceExtension + 4LL * (*(_DWORD *)(DeviceExtension + 276) & 7) + 244) = *(_DWORD *)(DeviceExtension + 240);
    v15 = *(_DWORD *)(DeviceExtension + 236);
    ++*(_DWORD *)(DeviceExtension + 276);
    *(_DWORD *)(DeviceExtension + 240) = v15;
    *(_DWORD *)(DeviceExtension + 236) = 4;
  }
  WdLogSingleEntry1(4LL);
  WdLogGlobalForLineNumber = 8099;
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  v16 = *(_DWORD *)(DeviceExtension + 240);
  if ( v16 == 5 || v16 == 6 )
  {
    if ( v10 )
    {
      if ( DpiFdoIsMsBddAnchoredDevice((__int64)a1) && dword_1401691D0 == 2 )
        DpiEnableMsBddFallbackDriver(started, v4);
      if ( v7 && *(_BYTE *)(v7 + 2847) )
      {
        DxgkCompletePnPTransition((struct _PNP_TRANS_TOKEN *)started);
      }
      else
      {
        LOBYTE(v17) = 1;
        DpiPnpEnableVga(v17, 0LL, started, v4);
      }
    }
    if ( DpiFdoIsPostDevice((__int64)a1) )
      qword_140169080 = 0LL;
    if ( DpiFdoIsMsBddAnchoredDevice(v18) )
      qword_140169128 = 0LL;
  }
  ReleaseMiniportListMutex();
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    a2->IoStatus.Status = 0;
    v8 = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  if ( v7 )
    v20 = *(_QWORD *)(v7 + 4032);
  else
    v20 = 0LL;
  DxgkLogInternalTriageEvent(
    v20,
    131078,
    -1,
    (__int64)L"Adapter StopDevice has completed with status %1",
    v8,
    0LL,
    0LL,
    0LL,
    0LL);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v22);
  return (unsigned int)v8;
}
