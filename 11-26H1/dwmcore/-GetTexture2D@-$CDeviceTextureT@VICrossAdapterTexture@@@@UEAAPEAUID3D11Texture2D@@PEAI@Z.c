/*
 * XREFs of ?GetTexture2D@?$CDeviceTextureT@VICrossAdapterTexture@@@@UEAAPEAUID3D11Texture2D@@PEAI@Z @ 0x1802B7E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureT<ICrossAdapterTexture>::GetTexture2D(__int64 a1, _DWORD *a2)
{
  if ( a2 )
    *a2 = *(_DWORD *)(a1 + 68);
  return *(_QWORD *)(a1 + 16);
}
