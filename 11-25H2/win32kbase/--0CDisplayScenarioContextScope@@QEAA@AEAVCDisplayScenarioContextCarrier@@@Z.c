/*
 * XREFs of ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x1400F7E48
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1400F76B4 (DrvProcessDxgkDisplayCallout.c)
 *     xxxVideoPortCalloutThread @ 0x1401B2AE8 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 */

CDisplayScenarioContextScope *__fastcall CDisplayScenarioContextScope::CDisplayScenarioContextScope(
        CDisplayScenarioContextScope *this,
        const struct _GUID **a2)
{
  *(_BYTE *)this = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(this, a2[1], 0, 0);
  return this;
}
