/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400853E0
 * Callers:
 *     GreGetStockObject @ 0x140084170 (GreGetStockObject.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140084250 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x1400847A0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x140084CB0 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x140085250 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 * Callees:
 *     IsValidKernelDpiAwarenessContext @ 0x140086440 (IsValidKernelDpiAwarenessContext.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 */

_DWORD *__fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  _DWORD *result; // rax
  unsigned int v2; // ebx
  _DWORD *v4; // [rsp+48h] [rbp+10h]

  v4 = *(_DWORD **)(a1 + 400);
  result = v4;
  if ( v4[1] )
  {
    v2 = *v4;
    if ( !*v4 || (unsigned int)IsValidKernelDpiAwarenessContext(v2) )
      *(_DWORD *)(a1 + 392) = v2;
    else
      *v4 = 0;
    result = v4;
    v4[1] = 0;
  }
  return result;
}
