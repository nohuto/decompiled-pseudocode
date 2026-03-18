/*
 * XREFs of ??0CDisplayScenarioContextScope@@QEAA@AEAVCDisplayScenarioContextCarrier@@@Z @ 0x14013DABC
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x14013D67C (DrvProcessDxgkDisplayCallout.c)
 *     xxxVideoPortCalloutThread @ 0x1401AA0D4 (xxxVideoPortCalloutThread.c)
 * Callees:
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
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
