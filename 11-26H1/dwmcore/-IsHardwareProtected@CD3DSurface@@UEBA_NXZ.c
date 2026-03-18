/*
 * XREFs of ?IsHardwareProtected@CD3DSurface@@UEBA_NXZ @ 0x1802A4BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CD3DSurface::IsHardwareProtected(CD3DSurface *this)
{
  return (*((_DWORD *)this + 45) & 0x80000) != 0;
}
