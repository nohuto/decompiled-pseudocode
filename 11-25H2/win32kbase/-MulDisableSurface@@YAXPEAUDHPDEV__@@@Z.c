/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x140129880
 * Callers:
 *     <none>
 * Callees:
 *     EngUnlockSurface @ 0x14001CEB0 (EngUnlockSurface.c)
 *     EngDeleteClip @ 0x140129970 (EngDeleteClip.c)
 *     EngDeleteSurface @ 0x1401299D0 (EngDeleteSurface.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  EngDeleteClip(*((CLIPOBJ **)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  EngDeleteSurface(*((HSURF *)a1 + 3));
}
