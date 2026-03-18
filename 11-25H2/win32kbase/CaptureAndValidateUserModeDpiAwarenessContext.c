/*
 * XREFs of CaptureAndValidateUserModeDpiAwarenessContext @ 0x140042C30
 * Callers:
 *     GreGetStockObject @ 0x140041950 (GreGetStockObject.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140041A20 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     PhysicalToLogicalDPIPoint @ 0x140041FA0 (PhysicalToLogicalDPIPoint.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1400424F0 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x140042AC0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1400431E4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     IsValidKernelDpiAwarenessContext @ 0x140100714 (IsValidKernelDpiAwarenessContext.c)
 */

_DWORD *__fastcall CaptureAndValidateUserModeDpiAwarenessContext(__int64 a1)
{
  _DWORD *result; // rax
  unsigned int v2; // ebx
  _DWORD *v4; // [rsp+58h] [rbp+10h]

  v4 = *(_DWORD **)(a1 + 408);
  result = v4;
  if ( v4[1] )
  {
    v2 = *v4;
    if ( !*v4 || (unsigned int)IsValidKernelDpiAwarenessContext(v2) )
      *(_DWORD *)(a1 + 400) = v2;
    else
      *v4 = 0;
    result = v4;
    v4[1] = 0;
  }
  return result;
}
