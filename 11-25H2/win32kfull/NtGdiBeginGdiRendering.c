/*
 * XREFs of NtGdiBeginGdiRendering @ 0x140092A20
 * Callers:
 *     <none>
 * Callees:
 *     GreBeginGdiRenderingToDxSurface @ 0x140092A38 (GreBeginGdiRenderingToDxSurface.c)
 */

__int64 __fastcall NtGdiBeginGdiRendering(HSURF a1)
{
  return GreBeginGdiRenderingToDxSurface(a1);
}
