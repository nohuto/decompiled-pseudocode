/*
 * XREFs of TransformRectBetweenCoordinateSpacesPerMonitor @ 0x14006398C
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     PhysicalToLogicalDPIRect @ 0x140063C70 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIRect @ 0x140064490 (LogicalToPhysicalDPIRect.c)
 */

__int64 TransformRectBetweenCoordinateSpacesPerMonitor(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, ...)
{
  int v6; // ebx
  va_list va; // [rsp+50h] [rbp+28h] BYREF

  va_start(va, a4);
  v6 = LogicalToPhysicalDPIRect(a1, a2, a4, va);
  return v6 | (unsigned int)PhysicalToLogicalDPIRect(a1, a1, a3, va);
}
