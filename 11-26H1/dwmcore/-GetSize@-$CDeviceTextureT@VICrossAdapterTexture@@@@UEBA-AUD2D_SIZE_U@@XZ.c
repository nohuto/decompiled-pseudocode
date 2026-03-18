/*
 * XREFs of ?GetSize@?$CDeviceTextureT@VICrossAdapterTexture@@@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1802B7DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDeviceTextureT<ICrossAdapterTexture>::GetSize(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 24);
  a2[1] = *(_DWORD *)(a1 + 28);
  return a2;
}
