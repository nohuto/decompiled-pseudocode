/*
 * XREFs of IsUMPD_ldevUnloadImageSupported @ 0x140093094
 * Callers:
 *     vUnreferencePdevWorker @ 0x140092830 (vUnreferencePdevWorker.c)
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 IsUMPD_ldevUnloadImageSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1528LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
