/*
 * XREFs of EPATHOBJ_bPolyLineTo @ 0x140099B70
 * Callers:
 *     <none>
 * Callees:
 *     ?bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140099EA4 (-bPolyLineTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 */

_BOOL8 __fastcall EPATHOBJ_bPolyLineTo(
        EPATHOBJ *a1,
        const struct EXFORMOBJR *a2,
        const struct _POINTL *a3,
        unsigned int a4)
{
  return EPATHOBJ::bPolyLineTo(a1, a2, a3, a4);
}
