/*
 * XREFs of ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1401299A0
 * Callers:
 *     <none>
 * Callees:
 *     EngDeleteSurface @ 0x1401299D0 (EngDeleteSurface.c)
 */

void __fastcall StubDispDisableSurface(HSURF *a1)
{
  EngDeleteSurface(a1[1]);
  a1[1] = 0LL;
}
