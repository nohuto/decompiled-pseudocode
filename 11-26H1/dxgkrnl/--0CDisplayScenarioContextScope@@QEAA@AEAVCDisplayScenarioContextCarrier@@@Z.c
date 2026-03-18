/*
 * XREFs of ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x14003BC64
 * Callers:
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 */

CDisplayScenarioContextScope *__fastcall CDisplayScenarioContextScope::CDisplayScenarioContextScope(
        CDisplayScenarioContextScope *this,
        struct CDisplayScenarioContextCarrier *a2)
{
  *(_BYTE *)this = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(
    this,
    (const struct _GUID *)(*((_QWORD *)a2 + 1) & ((unsigned __int128)-(__int128)*((unsigned __int64 *)a2 + 1) >> 64)),
    0,
    0);
  return this;
}
