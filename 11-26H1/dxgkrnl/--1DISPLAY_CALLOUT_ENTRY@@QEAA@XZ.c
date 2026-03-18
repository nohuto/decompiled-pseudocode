/*
 * XREFs of ??1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ @ 0x1401DBF00
 * Callers:
 *     ??_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z @ 0x1400764D8 (--_GDISPLAY_CALLOUT_ENTRY@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140061264 (-Release@CDisplayScenarioContextCarrier@@QEAAXXZ.c)
 */

void __fastcall DISPLAY_CALLOUT_ENTRY::~DISPLAY_CALLOUT_ENTRY(DISPLAY_CALLOUT_ENTRY *this)
{
  if ( *((_BYTE *)this + 21) )
    _InterlockedDecrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 474);
  CDisplayScenarioContextCarrier::Release((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)this + 8);
}
