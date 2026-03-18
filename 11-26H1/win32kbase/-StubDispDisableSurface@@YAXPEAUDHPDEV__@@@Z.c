/*
 * XREFs of ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x140121D30
 * Callers:
 *     <none>
 * Callees:
 *     EngDeleteSurface @ 0x140121E90 (EngDeleteSurface.c)
 */

void __fastcall StubDispDisableSurface(HSURF *a1)
{
  EngDeleteSurface(a1[1]);
  a1[1] = 0LL;
}
