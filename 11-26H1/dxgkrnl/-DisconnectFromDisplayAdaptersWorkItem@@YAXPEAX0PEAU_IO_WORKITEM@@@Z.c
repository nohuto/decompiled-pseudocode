/*
 * XREFs of ?DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1401A7130
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DxgkRequestSyncDisplaySwitchCallout @ 0x1401E09BC (DxgkRequestSyncDisplaySwitchCallout.c)
 */

void __fastcall DisconnectFromDisplayAdaptersWorkItem(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r8
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h] BYREF
  __int128 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+58h] [rbp-28h]
  struct _DXGK_WIN32K_PARAM_DATA v10; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0x100000000LL;
  if ( (_DWORD)Context != -1 )
    v4 = (unsigned int)Context;
  LOBYTE(v6[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v6, 0LL, 0x3Eu, 0);
  *(_OWORD *)&v10.NumPathArrayElements = 0LL;
  v10.SDCFlags = 2447;
  *(_OWORD *)&v10.PathsArray = 0LL;
  DxgkRequestSyncDisplaySwitchCallout(&v10, v6[1], v4);
  v7 = 10LL;
  LOBYTE(v5) = 1;
  v9 = 0LL;
  v8 = 0LL;
  SMgrGdiCallout(&v7, v4, v5, &IncreaseAdapterUniquenessCallback, 0LL, 0LL);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v6);
}
