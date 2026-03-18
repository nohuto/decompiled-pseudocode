/*
 * XREFs of ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140061264
 * Callers:
 *     ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x1400737BC (--1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ.c)
 *     ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400737F4 (--4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1USB4_POWERON_WORK_CONTEXT@@QEAA@XZ @ 0x140098AAC (--1USB4_POWERON_WORK_CONTEXT@@QEAA@XZ.c)
 *     ??1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ @ 0x1401DBF00 (--1DISPLAY_CALLOUT_ENTRY@@QEAA@XZ.c)
 *     DxgkProcessDisplayCalloutBatch @ 0x140438A20 (DxgkProcessDisplayCalloutBatch.c)
 * Callees:
 *     <none>
 */

void __fastcall CDisplayScenarioContextCarrier::Release(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *this)
{
  if ( *(_BYTE *)this )
    DisplayScenarioContextRelease(this + 1);
  *(_BYTE *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
}
