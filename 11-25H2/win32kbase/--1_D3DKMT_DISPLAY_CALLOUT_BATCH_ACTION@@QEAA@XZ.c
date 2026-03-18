/*
 * XREFs of ??1_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@QEAA@XZ @ 0x1400F7A70
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1400F76B4 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     <none>
 */

void __fastcall _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION::~_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION(
        _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( *((_BYTE *)this + 24) )
    DisplayScenarioContextRelease((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  *((_BYTE *)this + 24) = 0;
}
