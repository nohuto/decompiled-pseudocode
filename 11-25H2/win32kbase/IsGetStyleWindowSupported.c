/*
 * XREFs of IsGetStyleWindowSupported @ 0x14008A080
 * Callers:
 *     CreateCacheDC @ 0x140089BB0 (CreateCacheDC.c)
 *     UserSetDCVisRgn @ 0x14008A8F0 (UserSetDCVisRgn.c)
 *     GetMonitorDC @ 0x1400A4348 (GetMonitorDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 IsGetStyleWindowSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2608LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
