/*
 * XREFs of ?HittestWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x140145140
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x140144620 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x140145174 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x14014523C (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 */

char __fastcall CMouseProcessor::HittestWheelRoutingRequested(CMouseProcessor *this)
{
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  __int64 v2; // rdx
  char v3; // r8

  MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
  v3 = 0;
  if ( MouseWheelForegroundThread )
    return (unsigned __int8)anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(
                              MouseWheelForegroundThread,
                              v2,
                              0LL) != 0;
  return v3;
}
