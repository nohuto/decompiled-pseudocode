/*
 * XREFs of PATHOBJ_bCloseFigure @ 0x1400C0AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x1400C2A10 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 */

BOOL __stdcall PATHOBJ_bCloseFigure(PATHOBJ *ppo)
{
  return EPATHOBJ::bCloseFigure((EPATHOBJ *)ppo);
}
