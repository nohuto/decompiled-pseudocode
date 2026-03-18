/*
 * XREFs of ??0CDisplayScenarioContextCarrier@@QEAA@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14006CB74
 * Callers:
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14018F200 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401DB51C (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     <none>
 */

CDisplayScenarioContextCarrier *__fastcall CDisplayScenarioContextCarrier::CDisplayScenarioContextCarrier(
        CDisplayScenarioContextCarrier *this,
        const struct _GUID *a2)
{
  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( a2 )
    *(_BYTE *)this = DisplayScenarioContextFindAndAddRef(a2, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT **)this + 1);
  return this;
}
