/*
 * XREFs of ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x14021F75C
 * Callers:
 *     ?ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x14021FA30 (-ComputeAndDeliverMouseWheel@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     ?GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ @ 0x1400B9534 (-GetMouseWheelForegroundThread@CMouseProcessor@@CAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting @ 0x1400B9754 (_anonymous_namespace_--HasThreadRequestedHittestMouseWheelRouting.c)
 *     _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1400B9C04 (_anonymous_namespace_--HasThreadRequestedFocusMouseWheelRouting.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CMouseProcessor::AppCompatWheelRoutingRequested(CMouseProcessor *this, __int64 a2)
{
  struct tagTHREADINFO *MouseWheelForegroundThread; // rax
  char v3; // bl
  __int64 v4; // rdi
  char HasThreadRequestedHittestMouseWheelRouting; // al
  char v6; // r8

  MouseWheelForegroundThread = CMouseProcessor::GetMouseWheelForegroundThread((__int64)this, a2);
  v3 = 0;
  v4 = (__int64)MouseWheelForegroundThread;
  if ( MouseWheelForegroundThread )
  {
    anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting((__int64)MouseWheelForegroundThread);
    HasThreadRequestedHittestMouseWheelRouting = anonymous_namespace_::HasThreadRequestedHittestMouseWheelRouting(v4);
    if ( v6 )
    {
      if ( HasThreadRequestedHittestMouseWheelRouting )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5042);
      else
        v3 = 1;
    }
    LOBYTE(MouseWheelForegroundThread) = v3;
  }
  return (char)MouseWheelForegroundThread;
}
