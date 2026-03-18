/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@PEAPEAV2@@Z @ 0x1401A6D40
 * Callers:
 *     ?SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401DFF84 (-SetVirtualRenderAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1401A9D9C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401E08E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(
        ADAPTER_RENDER *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER **a3)
{
  DXGADAPTER *v6; // rcx
  struct _LUID *v7; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v8; // r11
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // [rsp+20h] [rbp-48h] BYREF
  _DXGK_WIN32K_PARAM_DATA v10; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+8h] BYREF

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 24, 0LL);
  *((_QWORD *)this + 4) = KeGetCurrentThread();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 48, 0LL);
  *((_QWORD *)this + 7) = KeGetCurrentThread();
  ADAPTER_RENDER::StopDisplayDevices(this, 2LL, 0LL);
  ADAPTER_RENDER::StopDisplayDevices(this, 1LL, 0LL);
  *a3 = a2;
  *((_QWORD *)this + 4) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 24, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 7) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 48, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v9) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v9, 0LL, 0x3Eu, 0);
  v6 = (DXGADAPTER *)*((_QWORD *)this + 2);
  *(_OWORD *)&v10.NumPathArrayElements = 0LL;
  v10.SDCFlags = 2447;
  *(_OWORD *)&v10.PathsArray = 0LL;
  v11 = 0LL;
  DXGADAPTER::IsAdapterSessionized(v6, v7, 0LL, &v11);
  DxgkRequestAsyncDisplaySwitchCallout(&v10, v8);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v9);
}
