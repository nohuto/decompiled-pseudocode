/*
 * XREFs of Is_MonitorFromRectSupported @ 0x140064450
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140063190 (TransformRectBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIRect @ 0x140063C70 (PhysicalToLogicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 Is_MonitorFromRectSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 3952LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
