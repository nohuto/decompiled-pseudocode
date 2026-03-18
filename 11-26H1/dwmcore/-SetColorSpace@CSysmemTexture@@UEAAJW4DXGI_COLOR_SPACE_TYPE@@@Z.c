/*
 * XREFs of ?SetColorSpace@CSysmemTexture@@UEAAJW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802B9550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSysmemTexture::SetColorSpace(CSysmemTexture *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  *((_DWORD *)this - 13) = a2;
  return 0LL;
}
