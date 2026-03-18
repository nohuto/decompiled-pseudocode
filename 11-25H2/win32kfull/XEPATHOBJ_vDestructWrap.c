/*
 * XREFs of XEPATHOBJ_vDestructWrap @ 0x1401E2D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ_vDestructWrap(EPATHOBJ *a1)
{
  EPATHOBJ::vUnlock(a1);
}
