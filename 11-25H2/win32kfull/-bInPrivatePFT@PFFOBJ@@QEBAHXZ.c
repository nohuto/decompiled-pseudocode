/*
 * XREFs of ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x140107828
 * Callers:
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x1401071B4 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140107864 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x14010ED5C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     PFF_bUnloadWorkhorseForDCOBJ @ 0x1403100B0 (PFF_bUnloadWorkhorseForDCOBJ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFFOBJ::bInPrivatePFT(PFFOBJ *this, __int64 a2, __int64 a3)
{
  return *(_QWORD *)(*(_QWORD *)this + 136LL) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 20408LL);
}
