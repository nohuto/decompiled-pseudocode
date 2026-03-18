/*
 * XREFs of DpiDisableMsBddFallbackDriverWorkItem @ 0x14024B2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DpiDisableMsBddFallbackDriver @ 0x14024B0EC (DpiDisableMsBddFallbackDriver.c)
 *     DpiPnpEnableVga @ 0x14024BC74 (DpiPnpEnableVga.c)
 */

void __fastcall DpiDisableMsBddFallbackDriverWorkItem(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  struct _GUID *v4; // rdi
  __int64 v5; // rdx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID *v7; // [rsp+28h] [rbp-10h]

  LOBYTE(v6) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(&v6, 0LL, 0x4Eu, 0);
  v4 = v7;
  LOBYTE(v5) = 1;
  DpiPnpEnableVga(0LL, v5, 0LL, v7);
  AcquireMiniportListMutex();
  if ( (unsigned int)(dword_1401691D0 - 4) <= 1 )
    DpiDisableMsBddFallbackDriver(v4);
  ReleaseMiniportListMutex();
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v6);
}
