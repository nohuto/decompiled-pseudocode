/*
 * XREFs of NtGdiEndGdiRendering @ 0x1400929C0
 * Callers:
 *     <none>
 * Callees:
 *     GreEndGdiRenderingToDxSurface @ 0x140092BA0 (GreEndGdiRenderingToDxSurface.c)
 */

__int64 __fastcall NtGdiEndGdiRendering(HSURF a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // r8d

  v4 = GreEndGdiRenderingToDxSurface(a1);
  if ( a3 )
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = 0;
  }
  return v4;
}
