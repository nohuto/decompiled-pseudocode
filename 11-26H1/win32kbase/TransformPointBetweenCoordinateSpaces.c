/*
 * XREFs of TransformPointBetweenCoordinateSpaces @ 0x140083490
 * Callers:
 *     <none>
 * Callees:
 *     LogicalToPhysicalDPIPoint @ 0x140083540 (LogicalToPhysicalDPIPoint.c)
 *     PhysicalToLogicalDPIPoint @ 0x1400847A0 (PhysicalToLogicalDPIPoint.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall TransformPointBetweenCoordinateSpaces(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned int v8; // eax
  int v10; // ebx

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  if ( a4 )
    v8 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v8 = W32GetCurrentThreadDpiAwarenessContext(a1, a2);
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v8 >> 8)) & 0x1FF) != 0 )
  {
    v10 = LogicalToPhysicalDPIPoint(a1, a2, v8, 0LL);
    return v10 | (unsigned int)PhysicalToLogicalDPIPoint(a1, a1, CurrentThreadDpiAwarenessContext, 0LL);
  }
  else
  {
    *a1 = *a2;
    return 0LL;
  }
}
