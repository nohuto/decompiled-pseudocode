/*
 * XREFs of ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x1400737BC
 * Callers:
 *     DxgkPollDisplayChildrenInternal @ 0x140410AB0 (DxgkPollDisplayChildrenInternal.c)
 * Callees:
 *     ?Release@CDisplayScenarioContextCarrier@@QEAAXXZ @ 0x140061264 (-Release@CDisplayScenarioContextCarrier@@QEAAXXZ.c)
 */

void __fastcall _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::~_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION(
        _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  CDisplayScenarioContextCarrier::Release((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)this + 3);
}
