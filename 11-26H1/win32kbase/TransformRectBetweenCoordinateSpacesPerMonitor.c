/*
 * XREFs of TransformRectBetweenCoordinateSpacesPerMonitor @ 0x140082868
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     LogicalToPhysicalDPIRect @ 0x140082A40 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x140083DF0 (PhysicalToLogicalDPIRect.c)
 */

__int64 TransformRectBetweenCoordinateSpacesPerMonitor(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, ...)
{
  int v6; // ebx
  va_list va; // [rsp+50h] [rbp+28h] BYREF

  va_start(va, a4);
  v6 = LogicalToPhysicalDPIRect(a1, a2, a4, va);
  return v6 | (unsigned int)PhysicalToLogicalDPIRect(a1, a1, a3, va);
}
