/*
 * XREFs of IsvDisableSynchronizeSupported @ 0x140187324
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1401B9140 (-vDisableSurface@PDEVOBJ@@QEAAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsvDisableSynchronizeSupported(__int64 a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 1552LL);
  if ( v1 )
    return v1();
  else
    return 3221225659LL;
}
