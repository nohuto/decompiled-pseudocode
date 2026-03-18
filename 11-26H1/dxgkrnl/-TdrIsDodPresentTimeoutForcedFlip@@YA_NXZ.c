/*
 * XREFs of ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1401D98D8
 * Callers:
 *     ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1403C2B40 (-PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOn.c)
 * Callees:
 *     <none>
 */

bool TdrIsDodPresentTimeoutForcedFlip(void)
{
  return _InterlockedExchange(&g_TdrForceDodPresentTimeout, 0) != 0;
}
