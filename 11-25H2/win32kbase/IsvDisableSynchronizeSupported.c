/*
 * XREFs of IsvDisableSynchronizeSupported @ 0x1400931DC
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x140092BB0 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 *     bDynamicModeChange @ 0x1401793D8 (bDynamicModeChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 IsvDisableSynchronizeSupported()
{
  __int64 (*v0)(void); // rax

  v0 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 1592LL);
  if ( v0 )
    return v0();
  else
    return 3221225659LL;
}
