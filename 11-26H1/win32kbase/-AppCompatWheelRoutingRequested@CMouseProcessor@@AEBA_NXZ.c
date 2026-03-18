/*
 * XREFs of ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1401450CC
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x140144620 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x140145174 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x14014523C (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1401452AC (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CMouseProcessor::AppCompatWheelRoutingRequested(CMouseProcessor *this)
{
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  char v2; // bl
  struct tagTHREADINFO *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  char HasThreadRequestedHittestMouseWheelRouting; // al
  char v7; // r8

  MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread();
  v2 = 0;
  v3 = MouseWheelForegroundThread;
  if ( MouseWheelForegroundThread )
  {
    LOBYTE(v4) = anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(MouseWheelForegroundThread);
    HasThreadRequestedHittestMouseWheelRouting = anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(
                                                   v3,
                                                   v5,
                                                   v4);
    if ( v7 )
    {
      if ( HasThreadRequestedHittestMouseWheelRouting )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5053LL);
      else
        v2 = 1;
    }
    LOBYTE(MouseWheelForegroundThread) = v2;
  }
  return (char)MouseWheelForegroundThread;
}
