/*
 * XREFs of PATHOBJ_bCloseFigure @ 0x14009C480
 * Callers:
 *     <none>
 * Callees:
 *     ?bCloseFigure@EPATHOBJ@@QEAA_NXZ @ 0x14009A930 (-bCloseFigure@EPATHOBJ@@QEAA_NXZ.c)
 */

BOOL __stdcall PATHOBJ_bCloseFigure(PATHOBJ *ppo)
{
  return (unsigned __int8)EPATHOBJ::bCloseFigure((EPATHOBJ *)ppo);
}
