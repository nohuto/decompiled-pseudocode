/*
 * XREFs of PATHOBJ_bMoveTo @ 0x1401416D0
 * Callers:
 *     <none>
 * Callees:
 *     ?bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z @ 0x140099CE8 (-bMoveTo@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@@Z.c)
 */

BOOL __stdcall PATHOBJ_bMoveTo(PATHOBJ *ppo, POINTFIX ptfx)
{
  struct _POINTL v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = (struct _POINTL)ptfx;
  return (unsigned __int8)EPATHOBJ::bMoveTo((EPATHOBJ *)ppo, 0LL, &v3);
}
