/*
 * XREFs of ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x140121D60
 * Callers:
 *     <none>
 * Callees:
 *     EngDeleteClip @ 0x140121E60 (EngDeleteClip.c)
 *     EngDeleteSurface @ 0x140121E90 (EngDeleteSurface.c)
 *     EngUnlockSurface @ 0x140121ED0 (EngUnlockSurface.c)
 */

void __fastcall MulDisableSurface(struct DHPDEV__ *a1)
{
  EngDeleteClip(*((CLIPOBJ **)a1 + 7));
  EngUnlockSurface(*((SURFOBJ **)a1 + 6));
  EngDeleteSurface(*((HSURF *)a1 + 3));
}
