/*
 * XREFs of DpiKsrStopAdapter @ 0x140252AB0
 * Callers:
 *     DxgkStopAdapters @ 0x1401E0C3C (DxgkStopAdapters.c)
 *     DpiFdoHandleSystemPower @ 0x1403BA2FC (DpiFdoHandleSystemPower.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1400321CC (DpiCheckForOutstandingD3Requests.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiFdoStopAdapter @ 0x140248A44 (DpiFdoStopAdapter.c)
 *     DpiLdaStopAllAdaptersInChain @ 0x140254E0C (DpiLdaStopAllAdaptersInChain.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286DB8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     DpiEnableD3Requests @ 0x14030EA10 (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiKsrStopAdapter(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  unsigned int v3; // edi
  struct _GUID *v6; // r14
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  DeviceExtension = (__int64)a1->DeviceExtension;
  v3 = 0;
  if ( *(_BYTE *)(DeviceExtension + 1158)
    || *(_BYTE *)(DeviceExtension + 2716)
    || *(_BYTE *)(DeviceExtension + 2718)
    || *(_BYTE *)(DeviceExtension + 2719)
    || *(_BYTE *)(DeviceExtension + 480) )
  {
    return 3221225659LL;
  }
  LOBYTE(v8[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v8, 0LL, 5u, 0);
  v6 = (struct _GUID *)v8[1];
  AcquireMiniportListMutex();
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests(DeviceExtension);
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(DeviceExtension + 168), 1u);
  if ( *(_DWORD *)(DeviceExtension + 504) )
    DpiLdaStopAllAdaptersInChain(a1, v6);
  else
    DpiFdoStopAdapter(a1, v6);
  if ( DeviceExtension && *(_DWORD *)(DeviceExtension + 16) == 1953656900 && *(_DWORD *)(DeviceExtension + 20) == 2 )
    SysMmDestroyAdapter(*(struct SYSMM_ADAPTER **)(DeviceExtension + 5824));
  if ( *(_BYTE *)(DeviceExtension + 484) )
    DpiEnableD3Requests(*(_QWORD *)(DeviceExtension + 24));
  ExReleaseResourceLite(*(PERESOURCE *)(DeviceExtension + 168));
  KeLeaveCriticalRegion();
  ReleaseMiniportListMutex();
  if ( a2 )
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v3 = PoCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 160), a2);
  }
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v8);
  return v3;
}
