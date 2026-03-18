/*
 * XREFs of ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x140105C4C
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x140104D2C (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x140104F04 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z @ 0x140105B38 (-bDeleteLoadRef@PFFOBJ@@QEAAHKPEAUtagPvtData@@PEAH@Z.c)
 *     PFF_bUnloadWorkhorseForDCOBJ @ 0x140329980 (PFF_bUnloadWorkhorseForDCOBJ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFFOBJ::bInPrivatePFT(PFFOBJ *this, __int64 a2, __int64 a3)
{
  return *(_QWORD *)(*(_QWORD *)this + 136LL) == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 20384LL);
}
