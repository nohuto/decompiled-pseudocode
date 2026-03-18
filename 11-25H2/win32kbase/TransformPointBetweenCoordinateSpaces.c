/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x1400639E0
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x140041FA0 (PhysicalToLogicalDPIPoint.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x140063F60 (LogicalToPhysicalDPIPoint.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v8; // r8
  int v10; // ebx

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v8 = *(unsigned int *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v8 = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)((unsigned int)v8 >> 8)) & 0x1FF) != 0 )
  {
    v10 = LogicalToPhysicalDPIPoint(a1, a2, v8, 0LL);
    return v10 | (unsigned int)PhysicalToLogicalDPIPoint((__int64)a1, a1, CurrentThreadDpiAwarenessContext, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
