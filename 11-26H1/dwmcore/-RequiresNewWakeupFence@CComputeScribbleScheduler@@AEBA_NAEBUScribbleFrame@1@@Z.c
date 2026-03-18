/*
 * XREFs of ?RequiresNewWakeupFence@CComputeScribbleScheduler@@AEBA_NAEBUScribbleFrame@1@@Z @ 0x18021F50C
 * Callers:
 *     ?SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z @ 0x18021B8C8 (-SetupWakeupFence@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CComputeScribbleScheduler::RequiresNewWakeupFence(
        CComputeScribbleScheduler *this,
        const struct CComputeScribbleScheduler::ScribbleFrame *a2)
{
  double v2; // xmm1_8
  double v3; // xmm0_8
  bool result; // al

  result = !*((_QWORD *)this + 14)
        || (v2 = *((double *)a2 + 2), v3 = *((double *)this + 23), v2 > v3)
        || v3 - v2 >= *((double *)this + 1);
  return result;
}
