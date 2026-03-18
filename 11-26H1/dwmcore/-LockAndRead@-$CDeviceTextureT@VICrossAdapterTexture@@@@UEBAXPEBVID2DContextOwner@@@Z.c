/*
 * XREFs of ?LockAndRead@?$CDeviceTextureT@VICrossAdapterTexture@@@@UEBAXPEBVID2DContextOwner@@@Z @ 0x1802B8270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureT<ICrossAdapterTexture>::LockAndRead(__int64 a1)
{
  return DebugInspectTexture(*(struct ID3D11Texture2D **)(a1 + 16), *(_DWORD *)(a1 + 68));
}
