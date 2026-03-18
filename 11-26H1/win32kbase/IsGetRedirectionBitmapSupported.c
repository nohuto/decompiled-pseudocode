/*
 * XREFs of IsGetRedirectionBitmapSupported @ 0x14012D418
 * Callers:
 *     _GetDCEx @ 0x140036140 (_GetDCEx.c)
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsGetRedirectionBitmapSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2216LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
