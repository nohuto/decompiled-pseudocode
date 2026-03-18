/*
 * XREFs of EPATHOBJ_bMoveTo @ 0x1400C0D80
 * Callers:
 *     <none>
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x1400C0E94 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 */

_BOOL8 __fastcall EPATHOBJ_bMoveTo(EPATHOBJ *a1, const struct EXFORMOBJR *a2, const struct _POINTL *a3)
{
  return EPATHOBJ::bMoveTo(a1, a2, a3);
}
