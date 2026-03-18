/*
 * XREFs of ?GetPixelFormatInfo@CWarpLockSubresource@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802AA350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CWarpLockSubresource::GetPixelFormatInfo(_DWORD *a1, _DWORD *a2)
{
  *a2 = a1[13];
  a2[1] = a1[20];
  a2[2] = a1[21];
  return a2;
}
