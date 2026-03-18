/*
 * XREFs of DpiIndirectCbForceDisplaySwitch @ 0x1402505B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1401E08E0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

__int64 __fastcall DpiIndirectCbForceDisplaySwitch(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ebx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 || !*(_BYTE *)(v1 + 1158) )
    return 3221225485LL;
  LOBYTE(v4[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v4, 0LL, 0x38u, 0);
  v2 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (const struct _GUID *)v4[1], *(_QWORD *)(v1 + 5888));
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v4);
  return v2;
}
