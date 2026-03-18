/*
 * XREFs of Is_MonitorFromRectSupported @ 0x140083BBC
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x140082FC0 (TransformRectBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIRect @ 0x140083DF0 (PhysicalToLogicalDPIRect.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Is_MonitorFromRectSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 3504LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
